#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    printf("배열 크기 입력: ");
    scanf("%d", &N);

    int *arr = (int *)malloc(sizeof(int) * N);

    if (arr == NULL) 
    {

    }

    for (int i = 0; i < N; i++) 
    {
        arr[i] = i + 1;
    }

    printf("배열 내용: ");
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
