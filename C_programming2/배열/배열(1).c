1. 1차원 배열
ANSI C에서의 배열의 크기는 대부분 정수형 상수만 사용 가능
C99부터는 변수나 상수 변수도 사용 가능


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 3

int main(void)
{
    int nums[SIZE];
    nums[0] = 4;             // 배열 초기화
    nums[1] = 3;
    nums[2] = 9;

    for(int i = 0; i < SIZE; i++) {
        printf("nums[%d] = %d\n", i, nums[i]);
    }
    return 0;
}

(1) sizeof() 연산자와 배열
: sizeof(배열 요소) * N


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

int main(void)
{
    int nums[SIZE];
    printf("size of nums[0] = %d\n", sizeof(nums[0]));
    printf("size of nums = %d\n", sizeof(nums));
    return 0;
}

(2) 배열 초기화


#include <stdio.h>

int globalNums[5];

int main(void)
{
    static int staticNums[5];
    int localNums[5];

    for (int i = 0; i < 5; i++) {
        printf("globalNums[%d] = %d, staticNums[%d] = %d, localNums[%d] = %d\n", i, globalNums[i], i, staticNums[i], i, localNums[i]);
    }
    return 0;
}

(3) 선언 후 초기화

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NUMS 30

#define RAND_INT(x,y) (rand() % ((y) - (x) + 1) +(x))

int randInt(int x, int y)
{
    return rand() % (y - x + 1);
}

int main(void)
{
    srand(time(NULL));
    int securityNums[NUMS];
    for (int i = 0; i < NUMS; i++) {
        securityNums[i] = RAND_INT(1000, 9999);            // 무작위로 1000~9999 사이의 정수를 생성해서 배열에 저장
        printf("securityNums[%d] = %d\n", i, securityNums[i]);
    }
    return 0;
}

(4) 선언하면서 초기화


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARRAY_SIZE(arr, element) (sizeof((arr)) / sizeof((element)))

int main(void)
{ 
    int nums[] = {1,2,3,4,5};                // 배열을 선언하고 초기화        // 배열을 크기 없이 초기화함
    printf("sizeofnums = %d\n", ARRAY_SIZE(nums, nums[0]));     // ARRAY_SIZE(20, 4)  // 그냥 매크로 함수로도 쓰일 수 있다는 것에 초점을 맞추자.
    for (int i = 0; i < ARRAY_SIZE(nums, nums[0]); i++) {                   // nums[0] 은 배열 요소 한 개의 크기를 의미한다
        printf("nums[%d] = %d\n", i, nums[i]);
    }

    double nums2[] = {1.1, 2.2, 3.3};
    printf("sizeofnums2 = %d\n", ARRAY_SIZE(nums2, nums2[0]));
    for (int i = 0; i < ARRAY_SIZE(nums2, nums2[0]); i++) {
        printf("nums2[%d] = %d\n", i, nums2[1]);
    }
    return 0;
}

(4) 크기 지정


#define _CR_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

int main(void)
{
    int num1[SIZE] = {1,2,3,4,5};
    int num2[SIZE] = {1,2,3};
    int num3[SIZE] = {1,2,3,4,5,6};      // visual studio에서는 컴파일러 오류 발생해서 더 이상 진행할 수 없음

    for (int i = 0; i < SIZE; i++) {       // 배열의 크기 지정
     printf("num1[%d] = %d, num2[%d] = %d, num3[%d] = %d\n", i, num1[i], i, num2[i], i, num3[i]);
    }
    return 0;
}


// 배열의 요소 개수가 많다면 반복문을 이용하는 것이 효율적이다

#include <stdio.h>
#define SIZE 5

int main(void)
{
    int arr1[SIZE] = {1,2,3,4,5};
    int arr2[SIZE];

    for (int i = 0; i < SIZE; i++) {
        arr2[i] = arr1[i];
        printf("say the array size: %d, %d\n", arr1[i], arr2[i]);
    }

    return 0;
}

2. 함수와 배열

(1) 함수에 배열 요소 전달


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARRAY_SIZE(arr, element) (sizeof((arr)) / sizeof((element)))

void printTVSize(double size) {
    printf("TV size : %f cm\n", size);
}
int main(void)
{
    double tvSizes[] = {32 * 2.54, 42 * 2.54, 55 * 2.54, 65 * 2.54, 75 * 2.54 };         // 40 나누기 8 !! double이니까 !

    for (int i = 0; i < ARRAY_SIZE(tvSizes, tvSizes[0]); i++) {
        printTVSize(tvSizes[i]);
    }
    return 0;
}

(2) 함수에 배열 전달

(3) 함수에 배열 크기 전달

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printArrSize(int arr[])
{
    printf("sizeof(arr) = %zu\n", sizeof(arr));                   // 20
    printf("sizeof(arr[1]) = %zu\n", sizeof(arr[1]));             // 8       // 배열을 전달받는 매개변수는 배열의 시작 주소만 가지고 있는 변수이므로 sizeof() 연산자가 64비트 주소의 크기인 8바이트의 8을 반환
}

int main(void)
{
    int nums[] = {1,2,3,4,5};
    printf("sizeof(nums) = %zu\n", sizeof(nums));                 // 20
    printArrSize(nums);
    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printArrAddr(int arr[])
{
    printf("address of arr = %p\n", arr);
}

int main(void)
{
    int nums[] = {1,2,3,4,5};
    printf("address of nums = %p\n", nums);   
    printf("address of nums[0] = %p\n", &nums[0]);
    printArrAddr(nums);                               // 출력되는 값들 모두 주소값이 같다!
    return 0;
}

(4) 함수에 배열과 크기 함께 전달


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARRAY_SIZE(arr, element) (sizeof((arr)) / sizeof((element)))

void printTVSizes(double sizes[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("TV size: %f cm\n", sizes[i]);
    }
}

int main(void)
{
    double tvSizes[] = {81.28, 106.68, 139.70, 165.10, 190.50};

    printTVSizes(tvSizes, ARRAY_SIZE(tvSizes, tvSizes[0]));
    return 0;
}

(5) 함수에서 전달받은 배열 수정


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void increaseArray(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        arr[i]++;
    }
}

int main(void)
{
    int nums[5] = {1,2,3,4,5};
    increaseArray(nums, 5);               
    for(int i = 0; i < 5; i++) {
        printf("%d", nums[i]);
    }
    return 0;
}

(6) 배열 요소 교환



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 6

void swapArrayElements(int arr[], int idx1, int idx2)
{
    int temp = arr[idx1];                   
    arr[idx1] = arr[idx2];                  
    arr[idx2] = temp;                       // arr[4] = 6, arr[2] = 7  // 그냥 교환되었다고 생각하면 됨
    printf("%d %d\n", arr[idx1], arr[idx2]);
}

void printArrayElements(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);                 // 4 9 7 8 6 5
    }
    printf("\n");                             // 이게 진짜임. 4 9 6 8 7 5
}  

int main(void)
{
    int nums[SIZE] = {4,9,7,8,6,5};

    printArrayElements(nums, SIZE);
    swapArrayElements(nums, 2, 4);
    printArrayElements(nums, SIZE);
    return 0; 
}

(7) 함수에서 매개변수 배열 변경 방지
: 함수 내부에서 매개변수로 전달받은 배열을 수정할 수 없도록 만들려면, 배열 선언 전에 const 키워드를 붙인다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 6

void swapArrayElements(int arr[], int idx1, int idx2)
{
    int temp = arr[idx1];                   
    arr[idx1] = arr[idx2];                  
    arr[idx2] = temp;                       
    printf("%d %d\n", arr[idx1], arr[idx2]);
}

void printArrayElements(const int arr[], int size)        // const 추가해서 배열 수정할 수 없도록 만들기
{
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);                 
    }
    printf("\n");                            
}  

int main(void)
{
    int nums[SIZE] = {4,9,7,8,6,5};

    printArrayElements(nums, SIZE);
    swapArrayElements(nums, 2, 4);
    printArrayElements(nums, SIZE);
    return 0; 
}

(8) 약수를 찾아서 출력하는 프로그램
 

 #define _CRT_SECURE_NO_WARNINGS
 #include <stdio.h>

 #define SIZE 100

 int findDivisors(int num, int divisors[], int size)
 {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {               // 나머지로 구하기
            divisors[count] = i;          // 약수일 경우의 프로그램
            count++;                      // 지금까지 찾은 약수의 개수
            if (count >= size) {         
                return 0;
            }
        }     
    }
    return count;
 }

 void printArrayElements(const int arr[], int size)
 {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
 }

 int main(void)
 {
    int divisors[SIZE];
    int count = 0;
    int n;

    printf("약수를 찾아서 출력할 1보다 큰 양의 정수를 입력하세요 : ");
    scanf("%d", &n);
    count = findDivisors(n, divisors, SIZE);
    if (count == 0) {
        printf("%d개의 약수를 찾았습니다. 배열 공간이 부족해서 중단합니다.\n", SIZE);
    }
    printArrayElements(divisors, count);
    return 0;
 }

 

 3. 다차원 배열
 : 2차원 배열은 반복문을 바깥쪽 반복문은 행을, 안쪽 바깥문은 열을 담당한다.


 #include <stdio.h>

 #define ROWS 3
 #define COLUMNS 5

 int main(void)
 {
    int arr2[ROWS][COLUMNS];

    for (int row = 0; row < ROWS; row++) {
        for (int column = 0; column < COLUMNS; column++) {
            arr2[row][column] = (row * COLUMNS + column +1);
        }
    }
    printf("a[0][0] = %d, a[1][3] = %d\n", arr2[0][0], arr2[1][3]);
    return 0;
 }



 (1) 2차원 배열의 초기화
 int arr2[3][5] = { {1,2,3,4,5}, {6,7,8}}; 
 => 첫번째 행은 1,2,3,4,5 두번째 행은 6,7,8,0,0 세번째 행은 0,0,0,0,0



 // 행의 개수를 확인하는 코드

 
행의 개수 = sizeof(배열_이름) / sizeof(배열요소의_자료형)/(열의 개수)
행의 개수 - sizeof(배열_이름) / sizeof(가장 작은 배열_요소 한개)/(열의 개수)


 #define _CRT_SECURE_NO_WARNINGS
 #include <stdio.h>

 int main(void)
 {
    int arr2[][5] = {{1,2,3,4,5}, {6,7,8}, {11, 12}};
    int rows = sizeof(arr2) / sizeof(arr2[0][0]) / 5;
 }

 (2) 함수에 2차원 배열 전달
매개변수에 2차원 배열의 크기를 정확하게 표기하기
매개변수에 2차원 배열의 첫번째 인덱스 부분을 비우기
 


 #define _CRT_SECURE_NO_WARNINGS
 #include <stdio.h>

#define ROWS 3
#define COLUMNS 5

void print2DArray(const int arr[][COLUMNS], int size)
{
    for (int i = 0; i < size; i++) {                  
        for (int j = 0; j < COLUMNS; j++) {           
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int arr2[ROWS][COLUMNS] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};

    print2DArray(arr2, ROWS);
    return 0;
}

(3) 함수에 다차원 배열의 부분 전달


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int arr2[3][5];
    
    printf("arr2 = %p\n", arr2);                          // arr2 배열의 시작 주소 출력
    printf("address of arr2[0][0] = %p\n", &arr2[0][0]);
    printf("arr2[0] = %p\n", arr2[0]);                    // 하나만 나와있으면 행을 말한다 [0][0] 생략되어있음
    printf("arr2[1] = %p\n", arr2[1]);
    printf("address of arr2[1][0] = %p\n", &arr2[1][0]);
    printf("arr2[2] = %p\n", arr2[2]);
    printf("address of arr2[2][0] = %p\n", &arr2[2][0]);

    return 0;
}




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROWS 3
#define COLUMNS 5

void printArrayElements(const int arr[], int size)   // const int * arr  // arr = &arr2[row][0]  <-arr2 배열의 첫번째 주소를 전달한다
{                                         // arr은 arr2의 한 행의 시작 주소를 받는 것이다!!
    for (int i = 0; i < size; i++) {        // 0 1 2 3 4
        printf("%d ", arr[i]);            //  row가 1일 때, row가 2일 때, row가 3일 때    // 1차원 배열로 받는다고 생각하기
    }                                     // row가 1일 때에는 arr2[1] = &arr2[1][0] 이렇게 전달받고, 1행의 시작주소에서부터 시작
    printf("\n");                             
}

int main(void)
{ 
    int arr2[ROWS][COLUMNS] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};      //메모리에서는 이렇게 저장 [1][2][3][4][5]  [6][7][8][9]....[14][15]
 
    for (int row = 0; row < ROWS; row++) {
        printArrayElements(arr2[row], COLUMNS);   // &arr2[row][0], COLUMNS 를 전달
    }

}

(3) 3차원 배열
생략은 가장 첫번째 인덱스만 생략 가능

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define DEPTH 3
#define ROWS 3
#define COLUMNS 5

int main(void)
{
    int arr3[DEPTH][ROWS][COLUMNS];
    for (int depth = 0; depth < DEPTH; depth++) {
        for (int row = 0; row < ROWS; row++) {
            for (int column = 0; column < COLUMNS; column++) {
                arr3[depth][row][column] = depth * ROWS *COLUMNS + row * COLUMNS + column + 1;
            }
        }
    }
    printf("arr3[0][0][1] = %d, arr3[1][0][4] = %d\n", arr3[0][0][1], arr3[1][0][4]);
    return 0;
}



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define DEPTH 3
#define ROWS 3
#define COLUMNS 5

void print3DArr(const int arr[][ROWS][COLUMNS], int size)         // int(* arr)[][ROWS][COLUMNS]   // arr = &arr3[0]의 시작주소 전달
{
    for (int depth = 0; depth < size; depth++) {                       // 0 1 2                  // arr = &arr3[1] 이렇게 표현하기보다는 arr = arr + 1이 편리하다
        for (int row = 0; row < ROWS; row++) {                         // 0 1 2
            for (int column = 0; column < COLUMNS; column++) {         // 0 1 2 3 4
                printf("%d ", arr[depth][row][column]); 
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main(void)
{
    int arr3[][ROWS][COLUMNS] = 
        {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}},
        {{16,17,18,19,20},{21,22,23,24,25},{26,27,28,29,30}},
        {{31,32,33,34,35},{36,37,38,39,40},{41,42,43,44,45}};

    print3DArr(arr3, DEPTH);
    return 0;
}
