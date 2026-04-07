#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
    float score;
} Student;

int main(void)
{
    int N;
    printf("저장할 학생 수를 입력하시오: ");
    scanf("%d", &N);

    Student *students = (Student *)malloc(sizeof(Student) * N);

    if (students == NULL)
    {

    }

    for (int i = 0; i < N; i++) 
    {
        printf("\n학생 %d의 이름 입력: ", i + 1);
        scanf("%s", students[i].name);

        printf("학생 %d의 나이 입력: ", i + 1);
        scanf("%d", &students[i].age);

        printf("학생 %d의 성적 입력: ", i + 1);
        scanf("%f", &students[i].score);
    }

    printf("\n--- 학생 정보 출력 ---\n");
    for (int i = 0; i < N; i++) 
    {
        printf("학생 %d: 이름 = %s, 나이 = %d, 성적 = %.1f\n",
               i + 1, students[i].name, students[i].age, students[i].score);
    }

    free(students);
    return 0;
}
