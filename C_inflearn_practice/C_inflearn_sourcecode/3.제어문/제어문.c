#if 1
#include <stdio.h>
// 응용실습 4-2
int main()
{
	int n;
	int i, j;
	int inc;
	int flag = 1;
	scanf_s("%d", &n);

	for (i = 0, inc=0; i < n; i++)
	{
		for (j = 0; j < (n / 2 - inc); j++)
			printf(" ");

		for (j = 0; j < (inc * 2 + 1); j++)
			printf("*");
		printf("\n");

		if (i == n / 2)
		{
			flag = -flag;
		}
		inc += flag;
	}

	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 4-2
int main()
{
	int n;
	int i,j;
	scanf_s("%d", &n);

	for (i = 0; i < (n/2+1); i++)
	{
		for (j = 0; j < (n/2-i); j++)
			printf(" ");

		for (j = 0; j < (i*2+1); j++)
			printf("*");
		printf("\n");
	}

	for (i = 0; i < n/2; i++)
	{
		for (j = 0; j < i+1; j++)
			printf(" ");

		for (j = 0; j < n - (i+1)*2  ; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 4-2
int main()
{
	printf("   *\n");
	printf("  ***\n");
	printf(" *****\n");
	printf("*******\n");
	printf(" *****\n");
	printf("  ***\n");
	printf("   *\n");

	return 0;
}
#endif

#if 0
#include <stdio.h>
// 응용실습 4-1
int main()
{
	int dan;
	int i,j;
	scanf_s("%d", &dan);

	for (i = 0; i < 4; i++)
	{
		printf("%d단 출력\n", i + 1);
		printf("-----------\n");
		for (j = 0; j < 9; j++)
		{
			printf("%4d * %4d = %4d\n", i+1, j+1, 
				(i+1)*(j+1));
		}
		printf("\n");
	}
	return 0;
}
#endif

#if 0
#include <stdio.h>
// 응용실습 3-3
int main()
{
	int ch;
	int char_cnt = 0; 
	int word_cnt = 0;
	int line_cnt = 0;
	int flag = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch == ' ' || ch == '\n' || ch == '\t')
		{
			flag = 0;
		}
		else
		{
			if (flag == 0)
			{
				word_cnt++;
				flag = 1;
			}
		}
		if (ch == '\n')
			line_cnt++;
		char_cnt++;
	}
	printf("%4d %4d %4d\n", line_cnt, word_cnt, char_cnt);
	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 3-2
int main()
{
	int ch;

	while ((ch = getchar()) != EOF)
	{
		if (ch == ' ')
			ch = '.';
		putchar(ch);
	}
	return 0;
}
#endif

#if 0
#include <stdio.h>
// 응용실습 3-1
int main()
{
	int gcd=0;
	int a, b;
	int count;
	int i;
	scanf_s("%d %d", &a, &b);

	count = (a < b) ? a : b;

	for (i = 0; i < count; i++)
	{
		if ( (a%(i+1)) == 0 )
		{
			if ((b % (i+1)) == 0)
			{
				if (gcd < (i + 1))
					gcd = i + 1;
			}
		}
	}
	printf("a=%d, b=%d, gcd=%d,lcm=%d\n", a, b, gcd,
		   (a*b)/gcd);

	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 2-3
int main()
{
	int i = 0;
	int count = 0;
	int sum = 0;

	for (i = 10; i <= 100; i++)
	{
		if (i % 4 == 0)
		{
			count++;
			sum += i;
		}
	}
	printf("count=%d, sum=%d\n", count, sum);
	
	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 2-1
int main()
{
	int i = 0;
	int result = 1;
	int fact;
	scanf_s("%d", &fact);

	for (i = 0; i < fact; i++)
		result *= i + 1;
	printf("%d! = %d\n", fact, result );
	return 0;
}
#endif

#if 0
#include <stdio.h>
// 응용실습 1-3
int main()
{
	int a,b,c,d,e;
	int total = 0;
	double aver;

	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	total = a + b + c + d + e;
	aver = (double)total / 5;
	printf("total=%d, aver=%.2lf\n", total, aver);

	if (aver >= 90.)
		printf("A학점\n");
	else if (aver >= 80.)
		printf("B학점\n");
	else if (aver >= 70.)
		printf("C학점\n");
	else
		printf("F학점\n");

	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 1-2
int main()
{
	int i;
	int sum = 0;

	for (i = 0; i < 100; i++)
	{
		if ((i + 1) % 2 != 0)
			continue;
		
		sum += i + 1;
		printf("%d\n", i + 1);
		
	}
	printf("합=%d\n", sum);
	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 1-2
int main()
{
	int i;
	int sum = 0;

	for (i = 0; i < 100; i++)
	{
		if ((i + 1) % 2 == 0)
		{
			sum += i + 1;
			printf("%d\n", i + 1);
		}
	}
	printf("합=%d\n", sum);
	return 0;
}
#endif

#if 0
#include <stdio.h>
// 응용실습 1-1
int main()
{
	int i;
	int sum = 0;
	
	for (i = 0;  i < 100 ; i++)
	{
		sum += i + 1;
		printf("%d\n", i + 1);
	}
	printf("합=%d\n", sum);
	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 1-1
int main()
{
	int i;
	int sum = 0;
	i = 0;
	while (i < 100)
	{
		sum += i+1;
		printf("%d\n", i + 1);
		i++;
	}
	printf("합=%d\n", sum);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int x, y;
	for (x = y = 0; y < 10; y++) {
		if (y % 2 == 0)
			continue;
		x += y;
	}
	printf("%d, %d\n", x, y);

	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int ch;
	while ((ch = getchar()) != EOF) // ctrl+z , enter
	{
		if (ch == '/')
			continue;
		putchar(ch);
	}

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int sum = 0, k = 0;
	while (1) {
		k++;
		if (k > 5)
			break;
		sum = sum + k;
	}
	printf("%d, %d\n", k, sum);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char ch;
	while (1)
	{
		if ((ch = getchar()) == '/')
			break;
		putchar(ch);
	}
	printf("end\n");

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int age, level;
	printf("Enter the your age : ");
	scanf_s("%d", &age);
	level = 0;
	while (age >= 10)
	{
		age -= 10;
		level++;
	}
	printf("%d대\n", level * 10);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int age, level;
	printf("Enter the your age : ");
	scanf_s("%d", &age);

	for (level = 0; age >= 10; level++)
	{
		age -= 10;
	}
	printf("%d대\n", level * 10);

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int i, j, data;
	i = 0;
	data = 0;
	for (; i < 6; i++) 
	{
		for (j = 0; j < 2; j++)
			data++;
	}
	printf("%d\n", data);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a;
	for (a = 0; a < 10; a++) {
		printf("hello\n");
	}
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a;
	a = 1;
	while(a <= 10) {
		printf("hello\n");
		a++;
	}
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a;
	for (a = 1; a <= 10; a++) {
		printf("hello\n");
	}
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int x;
	x = 9;
	while(x >= 1)
	{
		if (x > 1)
			printf("%d, ", x);
		else
			printf("%d\n", x);
		x -= 2;
	}

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int x;
	for (x = 9; x >= 1; x -= 2)
	{
		if (x > 1)
			printf("%d, ", x);
		else
			printf("%d\n", x);
	}

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int ch;
	int count = 0;
	
	do{
		ch = getchar();
		if (ch == ' ')
			count++;
	} while (ch != '\n');
	printf("count=%d\n", count);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int ch;
	int count = 0;
	ch = getchar();
	while(ch != '\n')
	{
		if (ch == ' ')
			count++;
		ch = getchar();
	} 
	printf("count=%d\n", count);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int age, level = 0;
	printf("Enter the your age : ");
	scanf_s("%d", &age);
	do
	{
		age = age - 10;
		level++;
	} while (age >= 10);
	printf("%d대\n", level * 10);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int data = 7, num = 6;
	do {
		data += 2;
		++num;
	} while (num > 10);
	printf("%d, %d\n", data, num);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 1;
	do
	{
		printf("%d\n", a);
		a++;
	} while (a > 5);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 1;
	do {
		printf("hello\n");
		a++;
	} while (a <= 10);
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int age, level = 0;
	printf("Enter the your age : ");
	scanf_s("%d", &age); // 35

	while (age >= 10)
	{
		age = age - 10;     // age -= 10;
		level = level + 1;  // level++;
	}
	printf("%d대\n", level * 10);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int data = 1, num = 1;
	while (num < 6)
	{
		data += num;  // 1 + 1 + 2 + 3 + 4 + 5
		num++;
	}
	printf("%d, %d\n", data, );

	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int data = 1, num = 1;
	while (num < 6)
		data += (num++);  // 1 + 1 + 2 + 3 + 4 + 5
	printf("%d, %d\n", data, );

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 1;
	while (a > 5)
	{
		printf("%d\n", a);
		a++;
	}

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 0;
	while (a < 10) {
		printf("hello\n");
		a++;
	}

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 1;
	while (a <= 10) {
		printf("hello\n");
		a++;
	}

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	double a;
	scanf("%lf", &a);
	switch (a) {
	case 1: printf("1111\n");
		break;
	case 3: printf("3333\n");
		break;
	default: printf("9999\n");
	}
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int age;
	printf("Enter the your age : ");
	scanf_s("%d", &age);  // 35
	switch (age / 10) {   // 3.5 => 3
	case 6:  printf("60대 \n");   break;
	case 5:  printf("50대 \n ");  break;
	case 4:  printf("40대 \n ");  break;
	case 3:  printf("30대 \n ");  break;
	case 2:  printf("20대 \n ");  break;
	case 1:  printf("10대 \n ");  break;
	case 0:  printf("유소년 \n "); break;
	default: printf("해당사항 없습니다 \n ");
	}


	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int num, data = 1;
	data += 2;

	switch (data) {
	case 1:  num = 60;
	case 2:  num = 70;
	case 3:  num = 80;
	case 4:  num = 90;
	default: num = 100;
	}

	printf("%d\n", num);

	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int x, y;
	char ch;
	scanf_s("%d %d", &x, &y);
	switch (x + y) {
	case 100: ch = 'A'; break;
	case 200: ch = 'B'; break;
	case 300: ch = 'C'; break;
	default:  ch = 'Z';
	}
	printf("%c\n", ch);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int month, day;
	int sum = 0;
	printf("월 일 입력: ");
	scanf_s("%d %d", &month, &day);  // 4  15

	switch (month)
	{
	case 4:  sum += 31;
	case 3:  sum += 28;
	case 2:  sum += 31;
	}
	sum += day;
	printf("지금까지 지나온 날짜는 %d일 입니다.\n", sum);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a;
	scanf_s("%d", &a);

	switch (a)
	{
	case 1:  case 3: case 5: case 7: case 9:
		printf("홀수\n"); break;
	case 2:  case 4: case 6: case 8: case 10:
		printf("짝수\n"); break;
	default: printf("범위 초과\n");
	}

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a;
	scanf_s("%d", &a);

	switch (a)
	{
	    case 1:  printf("one\n"); 
		case 2:  printf("two\n"); 
		case 3:  printf("three\n"); 
		default: printf("error\n");
	}

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a;
	scanf_s("%d", &a);
	switch (a)
	{
	case 1: printf("one\n");
		break;
	case 2: printf("two\n");
		break;
	case 3: printf("three\n");
		break;
	default: printf("error\n");
	}


	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a;
	scanf_s("%d", &a);
	if (a == 1)
		printf("one\n");
	else if (a == 2)
		printf("two\n");
	else if (a == 3)
		printf("three\n");
	else
		printf("error\n");

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int ch;

	scanf_s("%d", &ch);

	if (('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z'))
		printf("알파벳 입니다.\n");

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int age;
	printf("Enter the your age : ");
	scanf_s("%d", &age);

	if (age >= 60) printf("60대 이상\n");
	else if (age >= 50)printf("50대 \n ");
	else if (age >= 40) printf("40대 \n ");
	else if (age >= 30) printf("30대 \n ");
	else if (age >= 20) printf("20대 \n ");
	else if (age >= 10) printf("10대 \n ");
	else if (age >= 0) printf("유소년 \n ");
	else printf("해당사항 없습니다 \n ");


	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a, x = 20, y = 30;
	if (x > y) a = 3;
	else if (x < y) a = 4;
	else a = 5;

	printf("a = %d\n", a);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a, x = 5, y = 4, z = 6;

	if (x < y && y < z)
		a = 5;
	else if (x < z && y < z)
		a = 6;
	else
		a = 7;
	printf("a = %d\n", a);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int num;
	scanf_s("%d", &num);

	if (num == 0)
		printf("zero\n");
	else if (num > 0)
		printf("plus\n");
	else
		printf("minus\n");

	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int x, y, z = 7, w = 6;
	if (z > 0) {
		if (w > 10) {
			x = 20;
			y = x + 10;
		}
		else {
			x = 30;
			y = x + 10;
		}
	}
	else {
		x = 30; y = x;
	}
	printf("x = %d, y = %d\n", x, y);


	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int x = 4, y = 5, z = 6;
	if (x < y) {
		if (y < z)    y += 1;
		else          y -= 1;
	}
	else
		y = 0;
	printf("%d, %d, %d\n", x, y, z);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int num;
	scanf_s("%d", &num);
	if (num > 0)
		printf("plus\n");
	else
	{
		if (num == 0)
			printf("zero\n");
		else
			printf("minus\n");
	}


	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int num;
	scanf_s("%d", &num);
	if (num >= 0)
	{
		if (num == 0)
			printf("zero\n");
		else
			printf("plus\n");
	}
	else
		printf("minus\n");

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int num, data = 0;
	if (!data)
		num = 10;
	else
		num = 1;

	printf("num=%d\n", num);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a, x = 3, y = 4;
	if (x == y)
		a = 5;
	else
		a = 7;
	printf("a = %d\n", a);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a, x = 3, y = 4;
	if (x < y)
		a = 5;
	else
		a = 7;
	printf("a = %d\n", a);

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int num;
	scanf_s("%d", &num);
	if (num >= 0)	
		printf("plus\n");
	else
		printf("minus\n");
	
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 20;
	if ( 100 = a )
		printf("a is 100\n");

	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int x = 0, y = 10;
	if (x != 0 && x < y)
		x = 10;
	printf("%d, %d\n", x, y);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int x = 4, y = 5, z = 6;
	if (x < y && y < z)
		y += 1;
	printf("%d, %d, %d\n", x, y, z);

	return 0;
}
#endif


#if 0
#include <stdio.h>

void foo(void) // 함수 선언문
{              // 함수 구현부
}

int main()
{
	int a;
	float f;

	foo(); // 함수 호출문
	a = 10;
	f = 3.14f;
	if ()
	{
	}

	if ()
	{
	}
	else
	{
	}

	switch (condition)
	{
	case 1: statement1 a; break;
	case 2: statement2 a; break;
	}
	int a = 0;
	while (a < 10)
	{
		statement1;
		a++;
	}
	return 0;
}
#endif
#if 0

#include <stdio.h>

int main()
{
	;   // NOP
	if (condition)
		statement;

	if (condition)
	{
		statement1;
		statement2;
	}
	return 0;
}
#endif