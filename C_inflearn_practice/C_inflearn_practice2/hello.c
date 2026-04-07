   // ?숈쟻 硫붾え由??좊떦/ ?댁젣

// ?꾩슂????硫붾え由щ? ?좊떦 諛쏄퀬, ?꾩슂 ?놁쓣 ???댁젣 => heap ?곸뿭???좊떦
// 硫붾え由?釉붾줉 ?좊떦 : malloc(), calloc()
// 硫붾え由?釉붾줉 ?댁젣 : free()


#if 0
#include <stdio.h>
int main()
{
	char* ptr;
	int size;
	printf("memory bytes >> ");
	scanf_s("%d", &size);
	if ((ptr = (char*)malloc(size)) == NULL)   // 메모리 할당
	{
		printf("메모리 할당에 실패하셨습니다.\n");
		exit(0);
	}
	getchar();
	printf("string >> ");
	gets(ptr);
	printf("%s\n", ptr);
	free(ptr);   // 메모리 해제
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int score[3] = { 0, };
	int i;
	int total = 0;

	for (i = 0; i < 3; i++)
	{
		printf("% d번째 점수: ", i + 1);
		scanf_s("%d", &score[i]);
	}

	for (i = 0; i < 3; i++)
		total += score[i];

	for (i = 0; i < 3; i++)
		printf("%6d", score[i]);

	printf("\n");
	printf("총점 : %d\n", total);

	return 0;
}
#endif

#if 0
#include <stdio.h>
#include <stdlib.h>   // malloc() 의 위치
void init(int *score, int *n);
void input(int *score, int n);
void calc(int* score,int *total, int n);
void output(int *score, int total, int n);

int main()
{

	int n;
	int* score = 0;
	int total = 0;

	init(&score, &n);
	input(score, n);
	calc(score, &total, n);
	output(score, total, n);
	free(score);
	return 0;
}

void init(int** score, int *n)
{
	printf("몇 명 : ");
	scanf_s("%d", n);

	*score = (int*)malloc(*n * sizeof(int));
}

void input(int* score, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d번째 점수: ", i + 1);
		scanf_s("%d", &score[i]);
	}

}

void calc(int* score, int* total, int n)
{
	int i;
	for (i = 0; i < n; i++)
		*total += score[i];
}

void output(int* score, int total, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%6d", score[i]);

	printf("\n");
	printf("총점 : %d\n", total);
}

#endif




#if 0
#include <stdio.h>
// 구조체 
// 여러 개의 서로 다른 데이터 형 변수들을 묶어서 하나의 단위로 처리할 수 있도록 구조화시킨 자료구조의 형태
int main()
{
	struct student {
		int student_id;
		char student_name[10];
		int age;
	}stu1; 


	struct student stu2;     // tag명을 사용한 문
	 
	return 0;   
}

#endif


#if 0
#include <stdio.h>
struct student {
	int stu_id;
	char stu_name[10];
	int stu_age; 
}stu1 = { 1, "김철수", 15 };

struct student stu2 = { 2, "김영수", 14 };

#endif


// 구조체의 메모리 확보

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

	struct student* p = &stu2;        // *은 구조체 포인터 변수의 멤버를 지정
	printf("%s\n", stu1.student_name);   // .은 구조체 변수의 멤버를 지정
	printf("%d\n", stu1.age);


	printf("%s\n", (*p).student_name);  
	printf("%d\n", p->age);    // 포인터의 경우는 둘다 가능 
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
	printf("birth time = %d : %d : %d\n",
		ptr->hours, ptr->minutes, ptr->seconds);
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
	printf("birth time = %d : %d : %d\n",
		ptr->hours, ptr->minutes, ptr->seconds);
	return 0;
}

#endif


// 구조체 형태로 배열을 선언할 수 있다
// 구조체 안에서 다시 구조체를 선언할 수 있다


#if 0
#include <stdio.h>
str                                                                                                 uct address
{
	int zipcode;
	int city;
};

struct student
{
	int stu_id;
	int stu_name[10];
	int stu_age;   
	struct address home;            // 구조체 분야 별로 나누기
};

int main(void)
{
	struct student stu;

	stu.stu_id = 1;
	stu.home.zipcode = 111;

	return 0;
}

#endif




// 학교 온라인 수업 예제 문항


#if 0
#include <stdio.h>
// 열거형

int main(void)
{

	enum MONTH { JANUARY = 1, FEBURARY = 2, MARCH = 3, APRIL = 4,
				MAY = 5, JUNE = 6, JULY = 7, AUGUST = 8, SEPTEMBER = 9,
				OCTOBER = 10, NOVEMBER = 11, DECEMBER = 12 };             // enum MONTH 자료형을 만들고 심볼릭 상수를 생성, 열거형 상수 생성
	enum MONTH month = MARCH;                                             // enum MONTH 자료형으로 MONTH 변수를 생성하고 MARCH로 초기화
	
	// month = 15;

	printf("month = %d\n", month);

	return 0;

}

#endif

#if 0
#include <stdio.h>

// 열거형

int main(void)
{ 
	typedef enum { NUM1 = 2, NUM2, NUM3 } NUM;
	NUM num1 = NUM1;
	NUM num2 = NUM2;
	NUM num3 = NUM3;
	printf("num1 = %d, num2 = %d, num3 = %d", num1, num2, num3);
    return 0;
}
#endif


#if 0
#include <stdio.h>

int main(void)
{
	printf("included src.txt\n");
	return 0;
}
#endif

#if 0
#include <stdio.h>

#define A "32"

int main(void)
{
	printf("A = %s\n", A);

#define A 64
	printf("A = %d\n", A);       // 동일한 매크로가 두 개 이상 선언되면 가장 최근 값을 사용한다
}
#endif

#if 0
#include <stdio.h>
int main(void)
{
	int n = 3;
	int result = n++ + 4;        // 7
	int result2 = n++ + 4;       // 8
	printf("n = %d, result = %d, result2 = %d\n", n, result, result2);
	printf("n = %d\n", n--);     // 5
	printf("n = %d\n", --n);     // 3
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main(void)
{
	int n1, n2, n3;
	n1 = (n2 = 4)
}

#endif


#if 0
#include <stdio.h>

for (; ; )    // 반복할때 쓰임

#endif


#if 0
#include <stdio.h>
void func2
{
	x = n;
	printf;           // 여기까지 전역변수
	int x = 5;        // 여기서부터 지역변수
	printf;
}

int main(void)
{
	printf;
	func1(3);
	func2(7);
}
#endif

#if 1
#include <stdio.h>

int main(void)
{
	typedef enum 
}

#endif