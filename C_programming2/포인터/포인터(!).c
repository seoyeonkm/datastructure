1. 포인터의 필요성

(1) 동적할당 받는 메모리 공간 사용
(2) 자료구조 구현
(3) 메모리를 직접 접근하고 사용하는 기능을 통한 하드웨어 조작
(4) 배열 구현

2. 포인터 자료형 변수 사용
: TYPE*

(1) NULL 포인터
: 주솟값이 없다는 의미의 상수->포인터 변수를 초기화시키거나 포인터 변수의 값이 유효한지 확인할 떄 사용

(2) 포인터 자료형의 크기
: 운영체제가 64비트 시스템일 때에는 8바이트의 공간을 사용, 32비트일 때에는 4비트의 공간을 사용

(3) 포인터 변수 사용과 간접 참조 연산자(*)
: 간접 참조란 포인터 변수에 저장된 메모리 주소에 있는 값을 접근하는 것


TYPE* ptr = (TYPE*) 1000;   // 정수값을 메모리 주소로 변환해서 포인터 변수에 저장
*ptr = VALUE;
TYPE v = *ptr;             // ptr에 주어진 주소에 값(VALUE)를 간접 참조를 통해 v 변수에 저장




(4) 포인터 변수의 자료형(TYPE) 지정
:TYPE에 따라 포인터 변수의 자료형이 달라진다


(5) 포인터와 주소연산자

int* nPtr = NULL;        // nPtr과 n은 변수임
int n = 5;
nPtr = &n;
*nPtr = 3; // nPtr이 가리키는 곳의 값을 3으로 바꾸는 것



(6) 포인터 형 변환
: 다른 자료형 포인터 사이에 값을 저장하려면 강제 형 변환을 사용한다

TYPE*ptr = (TYPE2*) ptr1;    // TYPE1*형 ptr1의 주소를 변환해서 ptr2에 저장


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n = 3;
    int* ptr1 = &n;
    unsigned int* ptr2 = (unsigned int*) ptr1;

    printf("*ptr2 = %u\n", *ptr2);          //ptr이 가리키는 값을 출력 // *ptr과 int* ptr은 다름
    return 0;
}

(7) 정수를 메모리에 저장한 후 바이트 단위로 출력하는 프로그램
: 리틀 엔디안 사용



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n = 0x0A040E03;
    int* ptr1 = &n;
    char* ptr2 = (char*) ptr1;
    for (int i = 0; i < sizeof(int); i++) {
        printf("%02X", ptr2[i]);          // 0 1 2 3
    }
    return 0;
}


3. 포인터 연산

포인터 p0 + 정수 n = p0 + (n * sizeof(TYPE))
포인터 p0 - 정수 n = p0 - (n * sizeof(TYPE))
포인터 p1 - 포인터 p0 = (p1 - p0) / sizeof(TYPE)



int arr[4] = {0,1,2,3};
int* p = &arr[2];



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[4] = {0,1,2,3};
    int* p1 = &arr[2];      // arr[2]의 주소값
    int* p2 = p1 + 1;       // +1은 배열의 크기만큼 더한 것임    // p1은 주소를 가리킴
    int* p0 = p1 - 1;
    printf("p1 = %p\n", p1);
    printf("p2 = p + 1= %p\n", p2);
    printf("p0 = p - 1 = %p\n", p0);
    printf("p2 - p1 = %td, p2 - p0 = %td\n", p2 - p1, p2 - p0);

    double darr[4] = {0.0,1.0,2.0,3.0};
    double* dp1 = &darr[2];
    double* dp2 = dp1 + 1;
    double* dp0 = dp1 - 1;
    printf("dp1 = %p\n", dp1);
    printf("dp2 = dp + 1 = %p\n", dp2);
    printf("dp0 = dp - 1 =%p\n", dp0);
    printf("dp2 - dp1 = %td, dp2 - dp0 = %td\n", dp2 - dp1, dp2 - dp0);
    return 0;
}



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[] = {0,1,2,3};
    int* p1 = &arr[1];
    printf("처음 p1 주소 = %p\n", p1);           
    p1++;
    printf("sizeof(int)만큼 증가된 p1 = %p\n", p1++);     // 출력 후 증가
    printf("sizeof(int)만큼 증가된 p1 = %p\n", p1);      // 위에서 증가된 값
    p1--;
    printf("sizeof(int)만큼 감소된 p1 = %p\n", p1--);
}

4. 포인터와 배열
- 배열의 변수 이름은 배열의 시작 주소를 나타냄!!!!!!!!!!!!!!!!!!!!

(1) 포인터 변수롸 배열


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[] = {0,1,2,3};

    printf("arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);       // 0 1

    int* p0 = &arr[0];
    *p0 = 3;          // 3 1 2 3
    int* p1 = &arr[1];
    *p1 = 5;          // 3 5 2 3
    printf("arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);       // 3 5
    return 0;
}


(2) 포인터 연산으로 배열 요소 접근


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[] = {0,1,2,3};
    int* p = arr;
    for (int i = 0; i < 4; i++) {
        printf("arr[%d] = %d, p[%d] = %d, *(p + %d) = %d\n", i, arr[i], i, p[i], i, *(p + i));
    }
    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>

int main()
{
    int arr[] = {0,1,2,3};
    int* p = &arr[1];                                // *p = 1 은 p[0] = 1과 같은 의미이다
    printf("포인터 변수 p는 arr[1]의 주소로 저장됨\n");
    for (int i = 0; i < 3; i++) {
        printf("arr[%d] = %d, p[%d] = %d, *(p + %d) = %d\n", i + 1, arr[i + 1], i, p[i], i, *(p + 1));
    }
    return 0;
}


(3) 포인터 변수와 증감 또는 복합 연산자로 배열 요소 접근


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[] = {0,1,2,3};
    int* p = arr;
    printf("포인터 변수 p는 arr[0]의 주소로 저장됨\n");
    printf("&arr[0] = %p, p = %p, arr[0] = %d, *p = %d\n", &arr[0], p, arr[0], *p);
    p++;
    printf("&arr[1] = %p, p = %p, arr[1] = %d, *p = %d\n", &arr[1], p, arr[1], *p);
    return 0;
}




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[] = {0,1,2,3};
    int* p = &arr[3];
    for (int i = 3; i >= 0; i--, p--) {
        printf("arr[%d] = %d, *p = %d\n", i, arr[i], *p);
    }
    return 0;
}



(4) 배열 인덱스 연산자 []
: op1[op2] -> *((op1) + (op2))로 실행된다
: op1과 op2 중 하나는 포인터이고, 또 다른 하나는 정수를 생성하는 표현식

음수로 된 인덱스로 배열의 앞 부분에 접근 가능


(5) 포인터 연산자의 우선 순위 



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int arr[] = {0,2,4,6};
    int* p = arr;
    printf("*(p + 1) = %d\n", *(p + 1));
    printf("*p + 1 = %d\n", *p + 1);
    return 0;
}


// 연산자는 오른쪽에서 왼쪽으로 처리된다 // 즉, 후위연산으로 진행됨

*p++                 
(*p)++
*++p
++*p



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int arr[] = {0,1,2,3};
    int* p = arr;
    for (int i = 0; i < 4; i++) {
        printf("arr[%d]의 주소: %p\n", i, &arr[i]);

    }
printf("*p++ = %d\t", *p++);              // 0
printf("*p = %d\t", *p);                  // 1
printf("p = %p\n", p);                    // arr[1]의 주소

p = arr;
printf("(*p)++ = %d\t", (*p)++);          // 0
printf("*p = %d\t", *p);                  // 1
printf("p = %p\n", p);                   // arr[0]의 주소

p = arr;
printf("*++p = %d\t", *++p);            // 1
printf("*p = %d\t", *p);                // 1
printf("p = %p\n", p);                  // arr[1]의 주소

p = arr;
printf("++*p = %d\t", ++*p);            // 위에서부터 계속 이어지는거니까 2
printf("*p = %d\t", *p);                // 2
printf("p = %d\t", p);                  // arr[0]의 주소

return 0;

}


5. 함수와 포인터
: 함수를 호출하면서 인자로 포인터를 전달할 수 있다
- 함수 내부에서 외부 변숫값을 변경할 수 있다
- 크기가 큰 데이터를 함수에 전달할 때 효율적이다


(1) 함수에 포인터 인자 전달

(2) 포인터 매개변수로 함수 외부 변숫값 설정



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void readTwoInts(int* px, int* py)
{
    int a;
    int b;
    printf("정수 두 개를 입력하세요: ");
    scanf("%d %d", &a, &b);
    *px = a;
    *py = b;
}

int main()
{
    int x = 0;
    int y = 0;
    readTwoInts(&x, &y);
    printf("x = %d y = %d\n", x, y);
    return 0;
}

(3) 포인터 매개변수로 함수에 큰 데이터 효율적 전달
: 시작 주소만 전달하면 바이트 수가 모두 전달하는 것보다 적기 때문에 포인터는 효율적임

typedef struct {
    int size;
    double arr[1000000];
} LARGE_DATA;

void func(LARGE_DATA d) { }                // 구조체를 값 복사 형태로 전달 받는 함수를 구현
void func2(LARGE_DATA* pd) {}              // 구조체의 주소를 전달받는 함수를 구현

int main(void)
{
    LARGE_DATA data;

    func(data);           // 값 복사
    func2(&data);         // 시작 주소만 전달
}


(4) 함수에 배열 전달



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getSum(int* arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[4] = {1,2,3,4};
    int sum = getSum(arr, 4);
    printf("sum = %d\n", sum);
    return 0; 
}