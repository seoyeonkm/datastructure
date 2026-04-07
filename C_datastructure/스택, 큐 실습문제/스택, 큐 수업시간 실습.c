/*
// 전역변수로 구현하는 방법


#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100
typedef int element;


element stack[MAX_STACK_SIZE];
int top = -1;

int is_empty() {
    return (top == -1);
}

int is_full() {
    return (top == (MAX_STACK_SIZE - 1));
}
void push(element item)                           *** 그럼 전역변수로 구현할 때랑 구조체 배열로 구할떄랑 어떤 것이 사용하기에 더 선호하는거야?!!!!!
{
    if (is_full()) {
        fprintf(stderr, "스택 포화 에러\n");
        return;
    }
    else    
        stack[++top] = item;
}

element pop()
{
    if(is_empty()) {
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else    
        return stack[top--];
}

int main(void)
{
    push(1);
    push(2);
    push(3);
    printf("%d\n", pop());           // pop이 되는 대상들 출력하기. 나가는 순서대로 출력하기.
    printf("%d\n", pop());
    printf("%d\n", pop());
}


/*
// 구조체 배열로 구현하는 방법


#define MAX_STACK_SIZE 100
typedef int element;
typedef struct {
    element data[MAX_STACK_SIZE];
    int top;
} StackType;

// 스택 초기화 함수
void init_stack(StackType *s)
{
    s->top == -1;            // 구조체에 접근하는 연산자 ->
}

// 공백 상태 검출 함수

int is_empty(StackType *s)
{
    return (s->top == -1);
}

// 포화 상태 검출 함수

int is_full(StackType *s)
{
    return (s->top == (MAX_STACK_SIZE - 1))
}

// 삽입함수
void push(StackType *S, element item)
{
    if (is_full(s)) {
        fprintf(stderr, "스택 포화 에러\n");
        return;
    }
    else {
        s->data[++(s->top)] = item;
    }
}
 
// 삭제함수
element pop(StackType *s)
{
    if (is_empty(s)) {
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else
        return s->data[(s->top)--]
}

int main(void)
{
    StackType s;

    init_stack(&s);

    push(&s, 1);
    push(&s, 2);
    push(&s, 3);

    printf("%d\n", pop(&s));
    printf("%d\n", pop(&s));
    printf("%d\n", pop(&s));
}


// 괄호 검사 알고리즘 프로그램

int main(void)
{
    char * p = "{A[(i + 1)] = 0}";
    if (check_matching(p) == 1)
        printf("%s 괄호 검사 성공\n", p);
    else
        printf("%s 괄호 검사 실패\n", p);
    return 0;
}

int check_matching(const char *in)
{
    StackType s;            // 스택 정의
    char ch, open_ch;       // ch는 현재 문자, open_ch는 스택에서 꺼낸 괄호
    int i, n = strlen(in);  // n은 문자열의 길이
    init_stack(&s);          // 스택의 초기화

    for (i = 0; i < n; i++) {
        ch = in[i];          // ch = 다음 문자
        switch (ch) {
            case '(': case '[': case '{':               // 왼쪽 괄호이면 스택에 삽입
                push(&s, ch);         // 스택에 추가
                break; 
            case ')': case ']': case '}':               // 오른쪽 괄호이면 스택에서 삭제하며 비교
                if (is_empty(&s))        // 스택이 비어있을 때에도 오류가 나야함
                    return 0;
                else {
                    open_ch = pop(&s);   // 스택에서 삭제되면서 오류를 검사       // 오른쪽, 왼쪽 같은 짝이 아니라면 오류를 보고해야한다.
                    if ((open_ch == '(' && ch != ')')) ||
                       ((open_ch == '[' && ch != ']')) ||
                       ((open_ch == '{' && ch != '}')) 

                       return 0;
                }
                break;
        }
    }
    if (!is_empty(&s))
        return 0;                // 스택에 남아있으면 오류    // 왼쪽 괄호가 더 많이 남아있다는 뜻이므로. 그래서 스택이 비어있다면 성공이다!!!
    else       
        return 1;
}


// 수식의 계산:
전위, 후위 계산하는 방법 
-> 피연산자이면 스택에 저장
-> 연산자이면 필요한 수 만큼의 피연산자를 스택에서 꺼내 연산을 실행. 연산의 결과를 다시 스택에 저장.

// 후위 표기식 계산 알고리즘 프로그램


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK_SIZE 100

typedef char element;
typedef struct {
    element data[MAX_STACK_SIZE];
    int top;
} StackType;

void init_stack(StackType *s)
{
    s->top = -1;            // 구조체에 접근하는 연산자 ->
}


int is_empty(StackType *s)
{
    return (s->top == -1);
}


int is_full(StackType *s)
{
    return (s->top == (MAX_STACK_SIZE - 1));
}


void push(StackType *s, element item)
{
    if (is_full(s)) {
        fprintf(stderr, "스택 포화 에러\n");
        return;
    }
    else {
        s->data[++(s->top)] = item;
    }
}
 
element pop(StackType *s)
{
    if (is_empty(s)) {
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else
        return s->data[(s->top)--];
}

// 후위 표기 수식 계산 함수

int eval(char exp[])
{
    int op1, op2, value, i = 0;
    int len = strlen(exp);
    char ch;
    StackType s;
    
    for(i = 0; i < len; i++) {
        ch = exp[i];
        if (ch != '+' && ch != '-' && ch != '*' && ch != '/') {
            value = ch - '0';                          // 문자 형태의 숫자를 정수 형태로 변환하는 것
            push(&s, value);
        }
        else {
            op2 = pop(&s);
            op1 = pop(&s);
            switch (ch) {                              // if-else문보다 사용하기 편리하고, 쉬워서.
                case '+' : push(&s, op1 + op2);
                break;
                
                case '-' : push(&s, op1 - op2);
                break;

                case '*' : push(&s, op1 * op2);
                break;

                case '/' : push(&s, op1 / op2);
                break;
            }
        }
    }
    return pop(&s);
}

int main(void)
{
    int result;
    printf("후위표기식은 82/3-32*+\n");
    result = eval("82/3-32*+");
    printf("결과값은 %d\n", result);
    return 0;
}
*/