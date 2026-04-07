#if 1
#include <stdio.h>
// 응용실습 2-2
int main()
{
	char ch1, ch2, ch3, ch4, ch5;

	scanf_s("%c %c %c %c %c", 
		&ch1,1, &ch2,1, &ch3,1, &ch4,1, &ch5,1);

	printf("%c\n", ch5);
	printf("%c\n", ch4);
	printf("%c\n", ch3);
	printf("%c\n", ch2);
	printf("%c\n", ch1);
	
	return 0;
}

#endif

#if 0
#include <stdio.h>
// 응용실습 2-1
int main()
{
	char ch1, ch2;

	ch1 = getchar();
	getchar();
	ch2 = getchar();
	
	printf("%c\n", ch1);
	printf("%c\n", ch2);

	return 0;
}

#endif



#if 0
#include <stdio.h>

int main()
{
	float f;
	double d;

	printf("실수 입력 : ");
	scanf_s("%f", &f);
	printf("실수 출력 : %f\n", f);

	printf("double 입력 : ");
	scanf_s("%lf", &d);
	printf("double 출력 : %16lf\n", d);

	return 0;
}

#endif


#if 0
#include <stdio.h>

int main()
{
	int num;
	long l_num;

	printf("8진수 입력 : ");
	scanf_s("%o", &num);
	printf("10진수 출력 : %d\n", num);

	printf("10진수 입력 : ");
	scanf_s("%d", &num);
	printf("10진수 출력 : %d\n", num);

	printf("16진수 입력 : ");
	scanf_s("%x", &num);
	printf("10진수 출력 : %d\n", num);

	printf("long 입력 : ");
	scanf_s("%ld", &l_num);
	printf("long 출력 : %ld\n", l_num);
	return 0;
}

#endif


#if 0
#include <stdio.h>

int main()
{
	char ch1, ch2;
	printf("한 문자 입력 : ");
	ch1 = getchar();		// scanf("%c", &ch1);
	// fflush(stdin);		
	getchar();

	printf("한 문자 입력 : ");
	ch2 = getchar();		// scanf("%c", &ch2);
	putchar(ch1);		// printf("%c", ch1);
	putchar(ch2);		// printf("%c", ch2);

	return 0;
}

#endif


#if 0
#include <stdio.h>

int main()
{
	int a, ch1, ch2;
	printf("number : "); scanf_s("%d", &a);	/* int형 입력 */
	printf("a = %d\n", a);
	printf("char1 : "); scanf_s("%c", &ch1);	/* char형 입력 */
	printf("ch1 = %c\n", ch1);
	printf("char2 : "); scanf_s("%c", &ch2);	/* char형 입력 */
	printf("ch2 = %c\n", ch2);

	return 0;
}

#endif


#if 0
#include <stdio.h>

int main()
{
	int num;
	printf("Enter the number : ");
	scanf_s("%d", &num);
	printf("number : %d\n", ++num);
	return 0;
}

#endif


#if 0
#include <stdio.h>

int main()
{
	char ch;
	printf("Enter the character : ");
	scanf_s("%c", &ch);
	printf("character : %c\n", ch);

	return 0;
}

#endif


#if 0
#include <stdio.h>

int main()
{
	char str[10];
	printf("Enter the string : ");
	gets(str);
	printf("input string : %s\n", str);

	return 0;
}

#endif


#if 0
#include <stdio.h>

int main()
{
	char ch;
	printf("Enter the character : ");
	ch = getchar();
	printf("input character : %c\n", ch);
	return 0;
}

#endif


#if 0
#include <stdio.h>
// 응용실습 I-6
#include <stdio.h>

int main()
{
	printf("<\"That's great! You scored 99%%\">\n");
	return 0;
}

#endif


#if 0
#include <stdio.h>
// 응용실습 I-5
#include <stdio.h>

int main()
{
	int x = 100;
	int y = 100;
	int z = 100;
	printf("x/25=%d\n", x/25);
	printf("x%%25=%d\n", x%25);
	return 0;
}

#endif


#if 0
#include <stdio.h>
// 응용실습 I-4
#include <stdio.h>

int main()
{
	char ch1 = 'A', ch2 = 66, ch3 = 'A' + 2;
	printf("%c%c%c\n", ch1, ch2, ch3);
	return 0;
}

#endif


#if 0
#include <stdio.h>
// 응용실습 I-3
int main()
{
	/*
	printf("This is the first line");
	printf("\n");
	printf("\n");
	printf("This is the second line");
	*/
	printf("This is the first line\n\n");
	printf("This is the second line");
	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 I-2
int main()
{
	int num = 1256;
	printf("%#o %#d %#x\n", num, num, num);

	return 0;
}
#endif

#if 0
#include <stdio.h>
// 응용실습 I-1
int main()
{
	char* name = "김정인";
	printf("김정인\n");
	printf("%s\n", name);
	puts(name);

	return 0;
}


#endif


#if 0
#include <stdio.h>

int main()
{
	char b = 'A';
	float c = 3.14159f;
	printf("[%c]\n", b);		// 문자출력
	printf("[%8c]\n", b);	// 우측정렬 
	printf("[%-8c]\n", b);	// 좌측정렬
	printf("[%f]\n", c);		// 실수출력
	printf("[%8.3f]\n", c);	// 우측정렬
	printf("[%-8.3f]\n", c);	// 좌측정렬
	printf("[%+8.3f]\n", c);	// 부호출력
	printf("[%08.3f]\n", c);	// 공백채움
	printf("[%+08.3f]\n", c);
	return 0;
}


#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 1234;
	printf("[%d]\n", a);	// 정수출력
	printf("[%8d]\n", a);	// 우측정렬
	printf("[%-8d]\n", a);	// 좌측정렬
	printf("[%+8d]\n", a);	// 부호출력
	printf("[%08d]\n", a);	// 공백채움
	printf("[%+08d]\n", a);
	return 0;
}

#endif


#if 0
#include <stdio.h>
int main()
{
	float x = 123.456, y = 789.012;
	printf("x = %f\n", x);
	printf("y = %f\n", y);
	printf("x + y = %f\n", x + y);
	return 0;
}

#endif


#if 0
#include <stdio.h>

int main()
{
	int x, y, z;
	x = 123, y = 456;
	z = x + y;
	printf("x = %d\t", x);
	printf("y = %d\t", y);
	printf("z = x + y = %d\n", z);
	return 0;
}

#endif

#if 0
#include <stdio.h>

int main()
{
	printf("%c, %d, %f\n", 'w', 10, 10.23);
	printf("%o, %x, %e\n", 10, 10, 10.23);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	puts("Hello World!\n");
	puts("Happy Birthday!\n");

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	puts("ABC");
	puts("DEF");

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	putchar(65);
	putchar(66);
	putchar('\n');
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	float f = 10.25f;
	printf("%f\n", f);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	char ch = 200;
	printf("%d\n", ch);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	unsigned char ch = 0xff;
	printf("%d\n", ch);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	char ch = '0';
	printf("%d\n", ch);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	printf("10\t");
	printf("hello\n");
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	//int a = 0x10;
	int a = 010;
	printf("%d\n", a);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 10;
	char ch = 'A';
	float f = 3.14f;
	double df = 1.414;

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a=10;
	int b = 20;
	char ch='A';

	a = b;
	//10 = 11;

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a;
	char ch;

	a = 10;
	ch = 'A';
	return 0;
}
#endif

#if 0
/* This is test */
#include <stdio.h>

#define  MAX 100
int main()
{
	int int_temp_0;
	printf("%lu\n", sizeof("Hello World!\n"));
	printf("Hello World!\n"); 
	return 0;
}
#endif

