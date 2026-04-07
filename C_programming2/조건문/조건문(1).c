1. 조건 표현식
(1) 관계연산자 : 두 피연산자를 비교해서 참/거짓에 해당하는 값 생성
--> 비교연산자(==)와 대입연산자(=) 혼동 주의

#include <stdio.h>
int main(void)
{
    typedef enum { NONE, FRIENDS, SILVER, GOLD, PLATINUM } Membership;

    Membership membership = GOLD;
    printf("membership == GOLD: %d\n", membership == GOLD);
    printf("membership == SILVER: %d\n", membership == SILVER);
}


(2) 논리연산자 : 참/거짓에 해당되는 피연산자들에 대해 논리 연산을 적용한 후 참/거짓의 결괏값 생성 (and, or, not)

#include <stdio.h>

int main(void)
{
    typedef enum { NONE, FRIENDS, SILVER, GOLD, PLATINUM } Membership;

    Membership membership = GOLD;
    int parkingTime = 30;
    int freeParking = (membership == GOLD || membership == PLATINUM) && parkingTime <= 120;

    printf("무료 주차 가능 = %d\n", freeParking);
    return 0;
}

(3) 단축 평가
: 왼쪽부터 순서대로 평가해서 전체 연산식의 절댓값을 알 수 있으면 중단



2. 조건 표현식

(1) if 문

int main(void)
{
    char seat = '0';
    printf("극장 좌석 열을 입력하세요 : ");
    scanf("%c", &seat);
    if (seat == 'L') 
    {
        printf("표를 구매합니다\n");
    }
    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char membership;
    printf("멤버십을 한 글자로 입력하세요(N: 멤버십 없음, F: 프렌즈, S: 실버, G: 골드, P: 플레티넘): ");
    scanf("%c", &membership);

    printf("주차 시간을 분 단위로 입력하세요: ");
    int parkingTime;
    scanf("%d", &parkingTime);
    if ((membership == 'G' || membership == 'P') && parkingTime <= 120) {
        printf("멤버십: %c, 주차 시간: %d분, 무료 주차 가능\n", membership, parkingTime);
    }
    return 0;
}


(2) if-else문

3. 잘못 자리 잡은 else(dangling else) 문제
: if문이나 else문에서 실행할 문장이 한 개만 있다면 코드 블록을 생략할 수 있다.
: else가 잘못 붙는 경우

4. 조건 연산자 ?:
?:는 세 개의 피연산자를 취하는 삼항 연산자


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#define MOVIE_TICKET_PRICE 14000

int main(void)
{
    char ch;
    printf("조조 영화를 보려면 'M'을 아니면 다른 글자를 입력하세요: ");
    scanf("%c", &ch);

    int price = (ch == 'M') ? MOVIE_TICKET_PRICE - 4000 : MOVIE_TICKET_PRICE;
    printf("Movie ticket price : %d\n", price);

    return 0;
}


5. switch문
: 여러가지 중 한 가지를 선택하는 명령문

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    typedef enum {JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC} MONTH;

    int year;
    MONTH month;

    printf("연도를 입력하세요: ");
    scanf("%d", &year);

    printf("월을 입력하세요: ");
    scanf("%d", &month);

    switch (month) {
        case JAN: case MAR: case MAY: case JUL:
        case AUG: case OCT: case DEC:
        printf("%d년 %d월은 31일\n", year, month);
        break;

        case APR: case JUN: case SEP: case NOV:
            printf("%d년 %d월은 30일\n", year, month);
            break;
        
        case FEB:
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
                printf("%d년 %d월은 29일\n", year, month);
            }
            else {
                printf("%d년 %d월은 28일\n", year, month);
            }
                break;
    }
    return 0;
}









