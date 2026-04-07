
(0) 동적 메모리 할당
: 일반적인 배열은 크기가 고정되어있기 때문에 문제가 발생한다. 따라서 필요한 만큼의 메모리를 운영체제로부터 할당받아서 사용하고, 사용이 끝나면 시스템에 메모리를 반납하는 기능

int* p;
p = (int*)malloc(sizeof(int));   // 동적 메모리 할당
*p = 1000;                       // 동적 메모리 사용
free(p);                         // 동적 메모리 반납  

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define SIZE 10

int main(void)
{
    int* p;

    p = (int*)malloc(SIZE*sizeof(int));        // 동적 메모리 할당

    if (p == NULL) {
        fprintf(stderr, "메모리가 부족해서 할당할 수 없습니다\n");   
        exit(1);
    }

    for (int i = 0; i < SIZE; i++) {
        p[i] = i;                             // 동적 메모리 사용
        printf("%d ", p[i]);
    }

    free(p);                                  // 동적 메모리 반납
    return 0;
}

(0) 구조체와 포인터
: 우리는 구조체에 대한 포인터를 선언하고 포인터를 통하여 구조체 멤버에 접근할 수 있다 (->)

#include <stdio.h>
#incldue <stdlib.h>
#include <string.h>

typedef struct studentTag {
    char name[10];
    int age;
    double gpa;
} student;

int main(void)
{
    student* s;
 
    s = (student*)malloc(sizeof(student));                 // 동적 메모리 할당

    if (s == NULL) {
    fprintf(stderr, "메모리가 부족해서 할당할 수 없습니다\n");
    exit(1);
    }

    strcpy(s->name, "Park");
    s->age = 20;

    free(s);
    return 0;
}


1. 전역 변수로 스택을 구현하는 방법
: 전역변수로 구현되기 때문에 배열이나 top 변수를 함수의 매개변수로 전달할 필요가 없다
- 스택에 저장되는 데이터 타입은 typedef를 이용하여 element로 정의되어있다
- push 연산은 top을 먼저 증가시킨 다음, 증가된 위치에 데이터를 저장한다
- pop 연산은 top이 가리키는 위치에서 데이터를 꺼내온 다음 top을 하나 감소시킨다


#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100
typedef int element;                                       // 스택이 전역변수로 구현된다
element stack[MAX_STACK_SIZE];        // 1차원 배열
int top = -1;                         // top = -1은 스택이 비어있을 때 

int is_empty()
{
    return (top == -1);
}

int is_full()
{
    return (top == (MAX_STACK_SIZE - 1));  // 같으면 포화 상태로 판정
}

void push(element item)
{
    if (is_full()) {
        fprintf(stderr, "스택 포화 에러\n");
        return;
    }
    else stack[++top] = item;
}

element pop()
{
    if (is_empty()) {
        fprintf(stderr, "스택 공백 에러/n");
        exit(1);
    }
    else return stack[top--];
}
 
element peek()              // 데이터를 꺼내지 않고 확인만 하고 싶을 때 peek() 사용
{
    if (is_empty()) {
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else return stack[top];
}

int main(void)
{
    push(1);
    push(2);
    push(3);
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    return 0;
}

2. 스택의 요소를 구조체로 만드는 프로그램
: 만약 스택에 저장되어야 하는 값이 정수나 문자가 아니고 더 복잡한 구조를 갖는 요소이면 스택에 구조체를 저장해야한다


#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100
#define MAX_STRING 100

typedef struct {
    int student_no;
    char name[MAX_STRING];
    char address[MAX_STRING];
} element;

element stack[MAX_STACK_SIZE];
int top = -1;

int is_empty()
{
    return (top == -1);
}

int is_full()
{
    return (top == (MAX_STACK_SIZE - 1));
}

void push(element item)
{
    if (is_full()) {
        fprintf(stderr, "스택 포화 에러\n");
        return;
    }
    else stack[++top] = item;
}

element pop()
{
    if (is_empty()) {
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else return stack[top--];
}

element peek()
{
    if (is_empty()) {
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else return stack[top];     // 그냥 확인만 하는거니까 top에 대한 변화는 없음
}

int main(void)
{
    element ie = {20190001, "Hong", "Seoul"};
    element oe;

    push(ie);
    oe = pop();             // 데이터를 담는 그릇 이라고 생각하면 편함

    printf("학번: %d\n", oe.student_no);
    printf("이름: %d\n", oe.name);
    printf("주소: %d\n", oe.address);
    return 0;
}


3. 관련된 데이터를 함수의 매개변수로 전달하는 방법


#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

typedef int element;

typedef struct {                     // 스택이 구조체로 정의된다
    element data[MAX_STACK_SIZE];
    int top; 
} StackType;

void init_stack(StackType *s)    // 스택 초기화 함수
{
    s->top = -1;                 // ->는 구조체 안의 내용을 가리키는 포인터 
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
        fprintf(stderr, "스택 포화 상태 에러\n");
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

int main(void)
{
    StackType* s;            // 스택이 정적으로 생성된다

    init_stack(&s);
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    printf("%d\n", pop(&s));
    printf("%d\n", pop(&s));
    printf("%d\n", pop(&s));
}


4. 동적 배열 스택


#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100

typedef int element;
typedef struct {
    element* data;  // 데이터 저장 공간
    int capacity;   // 현재 크기  
    int top;        // 현재 위치
} StackType;

void init_stack(StackType* s)
{
    s->top = -1;
    s->capacity = 1;
    s->data = (element*)malloc(s->capacity * sizeof(element));
}

int is_empty(StackType* s)
{
    return (s->top == -1);
}

int is_full(StackType* s)
{
    return (s->top == (s->capacity - 1));      //  현재 크기에서 곽 차있는지 비교하려면 capacity 이용해야함
}

void push(StackType* s, element item)
{
    if (is_full(s)) {
        s->capacity *= 2;                                                 // 공간이 부족하면 메모리를 2배로 확보해야함
        s->data = realloc(s->data, s->capacity * sizeof(element));        // realloc()은 동적 메모리의 크기를 변경하는 함수로서 현재 내용은 유지하면서 주어진 크기로 동적 메모리를 다시 할당
    } 
    s->data[++(s->top)] = item;       // s->data가 앞에 붙는 이유는 저장 공간 전체 중에서 맨 위의 값 하나를 선택하라는 의미
}

element pop(StackType* s)
{
    if (is_empty(s)) {
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else return s->data[(s->top)--];   
}

int main(void)
{
    StackType s;
    init_stack(&s);
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    printf("%d \n", pop(&s));
    printf("%d \n", pop(&s));
    printf("%d \n", pop(&s));
    free(s.data);
    return 0;
}

5. 괄호 검사 프로그램


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK_SIZE 100

typedef char element;

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

void push(StackType* s, element item)
{
    if (is_full(s)) {
        fprintf(stderr, "스택 포화 상태 에러\n");
        return;
    }
    else s->data[++(s->top)] = item;
}

// 스택에서 값 꺼내기
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

int check_matching(const char* in)
{
    StackType s;
    char ch, open_ch;
    int i, n = strlen(in);     // n = 문자열의 길이
    init_stack(&s);            // 스택의 초기화

    for (i = 0; i < n; i++) {
        ch = in[i];
        switch (ch) {
            case '(' : case '[' : case '{':        // 여는 괄호면 push
                push(&s, ch);
                break;
            case ')' : case ']' : case '}':       // 닫는 괄호면 검사
                if (is_empty(&s)) return 0;       // 짝 없음->실패
                else {
                    open_ch = pop(&s);
                    if ((open_ch == '(' && ch != ')') ||          // 짝이 맞는지 확인
                        (open_ch == '[' && ch != ']') ||
                        (open_ch == '{' && ch != '}')) {
                        return 0;              // 짝 안맞음
                    }
                    break;
                } 
        }
    }
    if (!is_empty(&s)) return 0;    // 스택에 남아있으면 오류
    return 1;                       // 성공
}

int main(void)
{
    char* p = "{ A[(i+1)] = 0; }";
    if (check_matching(p) == 1)
        printf("%s 괄호검사성공\n", p);
    else
        printf("%s 괄호검사실패\n", p);
    return 0;
}

6. 후위 표기 수식의 계산


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100

typedef int element;

typedef struct {
    element data[MAX_STACK_SIZE];
    int capacity;
    int top;
} StackType;

void init_stack(StackType* s)     // 스택 초기화
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

void push (StackType* s, element item)
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

int eval(char exp[])
{
    int op1, op2, value, i = 0;
    int len = strlen(exp);
    char ch;
    StackType s;

    init_stack(&s);
    for (i = 0; i < len; i++) {
        ch = exp[i];
        if (ch != '+' && ch != '-' && ch != '*' && ch != '/') {
            value = ch - '0';    // 입력이 피연산자면
            push(&s, value);
        }
        else {                 // 입력이 연산자이면 피연산자를 스택에서 제거(꺼내서 계산해야하니까)
            op2 = pop(&s);
            op1 = pop(&s);
            switch (ch) {
                case '+': push(&s, op1 + op2); break;
                case '-': push(&s, op1 - op2); break;
                case '*': push(&s, op1 * op2); break;
                case '/': push(&s, op1 / op2); break;

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

