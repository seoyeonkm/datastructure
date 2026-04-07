/*
1. 문자열 선언과 초기화

(1) 문자 배열 형태로 선언되는 문자열

char str1[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};

배열에서 일부만 초기화하면 나머지는 0에 해당하는 값으로 채워지는 것을 기억하자

(2) 포인터 변수로 선언되는 문자열

char* pstr = "Hello World";          
printf(sizeof(pstr))            // 8. 왜냐하면 문자열의 시작주소를 저장하는 포인터의 크기가 8이라는 뜻

pstr = "New World";  // 배열은 초기화 때를 제외하면 문자열 바로 저장 불가

(3) 문자열 변경
: 문자 배열로 선언되는 문자열은 내용을 수정할 수 있다
: 포인터 변수를 이용한 메모리의 내용은 변경할 수 없는 영역이다

(4) 문자열과 대입 연산
: 문자 배열의 문자열을 수정하려면 글자 단위로 변경하거나 strcpy() 함수를 사용한다
: strcpy() 함수는 전체 문자열을 변경할때 사용한다


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hello";
    char str2[10];

    printf("str = %s\n", str);          // hello
    strcpy(str2, str);                  // str2에 str의 문자열을 복사(저장)
    printf("str2 = %s\n", str2);        // hello
    return 0;
}

문자열과 포인터의 대입은 다르다

char str[] = 'hello'
char* pstr = str;         // pstr은 str의 시작 주소만 저장한다!!!



(5) 문자열과 메모리 구조

: 정적 지역변수와 전역변수로 선언한 문자배열은 데이터 영역에 만들어진다
: 지역변수로 선언하는 문자 배열은 스택에 공간을 할당받는다 
: 일반적으로 상수들은 데이터 영역에 저장된다



2. 문자열과 포인터

(1) 문자열 출력


// 배열의 크기만큼 요소를 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARRAY_SIZE(arr, element) (sizeof(arr)) / (sizeof(element))

int main(void)
{
    char str[] = "Hello";
    for (int i = 0; i < ARRAY_SIZE(str, str[0]); i++) {
        printf("%c\t", str[i]);         // 문자를 한 개씩 탭 문자로 분리해서 출력
    }
    return 0;
}


// 배열의 크기가 문자열의 길이보다 클 때에는 문자열이 사용하지 않는 부분의 쓰레기값을 출력할 수 있어 문제가 된다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE(arr,element) (sizeof(str))/ (sizeof(element))

int main(void)
{
    char str[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    strcpy(str, "Hello");           // str에 Hello 문자열을 복사(저장) // 원본 문자열의 널 문자까지만 배열에 복사
        for (int i = 0; i < ARRAY_SIZE(str, str[0]); i++) {
        printf("%c\t", str[i]);         // 문자를 한 개씩 탭 문자로 분리해서 출력
    }
    return 0;
}


// 그래서 배열의 크기를 계산하지 않고 종료 문자 전까지 출력한다. 배열 크기가 문자열 길이보다 커도 문제없다

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char str[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    strcpy(str, "Hello");            // Hello만나고 마지막에 \0 만나서 f,g,h 출력이 안되는거임
    for (char* p = str; *p != '\0'; p++) {
        printf("%c\t", *p);
    }
    return 0;
}

// 또 다른 방법
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char str[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    str[0] = 'H';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    str[5] = '\0';
    for (char* p = str; *p != '\0'; p++) {
        printf("%c\t", *p);
    }
    return 0;
}


// 문자열 출력 함수 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void PrintCharsInStr(const char* pstr)   // 문자열의 시작 주소를 pstr변수로 전달받음
{
    for (const char* p = pstr; *p != '\0'; p++) {
        printf("%c\t", *p);
    }
}

int main()
{
    char str[] = "Hello";
    PrintCharsInStr(str);
    return 0;
}


3. 문자열 입출력

(1) 키보드로 문자열 입력 받기

scanf를 한번 실행하면 첫번째 단어만 출력한다. scanf를 단어 개수대로 적으면 모두 출력할 수 있다

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char str[20];

    printf("문자열을 입력하세요: ");
    scanf("%s", str);
    printf("first str = %s\n", str);
    scanf("%s", str);
    printf("second str = %s\n", str);
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char subject[20];  // 문자열 공간 충분히 남겨두기
    int midterm;
    int final;

    printf("과목_이름, 중간고사 성적, 기말고사 성적순으로 입력하세요: ");
    scanf("%s,%d,%d", &subject, &midterm, &final);
    printf("subject = %s, midterm = %d, final = %d\n", subject, midterm, final);    // 생각보다 어긋난 결과...
    return 0;
}

math,10,10 이라고 입력하게 되면 사이에 공백이 없으므로 한 개의 문자열로 인식하고 출력한다. midterm 과 final은 입력버퍼에 남은 내용이 없으므로 쓰레기값이 출력된다.
쉼표 사이에 공백을 넣어도 문자열을 읽을 때 공백을 만나면 입력받는 것을 멈추기 떄문에 쉼표까지만 문자열로 인식한다.

-> 이 문제를 해결하는 방법은 어떤 글자를 만나기 전까지는 모든 문자를 문자열에 포함하라고 지정해야한다.



// 해결방법 코드
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char subject[20];  
    int midterm;
    int final;

    printf("과목_이름, 중간고사 성적, 기말고사 성적순으로 입력하세요: ");
    scanf("%[^,],%d,%d", subject, &midterm, &final);     // 첫번쨰 쉼표를 만나면 문자열을 subject에 저장하는걸 멈춤
    printf("subject = %s, midterm = %d, final = %d\n", subject, midterm, final);    
    return 0;
}

하지만 문자열이 포함된 좀 더 복잡한 서식이라면 scanf를 사용하여 입력받는 것이 어렵다.
오히려 gets()나 fgets()와 같이 문자열을 통쨰로 입력받는 함수를 사용한 후에 문자열을 직접 서식에 맞춰 값을 분리하는 것이 낫다.

gets() 함수는 사용자가 입력한 내용이 배열의 크기를 넘치는지 확인하지 않는다. 이런 취약점들을 악용하는 경우들이 발생해서 지금은 fgets() 함수를 사용할 것을 권한다.

fgets() 함수는 입력 내용을 저장할 문자 배열을 첫째 인자로, 배열의 크기를 둘째 인자로 받는다
*fgets의 기본형태는 fgets(배열, 크기, 입력스트림)

fgets() 함수는 다음 세 가지 경우에 대해 함수 실행을 종료하고 반환한다 
1. 사용자가 줄바꿈 문자를 입력(엔터키)한다 
2. 파일에서 문자열을 입력받는 중이었다면 파일에 더 이상 읽을 데이터가 없다 (EOF) 
3. 입력 버퍼에 n개 이상의 문자가 있을 때 배열에 n-1개의 문자를 채운다. 입력버퍼에 있는 나머지 문자들은 그대로 버퍼에 있다.

// fgets() 함수를 사용해서 문자열을 입력받는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char s[20];
    if (fgets(s, 20, stdin) != NULL) {       // 최대 19글자까지(널 문자를 위해 한 개의 요소를 남김) 표준입력장치에서 문자열 입력받기
        printf("s = %s\n", s);
    }
    return 0;
}




(2) 문자열에서 입력받기

sscanf() 함수: 서식이 정해진 문자열에서 값을 추출할 때 주로 사용한다. 키보드 대신 문자열에서 입력받는다.
            두번쨰 인자부터 scanf() 함수와 동일하고 반환 값도 같다.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char str[] = "CProgramming1 90 86";     // 서식이 정해진 문자열
    char subject[20];
    int midterm;
    int final;

    int converted = sscanf(str, "%s %d %d", subject, &midterm, &final);
    printf("subject = %s, midterm = %d, final = %d, converted = %d\n", subject, midterm, final, converted);   // converted는 성공적으로 읽어서 변수에 저장한 개수
    return 0;
}



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char str[] = "CProgramming1, 90, 86";     // 서식이 정해진 문자열
    char subject[20];
    int midterm;
    int final;

    int converted = sscanf(str, "%[^,],%d,%d", subject, &midterm, &final);
    printf("subject = %s, midterm = %d, final = %d, converted = %d\n", subject, midterm, final, converted);   // converted는 성공적으로 읽어서 변수에 저장한 개수
    return 0;
}


(3) 서식에 맞춰 문자열에 출력

sprintf() 함수는 printf() 함수가 화면에 출력하는 내용을 문자 배열에 저장한다

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char str[50];
    sprintf(str, "%s, %d, %d", "C programming 1", 90, 86);
    printf("str = %s\n", str);

    char subject[20];
    int midterm;
    int final;

    int converted = sscanf(str, "%[^,],%d,%d", subject, &midterm, &final);
    printf("subject = %s, midterm = %d, final = %d, converted = %d\n", subject, midterm, final, converted);   // converted는 성공적으로 읽어서 변수에 저장한 개수
    return 0;
}


snprintf() 함수는 sprintf() 함수와 비슷하지만, 배열의 범위를 넘치지 않게 저장해준다. 
출력 문자열의 길이가 출력 내용을 저장하는 배열보다 크면 배열 크기 -1까지만 저장하고 널 문자를 추가한다.



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char str[50];
    snprintf(str, sizeof(str), "%s, %d, %d", "C programming 1", 90, 86);
    printf("str = %s\n", str);

    char subject[20];
    int midterm;
    int final;

    int converted = sscanf(str, "%[^,],%d,%d", subject, &midterm, &final);
    printf("subject = %s, midterm = %d, final = %d, converted = %d\n", subject, midterm, final, converted);   
    return 0;
}


// 배열의 크기가 문자열보다 작은 경우


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char str[20];     // 19글자까지만 출력
    snprintf(str, sizeof(str), "%s, %d, %d", "C Programming 1", 90, 86);
    printf("str = %s\n", str);
    return 0;
}


4. 문자열 배열


(1) 2차원 문자 배열로 문자열 배열 구현


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARRAY_SIZE(arr, element) (sizeof(arr)) / (sizeof(element))

int main()
{
    char animals[][10] = {"Dog", "Cat", "Racoon", "Duck", "Iguana"};

    for (int i = 0; i < ARRAY_SIZE(animals, animals[0]); i++) {
        printf("animals[%d] = %s\n", i, animals[i]);
    }
    return 0;
}

// animals배열을 함수의 매개변수로 전달 받아 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARRAY_SIZE(arr, element) (sizeof(arr)) / (sizeof(element))

void PrintStrArray(char strs[][10], int size)
{
    for (int i = 0; i < size; i++) {
        printf("strs[%d] = %s\n", i, strs[i]);
    }
}


int main()
{
    char animals[][10] = {"Dog", "Cat", "Racoon", "Duck", "Iguana"};
    PrintStrArray(animals, ARRAY_SIZE(animals, animals[0]));
    // printf("sizeof(animals) = %zu\n", sizeof(animals));               // 50byte 
    // printf("sizeof(animals[0]) = %zu\n", sizeof(animals[0]));         // 10byte 
    return 0;
}


// 다음은 같은 코드이다 // const 있는 버전!
void printStrArray(const char strs[][10], int size)
{
    // strs[0][0] = 'a'    캄파일 오류 발생- 2차원 배열 전체를 const로 수식하기 때문에 strs[0][0] = 'a';  코드는 컴파일 오류 발생
    for (int i = 0; i < size; i++) {
        printf("strs[%d] = %s\n", i, strs[i]);
    }
}

// 2차원 배열은
예를 들어 strs[10] 과 strs[][10]은 다른 의미이다. 
첫 번째는 행의 개수가 10개인 것이고, strs[][10]은 열의 개수가 10개인 것이다.



(2) 포인터로 문자열 배열 구현


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARRAY_SIZE(arr, element) (sizeof(arr)) / (sizeof(element))

int main()
{
    char* animals[] = {"Dog", "Cat", "Racoon", "Duck", "Iguana"};

    for (int i = 0; i < ARRAY_SIZE(animals, animals[0]); i++) {     // 50/ 10
        printf("animals[%d] = %s\n", i, animals[i]);
    }
    return 0;
}


// 포인터로 된 문자열 배열을 함수로 전달

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARRAY_SIZE(arr, element) (sizeof(arr)) / (sizeof(element))

void printStrArray(char* strs[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("strs[%d] = %s\n", i, strs[i]);
    }
}

int main()
{
    char* animals[] = {"Dog", "Cat", "Racoon", "Duck", "Iguana"};

    printStrArray(animals, ARRAY_SIZE(animals, animals[0]));
    return 0;
}


포인터로 구성된 배열을 읽기 전용으로 만들어서 보호하는 것은 배열보다는 복잡하다.
읽기 전용으로 만들고 싶은 것은 strs[] 부분이므로 const 를 자료형과 배열 사이에 붙여야한다.

*/

// void printStrArray(char* const * strs, int size)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARRAY_SIZE(arr, element) (sizeof(arr)) / (sizeof(element))

void printStrArray(char* const strs[], int size)       // const의 위치 중요
{ 
    for (int i = 0; i < size; i++) {
        printf("strs[%d] = %s\n", i, strs[i]);
    }
}

int main()
{
    char* animals[] = {"Dog", "Cat", "Racoon", "Duck", "Iguana"};

    printStrArray(animals, ARRAY_SIZE(animals, animals[0]));
    return 0;
}