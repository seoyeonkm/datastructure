/*
1. while문
: 조건이 만족되지 않을 때까지 코드를 반복해서 실행

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    printf("약수를 출력할 1 이상의 정수 한 개를 입력하세요: ", n);
    scanf("%d", &n);

    if (n >= 1)
        int divisor = 1;
        while (divisor <= n) {
            if (n % divisor)
        }
}
