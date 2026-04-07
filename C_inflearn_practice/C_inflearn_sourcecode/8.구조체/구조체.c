#if 1
#include <stdio.h>
// 응용실습

typedef struct
{
    int kor;
    int eng;
    int math;
    int total;
    double aver;
} ST;

void input(ST* s, int n);
void calc(ST* s, int n);
void output(ST* s, int n);

int main(void)
{
    ST s[4] = { 0, };
    
    input(s, 4);
    calc(s, 4);
    output(s, 4);

    return 0;
}

void input(ST* s, int n)
{
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("국어 영어 수학 : ");
        scanf_s("%d %d %d", &s[i].kor, &s[i].eng, &s[i].math);
    }
}
void calc(ST* s, int n)
{
    int i;
    for (i = 0; i < 4; i++)
    {
        s[i].total = s[i].kor + s[i].eng + s[i].math;
        s[i].aver = (double)s[i].total / 3;
    }
}
void output(ST* s, int n)
{
    int i;
    printf("********************************************\n");
    printf("%8s%8s%8s%8s%8s\n", "국어", "영어", "수학", "총점", "평균");
    printf("********************************************\n");
    for (i = 0; i < 4; i++)
    {
        printf("%8d%8d%8d%8d%8.2lf\n", s[i].kor, s[i].eng,
            s[i].math, s[i].total, s[i].aver);
    }
    printf("********************************************\n");
}

#endif


#if 0
#include <stdio.h>
// 응용실습

typedef struct
{
    int kor;
    int eng;
    int math;
    int total;
    double aver;
} ST;

int main(void)
{
    ST s[4] = { 0, };
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("국어 영어 수학 : ");
        scanf_s("%d %d %d", &s[i].kor, &s[i].eng ,&s[i].math);
    }

    for (i = 0; i < 4; i++)
    {
        s[i].total = s[i].kor + s[i].eng + s[i].math;
        s[i].aver = (double)s[i].total / 3;
    }
    printf("********************************************\n");
    printf("%8s%8s%8s%8s%8s\n", "국어", "영어", "수학", "총점", "평균");
    printf("********************************************\n");
    for (i = 0; i < 4; i++)
    {
        printf("%8d%8d%8d%8d%8.2lf\n", s[i].kor, s[i].eng,
            s[i].math, s[i].total, s[i].aver);
    }
    printf("********************************************\n");
    return 0;
}

#endif



#if 0
#include <stdio.h>
struct address
{
    int zipcode;
    int city;
};

struct student
{
    int stu_id;
    char stu_name[10];
    int stu_age;
    struct address home;
};


int main(void)
{
    struct student stu;

    stu.stu_id = 1;
    stu.home.zipcode = 111;

    return 0;
}

#endif


#if 0
#include <stdio.h>

struct student
{
    int stu_id;
    char stu_name[10];
    int stu_age;
    int zipcode;
    int city;
};


int main(void)
{
    struct student stu;

    return 0;
}

#endif


#if 0
#include <stdio.h>

typedef struct 
{
    int hours;
    int minutes;
    int seconds;
} time;

int main(void)
{
    time birth = { 8, 45, 23 };
    time* ptr = &birth;
    printf("birth time - %d : %d : %d\n",
        (*ptr).hours, ptr->minutes, ptr->seconds);
    return 0;
}

#endif


#if 0
#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

int main(void)
{
    struct time birth = { 8, 45, 23 };
    struct time* ptr = &birth;
    printf("birth time - %d : %d : %d\n",
        (*ptr).hours, ptr->minutes, ptr->seconds);
    return 0;
}

#endif


#if 0
#include <stdio.h>

int main()
{
    struct student {
        int student_id;
        char student_name[10];
        int age;
    };
    
    struct student stu1 = { 1, "홍길동", 33 };
    struct student stu2 = { 2, "임꺽정", 34 };

    struct student* p = &stu2;
    printf("%s\n", stu1.student_name);
    printf("%d\n", stu1.age);

    printf("%s\n", (*p).student_name);
    printf("%d\n", p->age);
    return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
    struct {
        int student_id;
        char student_name[10];
        int age;
    } stu1;

    struct {
        int student_id;
        char student_name[10];
        int age;
    } stu2;

    return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
    struct student {
        int student_id;
        char student_name[10];
        int age;
    }stu1;
    struct student stu2;

	return 0;
}

#endif