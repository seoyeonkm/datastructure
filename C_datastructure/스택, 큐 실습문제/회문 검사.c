#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STACK_SIZE 100

typedef char element; 

typedef struct {
    element data[MAX_STACK_SIZE];
    int capacity;
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

void push(StackType* s, element item)
{
    if (is_full(s)) {
        fprintf(stderr, "스택 포화 에러\n");
        return;
    }
    else s->data[++(s->top)] = item;
}

element pop(StackType* s)
{
    if (is_empty(s)) {
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else return s->data[(s->top)--];
}

element peek(StackType* s)
{
    if (is_empty(s)) {
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else return s->data[s->top];
}

int is_palindrome(char str[]) 
{
    StackType s;
    init_stack(&s);
    char filtered_str[MAX_STACK_SIZE];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            filtered_str[j] = tolower(str[i]);
            push(&s, filtered_str[j]);
            j++;
        }
    }
    filtered_str[j] = '\0';

    for (int i = 0; i < j; i++) {
        if (filtered_str[i] != pop(&s)) {
            return 0;
        }
    }
    return 1;
}



int main()
{
    char* tests[] = {"eye", "Madam, I'm Adam", "race car"};

    for (int i = 0; i < 3; i++) {
        if (is_palindrome(tests[i])) {
            printf("회문입니다\n");
        }
        else {
            printf("회문이 아닙니다\n");
        }
    }
    return 0;
}