#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STACK_SIZE 100


typedef char element[20]; 

typedef struct {
    element data[MAX_STACK_SIZE];
    int top;
} StackType;

void init_stack(StackType* s) 
{  
    s->top = -1;
}
int is_empty(StackType* s) 
{  
    return (s->top == -1);
}
int is_full(StackType* s) 
{ 
    return (s->top == (MAX_STACK_SIZE - 1)); 
}

void push(StackType* s, char* item) {
    if (is_full(s)) return;
    strcpy(s->data[++(s->top)], item);
}

char* pop(StackType* s) {
    if (is_empty(s)) exit(1);
    return s->data[(s->top)--];
}


int check_html_matching(const char* in) {
    StackType s;
    char tag_name[20];
    char open_tag[20];
    int i = 0, n = strlen(in);
    init_stack(&s);

    for (i = 0; i < n; i++) {
        
        if (in[i] == '<') {
            int k = 0;
            i++; 

            
            if (in[i] == '/') {
                i++;
                while (in[i] != '>' && in[i] != '\0') {
                    tag_name[k++] = in[i++];
                }
                tag_name[k] = '\0';

                
                if (is_empty(&s)) return 0; 
                strcpy(open_tag, pop(&s));
                if (strcmp(open_tag, tag_name) != 0) {
                    return 0; 
                }
            } 
           
            else {
                while (in[i] != '>' && in[i] != '\0') {
                    tag_name[k++] = in[i++];
                }
                tag_name[k] = '\0';
                push(&s, tag_name);
            }
        }
    }

    if (!is_empty(&s)) return 0; 
    return 1; 
}

int main(void) {
    char* p1 = "<div><p></p></div>";
    char* p2 = "<div><p></div></p>"; 

    printf("%s\n", p1);
    if (check_html_matching(p1) == 1)
        printf("올바른 구조입니다\n\n");
    else
        printf("올바르지 않은 구조입니다\n\n");

    printf("%s\n", p2);
    if (check_html_matching(p2) == 1)
        printf("올바른 구조입니다\n");
    else
        printf("올바르지 않은 구조입니다\n");

    return 0;
}