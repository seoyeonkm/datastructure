#if 1
#include <stdio.h>
#include <string.h>
// 응용실습 4-1
int fibo_r(int n);
void fibo(int* a, int n);
void display(int* a, int n);
int main()
{
	int a[1000] = { 1,1, };
	int n;
	scanf_s("%d", &n);
	fibo(a, n);
	display(a, n);
	return 0;
}
void display(int* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%4d", a[i]);
	printf("\n");
}
void fibo(int* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		a[i] = fibo_r(i);
}
int fibo_r(n)
{
	if (n < 2)
		return 1;
	return fibo_r(n - 2) + fibo_r(n - 1);
}

#endif


#if 0
#include <stdio.h>
#include <string.h>
// 응용실습 4-1
void fibo(int *a, int n);
void display(int* a, int n);
int main()
{
	int a[1000] = { 1,1, };
	int n;
	scanf_s("%d", &n);
	fibo(a, n);
	display(a, n);
	return 0;
}
void display(int* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%4d", a[i]);
	printf("\n");
}

void fibo(int* a, int n)
{
	int i;
	for (i = 2; i < n; i++)
		a[i] = a[i - 1] + a[i - 2];
}

#endif

#if 0
#include <stdio.h>
#include <string.h>
// 응용실습 3-3

void reverse(char* str);
void swap(char* a, char* b);

int main()
{
	int ret;
	char str[] = "I am a student";
	reverse(str);
	printf("[%s]\n", str);
	return 0;
}

void swap(char* a, char* b)
{
	char t;
	t = *a;
	*a = *b;
	*b = t;
}

void reverse(char* str)
{
	int i, j;
	for (i = 0, j = strlen(str) - 1; i<j; i++, j--)
	{
		swap(str+i, str+j);
	}
}
#endif



#if 0
#include <stdio.h>
#include <string.h>
// 응용실습 3-2

int strindex(char* str);

int main()
{
	int ret;
	char a[] = "hellod";
	ret = strindex(a);
	if (ret < 0)
		printf("t를 찾을수 없습니다.\n");
	else
		printf("t의 index는 %d 입니다.\n", ret);
	return 0;
}

int strindex(char* str)
{
	int n = strlen(str);
	int i;
	for (i = 0; i<n; i++)
	{
		if (str[n - 1 - i] == 't')
			return n - 1 - i;
	}
	return -1;
}
#endif

#if 0
#include <stdio.h>
// 응용실습 3-1

void my_toupper(char* str);

int main()
{
	char a[] = "hello world";
	my_toupper(a);
	printf("[%s]\n", a);
	return 0;
}

void my_toupper(char* str)
{
	int i;
	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
	}
}
#endif


#if 0
#include <stdio.h>
// 응용실습 2-3

void my_tolower(char* str);

int main()
{
	char a[] = "HELLO WORLD\n";
	my_tolower(a);
	printf("[%s]\n", a);
	return 0;
}

void my_tolower(char* str)
{
	int i;
	for (i = 0; str[i]; i++)
	{
		if( str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
	}
}
#endif


#if 0
#include <stdio.h>
// 응용실습 2-2

void gugudan(int(*a)[9]);
void display(int(*a)[9]);

int main()
{
	int a[9][9];
	gugudan(a);
	display(a);
	return 0;
}

void display(int(*a)[9])
{
	int i, j;
	for (i = 0; i < 9; i++)
	{
		printf("%d단 출력\n", i+1);
		printf("=========\n");
		for (j = 0; j < 9; j++)
		{
			printf("%4d * %4d = %4d\n", i + 1, j + 1, a[i][j]);
		}
	}
}
void gugudan(int(*a)[9])
{
	int i, j;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			a[i][j] = (i + 1) * (j + 1);
		}
	}
}
#endif


#if 0
#include <stdio.h>
// 응용실습 2-1

double convert(int f);

int main()
{
	int f;
	double c;
	scanf_s("%d", &f);
	c = convert(f);
	printf("화씨 %d f 는 섭씨 %.2lf c\n", f, c);
	return 0;
}

double convert(int f)
{
	return (5. / 9) * (f - 32);
}
#endif


#if 0
#include <stdio.h>
// 응용실습 1-3
int sum(int start, int end);

int main()
{
	int start, end;

	int total = 0;
	scanf_s("%d %d", &start, &end);

	total = sum(start, end);

	printf("total=%d\n", total);

	return 0;
}

int sum(int start, int end)
{
	int i,j;
	int n = end - start + 1;
	int total = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < start+i; j++)
		{
			total += j + 1;
		}
	}
	return total;
}


#endif


#if 0
#include <stdio.h>
// 응용실습 1-2
int sum(int* a, int n);

int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int total = 0;
	int n = sizeof(a) / sizeof(a[0]);

	total = sum(a, n);
	printf("total=%d\n", total);

	return 0;
}

int sum(int* a, int n)
{
	int i;
	int total = 0;
	for (i = 0; i < n; i++)
		total += a[i];
	return total;
}

#endif


#if 0
#include <stdio.h>
// 응용실습 1-2
int sum(int *a, int n);

int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int total = 0;
	int n = sizeof(a) / sizeof(a[0]);

	total = sum(a, n);
	printf("total=%d\n", total);

	return 0;
}

int sum(int *a, int n)
{
	int i;
	int total = 0;
	for (i = 0; i < n; i++)
		total += a[i];
	return total;
}

#endif


#if 0
#include <stdio.h>
// 응용실습 1-1
int sum( int start, int end);

int main()
{
	int start, end;

	int total = 0;
	scanf_s("%d %d", &start, &end);

	total = sum(start, end);

	printf("total=%d\n", total);

	return 0;
}

int sum(int start, int end)
{
	int i;
	int total = 0;
	for (i = start; i <= end; i++)
		total += i;
	return total;
}

#endif


#if 0
#include <stdio.h>
// 응용실습 1-1
int main()
{
	int start, end;
	int i;
	int total = 0;
	scanf_s("%d %d", &start, &end);

	for (i = start; i <= end; i++)
		total += i;

	printf("total=%d\n", total);

	return 0;
}

#endif


#if 0
#include <stdio.h>

int factorial(int f);

int main(void)
{
	int fact = 1;
	fact = factorial(5);
	printf("5! = %d\n", fact);
	return 0;
}
// 재귀함수로 구현한 factorial
int factorial(int f)
{
	if (f == 1)
		return 1;       // 종료조건
	else
		return (f * factorial(f - 1));
	// n! = n * (n – 1)!
}


#endif




#if 0
#include <stdio.h>

int main(void)
{
	int i, fact = 1;
	for (i = 0; i < 5; i++)
		fact *= i+1;
	printf("5! = %d\n", fact);
	return 0;
}

#endif


#if 0
#include <stdio.h>

void func1(int(*a)[2]);

int main(void)
{
	int array[2][2] = { {1, 2}, {3,4} };
	func1(array);
	return 0;
}

void func1(int(*a)[2])
{
	int i, j;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++)
			printf("a[%d][%d]=%3d\n", i, j, a[i][j]);
	}
}


#endif


#if 0
#include <stdio.h>

void input(int* ar);
void output(int* ar);

int main(void)
{
	int array[5];
	input(array);
	output(array);
	return 0;
}

void input(int* ar)
{
	int i;
	for (i = 0; i < 5; i++) {
		printf("[%d's] Number >> ", i + 1);
		scanf_s("%d", &ar[i]);
	}
}

void output(int* ar)
{
	int i;
	for (i = 0; i < 5; i++)
		printf("%3d\n", ar[i]);
}


#endif


#if 0
#include <stdio.h>
#include <stdio.h>

float circle_area(int r);

int main(void)
{
	int radius;
	float area;
	printf("Input radius : ");
	scanf_s("%d", &radius);
	area = circle_area(radius);
	printf("area = %.2f\n", area);
	return 0;
}

float circle_area(int r)     /* 원 넓이 */
{
	return 3.14f * r * r;
}



#endif


#if 0
#include <stdio.h>
#include <stdio.h>

float circle_area(int r);

int main(void)
{
	int radius;
	float area;
	printf("Input radius : ");
	scanf_s("%d", &radius);
	area = circle_area(radius);
	printf("area = %.2f\n", area);
	return 0;
}

float circle_area(int r)     /* 원 넓이 */
{
	return 3.14f * r * r;
}



#endif


#if 0
#include <stdio.h>
#include <stdio.h>

void swap(int* a, int* b);

int main(void)
{
	int x = 20, y = 50;
	printf("[1] : %d, %d\n", x, y);
	swap(&x, &y);
	printf("[4] : %d, %d\n", x, y);
	return 0;
}

void swap(int* a, int* b)
{
	int temp;
	printf("[2] : %d, %d\n", *a, *b);
	temp = *a;
	*a = *b;
	*b = temp;
	printf("[3] : %d, %d\n", *a, *b);
}


#endif


#if 0
#include <stdio.h>
#include <stdio.h>

void swap(int a, int b);

int main(void)
{
	int x = 20, y = 50;
	printf("[1] : %d, %d\n", x, y);
	swap(x, y);
	printf("[4] : %d, %d\n", x, y);
	return 0;
}

void swap(int a, int b)
{
	int temp;
	printf("[2] : %d, %d\n", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("[3] : %d, %d\n", a, b);
}

#endif


#if 0
#include <stdio.h>
#include <stdio.h>

void func(int* num);

int main(void)
{
	int num = 10;
	func(&num);
	return 0;
}

void func(int* num)
{
	printf("num : %d\n", *num);
}


#endif
#if 0
#include <stdio.h>
#include <stdio.h>

void func(int num);

int main(void)
{
	int num = 10;
	func(num);
	return 0;
}

void func(int num)
{
	printf("num : %d\n", num);
}

#endif


#if 0
#include <stdio.h>
int add(int a, int b);
int main(void)
{
	int a, b, sum;
	scanf_s("%d %d", &a, &b);
	sum = add(a, b);
	printf("%d + %d = %d\n", a, b, sum);
	return 0;
}

int add(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}


#endif


#if 0
#include <stdio.h>
void print_star(int num, char ch);
int main()
{
	int num;
	char ch = '#';
	scanf_s("%d", &num);
	print_star(num, ch);
	printf("hello\n");
	print_star(num, ch);
	printf("hi\n");
	print_star(num, ch);
	printf("good_bye\n");
	print_star(num, ch);
	return 0;
}
void print_star(int num, char ch)
{
	int i;
	for (i = 0; i < num; i++)
		printf("%c", ch);
	printf("\n");
}


#endif


#if 0
#include <stdio.h>
void print_star(void);
int main()
{
	print_star();
	printf("hello\n");
	print_star();
	printf("hi\n");
	print_star();
	printf("good_bye\n");
	print_star();
	return 0;
}
void print_star(void)
{
	printf("###########\n");
}


#endif


#if 0

#include <stdio.h>

int main()
{
	printf("**********\n");
	printf("hello\n");
	printf("**********\n");
	printf("hi\n");
	printf("**********\n");
	printf("good_bye\n");
	printf("**********\n");

	return 0;
}


#endif


#if 0

#include <stdio.h>
int foo(int a);
int main()
{
	foo(10);
	return 0;
}
int foo(int a)
{
	return 10;
}


#endif


#if 0

#include <stdio.h>

int foo(int a)
{
	return 10;
}

int main()
{
	foo(10);
	return 0;
}

#endif

#if 0

#include <stdio.h>

void bar()
{
	bar();
}

void foo(void)
{
	bar();
}

int main(void)
{
	printf("");
	scanf("");
	foo();
	return 0;
}


#endif