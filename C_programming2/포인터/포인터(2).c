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




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getSumOfChars(char* str)
{
    int sum = 0;
    char* p = str;

    while (*p != '\0') {
        sum += *p;
        p++;
    }
    return sum;
}

int main()
{
    char s[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    int sum = getSumOfChars(s);
    printf("sum = %d\n", sum);                // 아스키 코드의 합 반환
    return 0;
}


(5) 함수에서 포인터 변환
: 동적 할당에서 더 다루어야 할 수 있음



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 4

int arr[] = {1,2,3,4};

int* getFirstElementGreaterThan(int n)
{
    for (int i = 0; i < SIZE; i++) {       // 4번 반복
        if (arr[i] > n) {                  // 2보다 커야함 
            return &arr[i];                // 3 4의 주소만 나옴
        }
    }
    return NULL;
}

int main(void)
{
    int* p = getFirstElementGreaterThan(2);
    if (p != NULL) {
        printf("배열 요소 중 2보다 큰 첫번째 값 = %d\n", *p);
    }
    return 0;
}


(6) 2차 방정식의 해를 구하는 함수를 구현하고 사용하는 프로그램



// 2차 방정식의 해를 구하는 함수와 사용 코드
#include <math.h>

int quadraticEqn(double a, double b, double c, double* px1, double* px2)
{
    double d = b * b - 4 * a * c;
    if (d < 0) {              // d값이 음수면 오류 반환 
        return 0;
    }
    *px1 = (-b + sqrt(d)) / (2 * a);
    *px2 = (-b - sqrt(d)) / (2 * a);
    return 1;                 // 해를 구했으므로 1을 반환
}




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int quadraticEqn(double a, double b, double c, double* px1, double* px2)
{
    double d = b * b - 4 * a * c;
    if (d < 0) {
        return 0;
    }
    *px1 = (-b + sqrt(d)) / (2 * a);
    *px2 = (-b - sqrt(d)) / (2 * a);
    return 1;
}

void printResult(double x1, double x2, int r)
{
    if (r > 0) {
        printf("%f %f", x1, x2);
    }
    else {
        printf("quadraticEqn() 함수는 허수인 해를 구할 수 없습니다.\n");
    }
}

int main()
{
    double s1, s2;
    int r = quadraticEqn(1,-2,1,&s1,&s2);
    printResult(s1,s2,r);
    r = quadraticEqn(4,6,1,&s1,&s2);
    printResult(s1,s2,r);
    r = quadraticEqn(5,-2,1,&s1,&s2);
    printResult(s1,s2,r);

    return 0;
}


6. 상수 포인터



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printArr(int* parr, int size)
{
    for (int i = 0; i < size; i++) {       // 4번 반복     
        printf("%d ", parr[i]);            
    }
    printf("\n");                          // 1 2 9 16
}

void changeArr(int* parr, int idx, int newValue)
{
    parr[idx] = newValue;         // arr[2] = 9      // arr[3] = 16
}

int main()
{
    int arr[] = {1,2,3,4};
    changeArr(arr, 2, 3 * 3);
    changeArr(arr, 3, 4 * 4);
    printArr(arr, 4);
    return 0;
}


// const는 포인터가 가리키는 메모리 공간의 값을 수정하지 못하게 함->컴파일러 오류 발생 가능


7. 함수 포인터

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int x, int y) {
    return x - y;
}

int main()
{
    int (*calculate)(int a, int b);

    calculate = add;
    int result = calculate(2,3);
    printf("calaulate 변수를 이용해서 add(2,3)을 호출한 결과: %d\n", result);
    
    calculate = subtract;
    result = calculate(5,3);       // int 이미 정의했으니까
    printf("calculate 변수를 이용해서 subtract(5,3)을 호출한 결과: %d\n", result);

    return 0;
}

(1) 함수 포인터 자료형 선언
: 함수 포인터를 선언하면서 typedef를 붙이면 함수 포인터 자료형 선언
: 매개변수의 이름 생략 가능



// 자료형 벼누 2개를 선언함 calc1, clac2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int x, int y) {
    return x - y;
}

typedef int (*CalculateFuncType)(int a, int b);

int main()
{
    CalculateFuncType calc1 = add;         // calc1 변수가 add 함수를 가리키도록 함
    int result = calc1(2,3);
    printf("calc1 변수를 이용해서 add(2,3)을 호출한 결과: %d\n", result);
    CalculateFuncType calc2 = subtract;
    result = calc2(5,3);
    printf("calc2 변수를 이용해서 subtract(5,3)을 호출한 결과: %d\n", result);
    return 0;
}

(2) 함수를 다른 함수에 인자로 전달

typedef int (*CalculateFuncType)(int a, int b);

void calculator(CalculateFuncType calc, int x, int y)
{
    int result = calc(x, y);
    printf("result = %d\n", result);
}


8. void 포인터 자료형
: 자료형이 정해지지 않은 특별한 포인터 자료형
: 간접 참조를 할 수 없다



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printAdress(void* p)
{
    printf("주소 출력: %p\n", p);
}

int main()
{
    int n = 3;
    double x = 4.3;

    int* pn = &n;        // pn은 n의 주소 // 배열일 때에만 첫번째 주소값 이런거 사용함
    double* px = &x;     // px은 x의 주소

    void* p = pn;       // p는 pn이 저장하고 있는 값(n의 주소)을 저장
    pn = (int*) p;      // void*인 p를 int*로 형 변환해서 pn에 저장한다

    printAdress(pn);   // &n 출력
    printAdress(px);   // &x 출력
}


(1) void 포인터와 함수 포인터를 함께 사용하는 프로그램



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef void (*FuncPtr)(void* p);

void doSomething(FuncPtr func, void* ptr) // 함수의 가장 처음으로 호출되는 순서
{
    func(ptr);   // 전달받은 함수를 ptr을 인자로 호출 // ptr에 들어있는 값은 각각 &d, &n
}

void printDouble(void* p)
{
    double* ptr = (double*) p; // void* 을 double*로 형 변환
    printf("%f\n", *ptr);      // ptr의 주소에 들어았는 겂 출력
}

void printInt(void* p)
{
    int* ptr = (int*) p;       // int*로 형 변환
    printf("%d\n", *ptr);
}

int main()
{
    double d = 2.3;
    int n = 3;

    doSomething(printDouble, &d);
    doSomething(printInt, &n);
    return 0;
}
