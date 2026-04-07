1. 함수의 매개변수에 인자 전달

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void increaseTime(int hour, int minute)
{
    if (minute == 59) {
        minute = 0;
        hour++;
        if (hour > 23) {
            hour -= 24;
        }
    }
    else {
        minute++;
    }
    printf("hour: %d, min: %d\n", hour, minute);
}

int main(void)
{
    int hour = 10;
    int min = 24;
    increaseTime(hour, min);
    printf("After calling increaseTime: hour: %d, min: %d\n", hour, min);

    return 0;
}

(1) swap() 함수 구현 문제
: swap() 함수란 두 개의 매개변수로 전달된 값을 서로 바꿔 함수 밖에 전달하는 함수
* 값 복사 전달 방법을 사용할 때 swap() 함수는 구현되지 않음.

#include <stdio.h>

void swap(int num1, int num2)
{
    int temp = num1;        // temp = 5
    num1 = num2;            // num1 = 9
    num2 = temp;            // num2 = 5
}

int main(void)
{
    int x = 5;
    int y = 9;
    swap(x,y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}

(2) 입력으로 전달된 양의 정수가 소수인지 확인하는 정수


// 매개변수로 전달받은 0 이상의 정수가 소수이면 1을, 아니면 0을 반환하는 함수 구현하자.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrimeNumber(int m)
{
    if (m < 2) 
    {
        return 0;
    }
    else if (m == 2) 
    {
        return 1;
    }
    for (int i = 3; i < m; i += 2)          // 3~m까지의 홀수로 m이 나눠지는지 검사
    {
        if (m % i == 0) 
        { 
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    printf("1 is prime number(1 if true 0 otherwise): %d\n", isPrimeNumber(1));
    printf("2 is prime number(1 if true 0 otherwise): %d\n", isPrimeNumber(2));
    printf("6 is prime number(1 if true 0 otherwise): %d\n", isPrimeNumber(6));
    printf("13 is prime number(1 if true 0 otherwise): %d\n", isPrimeNumber(13));
}

(3) n1~n2 사이의 정수 중 소수(1과 자기자신만을 가지는 수)를 출력하는 함수


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrimeNumber(int m)          // 매개변수로 전달받은 0 이상의 정수가 소수이면 1을, 아니면 0을 반환하는 판별 프로그램
{ 
    if (m < 2)                    // 0, 1일 때
    {
        return 0;
    }
    else if (m == 2)             // 2일 때
    {
        return 1;
    }
    for (int i = 3; i < m; i += 2)
    {
        if (m % 2 == 0)
        {
            return 0;
        }
    }
    return 1;
}

void printPrimeNumbers(int n1, int n2)    // n1~n2까지의 정수 중 소수를 출력하는 함수 프로그램
{
    if (n1 >= 2)
    {
        if (n1 == 2 || n2 == 2)
        {
            printf("소수: 2/n");
        }
        if (n1 % 2 == 0)
        {
            n1++;
        }
        for (int m; m <= n2; m += 2)                // isprimeNumber에서 소수인지 아닌지 판별
        {
            if (isPrimeNumber(m))
            {
                printf("소수: %d\n", m);
            }
        }
    }
}


int main(void)                                     // 사용자로부터 두 개 정수를 입력받는 프로그램
{
    int n1;
    int n2;
    printf("두 개 정수 사이의 소수를 출력하기 위해 정수 입력: ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    printPrimeNumbers(n1, n2);
    return 0;
}


2. 변수의 유효 범위(scope)와 생존 기간

(1) 지역변수
:매개변수와 함수 내부에서 선언된 변수

// 근의 공식을 이용하여 이차방정식의 해 구하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void printQuadEqnSoln(int a, int b, int c)
{
    double r = sqrt(b*b-4*a*c);
    double x1 = (-b + r) / (2*a);
    double x2 = (-b - r) / (2*a);
    printf("x1 = %f, x2 = %f\n", x1, x2);
}

int main(void)
{
    printQuadEqnSoln(1, -5, 6);
    printQuadEqnSoln(1, 5, -6);
    return 0;
}

(2) 전역변수
: 함수 밖에 선언하고 프로그램의 모든 함수에서 사용할 수 있는 변수 !!!!!!!!!!!!!!!!!!!

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double x1;
double x2;                 // 전역 변수

void calcQuadEqn(int a, int b, int c)
{
    double r = sqrt(b*b-4*a*c);
    x1 = (-b + r) / (2*a);                           // 해를 구해서 전역변수 x1, x2에 저장
    x2 = (-b - r) / (2*a);
}

int main(void)
{
    calcQuadEqn(1, -5, 6);
    printf("x1 = %f, x2 = %f\n", x1, x2);
    calcQuadEqn(1, 5, -6);
    printf("x1 = %f, x2 = %f\n", x1, x2);           // 전역변수 x1, x2를 화면에 출력 
    return 0;
}

(3) 전역변수를 이용해서 무작위로 정수를 생성하는 함수

난수 생성 함수 공식: seed = seed의 제곱 + 13 * seed + 19

void setSeed(int s);  // 시드 값을 지정
unsigned random();    // 0~RAND_MAX의 정수를 생성해서 반환


#include <stdlib.h>
#include <stdio.h>

unsigned seed = 17;

void setSeed(unsigned s)
{
    seed = s;
}                            // setSeed() 함수는 seed 변수에 새로운 값을 저장하는 단순한 함수

unsigned random()
{
    seed = (seed * seed) + (13 * seed) + 19;
    if (seed > RAND_MAX)
    {
        seed %= RAND_MAX;
    }
    return seed;
}

int main(void)
{
    setSeed(50);
    for (int i = 0; i < 10; i++)            // 랜덤 숫자 10개 출력 가능
    {
        printf("%u", random());
    }
    return 0;
}
// -> 조금 불편함


#include<stdlib.h>
#include<stdio.h>

int random(int seed)
{
    seed = (seed * seed) + (13 * seed) + 19;
    if (seed > RAND_MAX)
    {
        seed %= RAND_MAX;
    }
    return seed;
}

int main(void)
{
    int num = random(50);
    num = random(num);
    return 0;
}

(4) 전역변수와 지역변수의 이름 충돌과 유효 범위
:지역변수에 대해 전역변수가 가려지면 같은 이름의 변수들을 다른 함수들에 사용하는 것은 괜찮다 


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int x = 1;                                       // 전역변수 x를 선언하고 1로 초기화 

void func1(int x)                                // func1() 함수에 지역변수 x를 선언
{
    printf("func1: x = %d\n", x);
}

void func2(int n)
{
    x = n;                                       // func2()의 지역변수 x가 선언되기 전이므로 전역변수 x에 n을 저장
    printf("func2-1: x = %d\n", x);              // 전역변수 출력
    int x = 5;                                   // func2()의 지역변수 x를 선언 및 초기화    // 전역변수가 가려진다!!!!
    printf("func2-2: x = %d\n", x);              // func2()의 지역변수 출력
}

int main(void)
{
    printf("main: x = %d\n", x);                 // 전역변수 x의 값을 출력
    func1(3);
    func2(7);
}

(5) 코드 블록과 for 문 유효 범위


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int x = 5;

int main(void)
{
    printf("x = %d\n", x);         // 5
    int x = 7;
    printf("x = %d\n", x);          // 7
    {
        printf("x = %d\n", x);     // 코드 블록 영역이지만, 변수 선언 전이라 main()의 지역변수 x를 출력, 즉 그 전의 x 값을 출력   // 7
        int x = 9;
        printf("x = %d\n", x);    // 9
    }
    for (int x = 0; x < 2; x++)
    {
        printf("x = %d\n", x);   // 0 1
    }
    printf("x = %d\n", x);     // 7
}

(6) 정적 지역변수
: 함수 내부에서만 사용 가능


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printCallCount()
{
    static int count = 0;
    int localCount = 0;
    count++;
    localCount++;
    printf("count = %d\n", count);              // count 변수는 이전 호출 때 사용한 값이 초기화되지 않고 저장되어 있음.
    printf("localCount = %d\n", localCount);    // localCount 변수는 함수 호출과 함께 생성되었다가 사라지므로 이전 호출 때 사용한 값이 저장되지 않음.
}

int main()
{
    printCallCount();
    printCallCount();
}

(7) typedef와 유효범위


#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum {JAN = 1, FEB, MAR, APR, MAY, JUN,
              JUL, AUG, SEP, OCT, NOV,DEC} MONTH;

MONTH getMonth()
{
    int month;    // MONTH month; 이것도 사용 가능
    printf("1~12 사이의 정수를 입력하세요: ");
    scanf("%d", &month);
    return month;               // 여기에서 month 반환
}

int main(void)
{
    MONTH m = getMonth();
    printf("month = %d", m);     // return 으로 반환되는 값을 사용
    return 0;
}

(8) 다시 살펴보는 const 변수
:const는 진짜 상수가 아니라 값이 초기화된 이후에 값을 변경할 수 없는 변수!!!!!


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int n)
{
    const int m = n;     // const 는 상수가 아닌 값으로도 초기화 가능
    const int v = 3;     // const 는 당연히 상수로도 초기화 가능
    printf("m = %d\n", m);
}

int main(void)
{
    func(50);
    return 0;
}

3. 함수 선언
: 함수를 먼저 구현한 후, 호출되어야하므로 순서를 정확히 하도록 한다.

