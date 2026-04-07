#if 1
#include <stdio.h>
#include <string.h>
// 응용실습 3-2
int main()
{
	char* com[] = { "monitor", "printer", "speaker", "mouse" };
	char** ptr[] = { com + 3, com + 2, com + 1, com };
	char*** root = ptr;

	printf(" [ %s ] ", **++root);
	printf(" [ %s ] ", *-- * ++root + 2);
	printf(" [ %s ] ", *root[-2] + 2);
	printf(" [ %s ] \n", root[1][1]);

	return 0;
}
#endif

#if 0
#include <stdio.h>
#include <string.h>
// 응용실습 3-1
int main()
{
	char* language[] = { "visual c++", "java", "basic", "delphi" };
	char** ptr = language;

	printf(" [ %c ] ", *language[3]);
	printf(" [ %s ] ", *language);
	printf(" [ %s ]\n ", *++ptr);
	return 0;
}
#endif


#if 0
#include <stdio.h>
#include <string.h>
// 응용실습 2-2
int main()
{
	int year, month, day;
	int days;
	int is_leap;
	int i,temp;
	int m_days[][12] =
	{ {31,28,31,30,31,30,31,31,30,31,30,31},
	 {31,29,31,30,31,30,31,31,30,31,30,31} };
	
	scanf_s("%d %d", &year, &days);
	is_leap = ((year % 4 == 0) && (year % 100 != 0))
		|| (year % 400 == 0);
	if( is_leap==1 )
		printf("%d년은 윤년입니다.\n", year);
	else
		printf("%d년은 평년입니다.\n", year);

	temp = days;
	for (i = 0; i < 12; i++)
	{
		day = temp;
		temp -= m_days[is_leap][i];
		if (temp < 0)
			break;
	}
	printf("%d년,", year);
	printf(" %d월,", i+1);
	printf(" %d일\n", day);

	return 0;
}
#endif


#if 0
#include <stdio.h>
#include <string.h>
// 응용실습 2-1
int main()
{
	char* a[] = { "return", "printf", "main", "for", "int" };
	int n;
	int i, j;
	char* t;
	n = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (strcmp(a[j], a[j+1]) > 0)
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (i = 0; i < n; i++)
		printf("%s\t", a[i]);
	printf("\n");
	return 0;
}
#endif

#if 0
#include <stdio.h>
// 응용실습 1-3
int main()
{
	char a[100] = "hellotlotlotworld";
	int i;

	for (i = 0; a[i]; i++)
	{
		if (a[i] == 't')
		{
			printf("%d\n", i);
//			break;
		}
	}

	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 1-2
int main()
{
	char a[100];
	int i;

	printf("문자열 입력:");
	gets(a);

	for (i = 0; a[i]; i++)
	{
		if ('a' <= a[i] && a[i] <= 'z')
		{
			a[i] -= 'a' - 'A';
		}
	}
	printf("%s\n", a);

	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 1-1
int main()
{
	int a[] = { 3,2,5,4,1,10,7,6,8,9 };
	int i, j;
	int t;
	int n;
	n = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n-1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j+1]; 
				a[j+1] = t;
			}
		}
	}
	for (i = 0; i < n; i++)
		printf("%4d", a[i]);
	printf("\n");

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 10;
	int* p1 = &a;
	int** p2 = &p1;
	int*** p3 = &p2;

	**p2 = 20;
	printf("a=%d\n", a);

	***p3 = 30;
	printf("a=%d\n", a);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 10;
	int* p1  = &a;
	int** p2 = &p1;

	**p2 = 20;

	printf("a=%d\n", a);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char* fruit[] = { "apple", "grape", "banana", "orange" };
	printf("%s\n", fruit[1]);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i;
	char* week[] = { "Sunday", "Monday", "Tuesday",
	 "Wednesday", "Thursday", "Friday", "Saturday" };
	for (i = 0; i < sizeof(week) / sizeof(week[0]); i++)
	{
		printf("week[%d] = %c, %s\n", i, *week[i], week[i]);
	}

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char* p = "now is the time";
	//printf("sizeof(p)=%lu\n", sizeof(p));

	//p[0]--;
	p = "world";
	printf("[%s]\n", p);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char a[] = "now is the time";
	
	a = "world";

	printf("[%s]\n", a);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	char *p = "now is the time";
	printf("sizeof(p)=%lu\n", sizeof(p));

	p[0]--;
	printf("[%s]\n", p);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char a[] = "now is the time";
	printf("sizeof(a)=%lu\n", sizeof(a));

	a[0]--;
	printf("[%s]\n", a);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int array[2][2] = { 1,2,3,4 };
	int(*ptr)[2] = array;
	int i, j;

	ptr[0][0] = 10;
	ptr[0][1] = 20;
	ptr[1][0] = 30;
	ptr[1][1] = 40;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
			printf("array[%d][%d] = %d\n", i, j, array[i][j]);
	}

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a[3][4];
	int (*p)[4] = a;
	p[1][1] = 10;

	printf("a[1][1]=%d\n", a[1][1]);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a[3][4];
	int *p[4]  = a;

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a[3][4];
	int[4] * p = a;

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a[3][4];
	int count = sizeof(a) / sizeof(a[0]);
	printf("%d\n", count);

	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int a[3];
	int count = sizeof(a) / sizeof(a[0]);
	printf("%d\n", count);
		
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a[3][4];
	int (*pa)[4] = a;

	pa[1][1] = 10;
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a[3][4];
	int* pa = &a[0][0];
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char city[] = "Korea Seoul";
	int i = 0;
	//while (*(city + i) != '\0')
	while (city[i] != '\0')
		i++;
	printf("%d\n", i);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i;
	char str[20], * ptr;
	for (i = 0; i < 20; i++)
		str[i] = 65 + i;
	ptr = str + 19;
	for (i = 0; i < 20; i++)
		printf("%c, %c\n", str[i], *(ptr - i));

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i;
	char str[20], * ptr;
	for (i = 0; i < 20; i++)
		str[i] = 65 + i;
	ptr = str + 19;
	for (i = 0; i < 20; i++)
		printf("%c, %c\n", str[i], *(ptr - i));

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int data[2] = { 100, 300 };
	int* p1, * p2, * p3;

	p1 = p2 = p3 = data;

	printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n",
		*p1++, *++p2, (*p3)++);
	printf("*p1 = %d, *p2 = %d, *p3 = %d\n",
		*p1, *p2, *p3);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int num, array[] = { 1, 2, 3, 4, 5 };
	num = *array + 3;
	printf("%d, ", num);   // 4
	num = *(array + 3) + 5;
	printf("%d\n", num);   // 9


	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int menu[5] = { 0, 10, 20, 30, 40 };
	int* ptr, i;
	ptr = &menu[1];
	i = *ptr++;
	printf("i = %d, *ptr = %d\n", i, *ptr);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int index, *ptr;

	ptr = days;

	//for (index = 0; index < 12; ptr++, index++)
	//	printf("Month %d has %d day\n", index + 1, *ptr);
	 for(index = 0; index < 12; index++)
		//printf("Month %d has %d day\n", index + 1, *(ptr + index));
		printf("Month %d has %d day\n", index + 1, ptr[index]);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int count[5] = { 100, 200, 300, 400, 500 };
	int* ptr = count;
	printf("%d\n", (*ptr)++);   // 1. *ptr
	                            // 2. *ptr = *ptr+1
	printf("%d\n", *ptr);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int count[5] = { 100, 200, 300, 400, 500 };
	int* ptr = count;
	printf("%d\n", *ptr++);
	printf("%d\n", *ptr++);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char str[10];
	char* ptr;
	str[0] = 'A';
	str[1] = 'B';
	str[2] = 'C';
	ptr = str;
	printf("%c, %c, %c\n", str[0], str[1], str[2]);
	printf("%c, %c, %c\n", *ptr, *(ptr + 1), *(ptr + 2));
	printf("%c, %c, %c\n", *str, *(str + 1), *(str + 2));
	printf("%c, %c, %c\n", ptr[0], ptr[1], ptr[2]);
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* p = a;
	printf("sizeof(a)     =%lu\n", sizeof(a));
	printf("sizeof(int[5])=%lu\n", sizeof(int[5]));
	printf("sizeof(p)     =%lu\n", sizeof(p));
	printf("sizeof(int*)  =%lu\n", sizeof(int*));
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0;
	int* ptr = &num1;

	printf("%d, %d, %d\n", num1, num2, *ptr);

	num2 = *ptr;
	printf("%d, %d, %d\n", num1, num2, *ptr);

	ptr = 0;
	printf("%d, %d, %d\n", num1, num2, *ptr);


	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0;
	int* ptr = &num1;

	*ptr = 10;
	printf("%d, %d, %d\n", num1, num2, *ptr);

	num2 = *ptr;
	printf("%d, %d, %d\n", num1, num2, *ptr);

	ptr = &num2;
	*ptr = 5;
	printf("%d, %d, %d\n", num1, num2, *ptr);

	return 0;
}
#endif
#if 0

#include <stdio.h>

int main()
{
	int data;
	int* ptr;
	data = 3;
	ptr = &data;
	printf("&data = %p\n", &data);
	printf("ptr   = %p\n", ptr);
	printf("&ptr  = %p\n", &ptr);
	printf("data  = %d\n", data);
	printf("*ptr  = %d\n", *ptr);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i=10;
	int* p;
	p = &i;

	*p = 20;

	return 0;
}
#endif

#if 0

#include <stdio.h>

int main()
{
	int *i;
	printf("sizeof(i)=%lu\n", sizeof(i));
	return 0;
}
#endif