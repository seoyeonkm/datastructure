/*
5. 표준 C 라이브러리 헤더 파일

ctype.h 문자 관련 함수들
float.h 실수 자료형
limits.h 정수 자료형
math.h 수학 관련 함수들
stdio.h 입출력 관련 함수들
stdlib.h 문자열/숫자 변환/메모리 할당/정렬 함수 등 여러가지 기능들을 담당하는 함수들
stddef.h NULL, size_t 등이 포함
time.h 시간 관련 함수들

6. 메모리 구조

코드 - 데이터 - 힙 -  - 스택

7. 재귀함수
: 함수의 코드에서 함수 자신을 다시 호출


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum1toN(int n)
{
    if (n == 0)
    {
        return 0;          // 이게 없으면 무한 호출됨
    }
    return sum1toN(n-1) + n;
}

int main(void)
{
    int n;
    printf("1 이상의 양의 정수 한 개 입력:  ");
    scanf("%d", &n);
    int sum = sum1toN(n);
    printf("1~%d의 합 sum = %d\n", n, sum);
    return 0;
}


8. 매크로 함수

#define 매크로_이름(인자1, 인자2, ...) 치환할 값

#define PRINT(msg)    printf((msg))
#define MUL(n1, n2)   ((n1) * (n2))


#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

#define SWAP_INT(x, y) int t = (x); (x) = (y); (y) = t;

int main(void) 
{
    int a = 5;
    int b = 4;
    printf("Before SWAP: a = %d, b = %d\n", a, b);
    SWAP_INT(a, b);
    printf("After SWAP: a = %d, b = %d\n", a, b);

    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SWAP_INT (x, y) \
    int t = (x);      \                      
    (x) = (y);        \
    (y) = t;

 int main(void) 
{
    int a = 5;
    int b = 4;
    printf("Before SWAP: a = %d, b = %d\n", a, b);
    SWAP_INT(a, b);
    printf("After SWAP: a = %d, b = %d\n", a, b);

    return 0;
}   



// 기존에 정의된 매크로를 이용해서 새로운 매크로 만듦
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define INT1 5
#define INT2 (INT1 + 5)
#define MUL10(n) ((n) * INT2)

int main(void)
{
    printf("INT2 = %d\n", INT2);               // 10
    printf("MUL10(5) = %d\n", MUL10(5));        // 50
    return 0;
}



// 일반적으로 매크로는 가독성을 높이기 위해 함수 밖에 작성하지만 매크로가 처음 사용되기 전에만 작성하면 되므로 코드 어느 곳에 위치해도 상관없음.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    #define PI 3.141519
    printf("Pi = %f\n", PI);

    #define MAX(x, y) (((x) > (y)) ? (x) : (y))
    printf("MAX(3,5) = %d\n", MAX(3,5));
    return 0;
}


(1) 매크로 함수의 장점/단점

장점: 함수보다 빠름, 스택에 할당한다던가 이러한 작업을 할 필요 없음, 자료형을 구분하지 않음.
단점: 값이 달라짐.(두번 증가되는 문제)

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int x, int y)
{
    return (x > y) ? x : y;                 // 참이면 x 반환, 거짓이면 y 반환
}
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

int main(void)
{
    int a = 1;
    int b = 2; 
    int m = max(a++, b++);                                         // 함수에 1,2가 전달된 후에 각 변수들은 1씩 증가
    printf("max(a, b) = %d, a = %d, b = %d\n", m, a, b);           // m = 2, a = 2, b = 3
    
    a = 1;                                        // 매크로함수는 그냥 그대로 b++ 치환된다고 생각하면 됨.
    b = 2;
    m = MAX(a++, b++);                            // 매크로함수는 코드가 그냥 그대로 그때그때 실행됨. 여러번 연산이 실행됨. 여기에서는 b++로 계속 계산해야함.
    printf("MAX(a, b) = %d, a = %d, b = %d\n", m, a, b);          // m = 3, a = 2, b = 4   // 매크로 조건식이 false니까 b++ 한번 더 실행.
    return 0;
}






