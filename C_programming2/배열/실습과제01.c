#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

void StudScoreInput(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d번쨰 학생의 성적을 입력하시오: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printStudScore(int arr[], int size)
{
    printf("성적: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int MaxScore(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max) {
            max = arr[i];
        }
        return max;
}

int MinScore(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < min) {
            min = arr[i];
        }
        return min;
}


int AvergScore(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}


void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size -1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int score[SIZE];

    StudScoreInput(score, SIZE);
    printStudScore(score, SIZE);
    printf("최고 점수: %d\n", MaxScore(score, SIZE));
    printf("최저 점수: %d\n", MinScore(score, SIZE));
    printf("평균: %d\n", AvergScore(score, SIZE));
    
    bubbleSort(score, SIZE);
    printStudScore(score, SIZE);

    return 0;
}
