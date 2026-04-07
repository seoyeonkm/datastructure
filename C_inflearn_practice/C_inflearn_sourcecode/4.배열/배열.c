#if 1
#include <stdio.h>
// 응용실습 4-4
int main()
{
	int a[100][100] = { 0, };
	int i, j;
	int num = 0;
	int n;
	int row = 0;
	int col;
	int r, c;

	scanf_s("%d", &n);
	col = n / 2;
	a[row][col] = ++num;

	while (num < n * n)
	{
		if (row == 0)
			r = n - 1;
		else
			r = row - 1;

		if (col == 0)
			c = n - 1;
		else
			c = col - 1;

		if (a[r][c] > 0)
		{
			++row;
		}
		else
		{
			row = r;
			col = c;
		}
		a[row][col] = ++num;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			a[i][n] += a[i][j];
			a[n][i] += a[j][i];
		}
	}
	for (i = 0; i < n+1; i++)
	{
		for (j = 0; j < n+1; j++)
		{
			if (a[i][j] == 0)
				printf("%4c", ' ');
			else
				printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 4-3
int main()
{
	int a[100][100] = { 0, };
	int i, j;
	int num = 0;
	int n;
	int row = 0;
	int col = -1;
	int count;

	scanf_s("%d", &n);
	count = n;

	for(;;)
	{
		for (j = 0; j < count; j++)
			a[row][++col] = ++num;
		if (--count == 0)
			break;
		for (j = 0; j < count; j++)
			a[++row][col] = ++num;

		for (j = 0; j < count; j++)
			a[row][--col] = ++num;
		if (--count == 0)
			break;
		for (j = 0; j < count; j++)
			a[--row][col] = ++num;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] == 0)
				printf("%4c", ' ');
			else
				printf("%4d", a[i][j]);
		}
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
	int a[100][100] = { 0, };
	int i, j, k;
	int num = 0;
	int n;
	int inc = 0;
	int sign = 1;

	scanf_s("%d", &n);

	for (i = 0; i < n*2-1; i++)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				if( i == j+k )
					a[k][j] = ++num;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] == 0)
				printf("%4c", ' ');
			else
				printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 4-1
int main()
{
	int a[100][100] = { 0, };
	int i, j;
	int num = 0;
	int n;
	int inc = 0;
	int sign = 1;

	scanf_s("%d", &n);

	for (i = 0; i < n ; i++)
	{
		for (j = 0; j < n - inc*2; j++)
			a[inc+j][i] = ++num;

		if (i == n / 2)
			sign = -sign;
		inc += sign;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] == 0)
				printf("%4c", ' ');
			else
				printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#endif



#if 0
#include <stdio.h>
// 응용실습 3-2
int main()
{
	int a[10][10];
	int i, j;
	int num = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
			a[i][j] = -1;

		for (j = 0; j < i + 1; j++)
			a[j][i] = ++num;
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i][j] < 0)
				printf("%4c", ' ');
			else
				printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 3-1
int main()
{
	int a[10][10];
	int i, j;
	int num = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 - i - 1; j++)
			a[i][j] = -1;

		for (j = 0; j < i+1; j++)
			a[i][10-i-1+j] = ++num;
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i][j] < 0)
				printf("%4c", ' ');
			else
				printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 2-1
int main()
{
	int prime[200];
	int i,j;

	for (i = 0; i < 200; i++)
		prime[i] = i + 1;

	prime[0] = -1;

	for (i = 0; i < 200; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (prime[j] < 0)
				continue;
			if ((prime[i] % prime[j]) == 0)
			{
				prime[i] = -1;
				break;
			}
		}
	}

	for (i = 0, j=0 ; i < 200; i++)
	{
		if (prime[i] < 0)
			continue;
		printf("%6d", prime[i]);
		j++;
		if( j%10 == 0 )
			printf("\n");
	}
	printf("\n");
	printf("Total : %d개\n", j);
	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 1-2
int main()
{
	int st[3][3];
	int total[3] = { 0, };
	int i, j;

	for (i = 0; i < 3; i++)
	{
		printf("%d번 학생 점수:", i+1);
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d",&st[i][j]);
			total[i] += st[i][j];
		}
	}
	printf("%8s %8s %8s %8s\n", "KOREAN",
		"ENGLISH", "MATH", "TOTAL");
	printf("====================================\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%8d ", st[i][j]);
		}
		printf("%8d ", total[i]);
		printf("\n");
	}
	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 1-1
int main()
{
	int a[10];
	int i;
	int total = 0;
	int max_v=0, min_v=999;

	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);

	for (i = 0; i < 10; i++)
	{
		total += a[i];
		if (max_v < a[i])
			max_v = a[i];
		if (min_v > a[i])
			min_v = a[i];
	}

	printf("total=%d, max=%d, min=%d\n", total, max_v, min_v);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int num[3][4];
	char month[3][4];
	int i;

	num[0][0] = 1;   num[0][1] = 2;
	num[0][2] = 3;   num[0][3] = 4;
	num[1][0] = 5;   num[1][1] = 6;
	num[1][2] = 7;   num[1][3] = 8;
	num[2][0] = 9;   num[2][1] = 10;
	num[2][2] = 11;  num[2][3] = 12;

	month[0][0] = 'J';  month[0][1] = 'a';
	month[0][2] = 'n';  month[0][3] = '\0';
	month[1][0] = 'F';  month[1][1] = 'e';
	month[1][2] = 'b';  month[1][3] = '\0';
	month[2][0] = 'M';  month[2][1] = 'a';
	month[2][2] = 'r';  month[2][3] = '\0';

	for (i = 0; i < 3; i++)
		printf("month[%d]=[%s]\n", i, month[i]);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i, j, array[3][4];
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("Input number : ");
			scanf_s("%d", &array[i][j]);  // 입력
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++)
			printf("%d\t", array[i][j]);  // 출력
		printf("\n");
	}
	printf("\n");

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int i, j;

	//int ar[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int ar[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	printf("sizeof(ar)=%lu\n", sizeof(ar));

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("ar[%d][%d]=%d\n", i, j, ar[i][j]);
		}
	}
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char str1[7] = { 'K', 'O', 'R', 'E', 'A', '\0' };
	char str2[6] = "KOREA";
	char str3[] = "KOREA";
	char alpha[] = { 'a', 'b', 'c', '\0', '1', '2', '3', '\0' };

	printf("%s\n", alpha);
	printf("%c\n", alpha[4]);
	printf("%s\n", &alpha[4]);
	printf("%d\n", (int)alpha);
	printf("%s %s %s\n", str1, str2, str3);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int index;

	for (index = 0; index < 12; index++)
	{
		printf("Month %d has %d days.\n", index + 1, days[index]);
	}

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i, num[5];
	for (i = 0; i < 5; i++)
	{
		printf("Input %d : ", i + 1);
		scanf_s("%d", &num[i]);      // 배열의 정수 값 입력
	}
	printf("\nOUTPUT\n");

	for (i = 0; i < 5; i++)
		printf("%d\t", num[5-i-1]);    // 배열의 정수 값 출력
	printf("\n");

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i, num[5];
	for (i = 0; i < 5; i++)
	{
		printf("Input %d : ", i + 1);
		scanf_s("%d", &num[i]);      // 배열의 정수 값 입력
	}
	printf("\nOUTPUT\n");

	for (i = 4; i >= 0; i--)
		printf("%d\t", num[i]);    // 배열의 정수 값 출력
	printf("\n");

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i, num[5];
	for (i = 0; i < 5; i++)
	{
		printf("Input %d : ", i + 1);
		scanf_s("%d", &num[i]);      // 배열의 정수 값 입력
	}
	printf("\nOUTPUT\n");

	for (i = 0; i < 5; i++)
		printf("%d\t", num[i]);    // 배열의 정수 값 출력
	printf("\n");

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int number[4];
	char alpha[8];

	/* 자료의 저장 */
	number[0] = 5;
	number[1] = 10;
	number[2] = 15;
	number[3] = 20;

	alpha[0] = 'a';
	alpha[1] = 'b';
	alpha[2] = 'c';
	alpha[3] = 'd';
	alpha[4] = '\0';

	printf("[%s]\n", alpha);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	//char array[6] = "come";
	//char array[] = { 'c','o','m','e' };
	char array[] = { 'c','o','m','e', '\0' };

	printf("sizeof(array)=%lu\n", sizeof(array));
	printf("[%s]\n", array);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a[3] = { 1, 2, 3 };
	int b[] = { 10, 20, 30 };
	int sum1, sum2, sum3;

	sum1 = 0;
	sum2 = 0;
	sum3 = 0;

	sum1 = a[0] + b[0];
	sum2 = a[1] + b[1];
	sum3 = a[2] + b[2];

	printf("sum1 = %d, sum2 = %d, sum3 = %d\n", sum1, sum2, sum3);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i, array[5];
	for (i = 0; i < 5; i++) {
		array[i] = i + 1;   // 배열에 대입
		printf("%d\t", array[i]);
	}
	printf("\n");

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i, array[5] = { 1,2,3,4,5 };// 배열에 초기값 부여
	for (i = 0; i < 5; i++)
		printf("%d\t", array[i]);
	printf("\n");

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	//int array[5] = {1,2,3};
	//int array[5] = { 0, };
	//int array[5] = { 0 };
	int array[3] = { 1,2,3,4,5 }; // error
	int i;
	
	for (i = 0; i < 5; i++)
	{
		printf("array[%d]=%d\n", i, array[i]);
	}
	//printf("sizeof(array)=%lu\n", sizeof(array));
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a[6];
	int total=0;
	int i;

	for(i=0; i<6; i++)
		scanf_s("%d", &a[i]);

	for (i = 0; i < 6; i++)
		total += a[i];

	printf("total=%d\n", total);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a,b,c,d,e,f;
	int total;
	scanf_s("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	total = a + b + c + d + e + f;

	printf("total=%d\n", total);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int array[5];

	printf("sizeof(array)=%lu\n", sizeof(array));
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	char array[5];
	array[0] = 'a';
	array[1] = 'b';
	array[2] = 'c';
	array[3] = 'd';
	array[4] = 'e';
	printf("sizeof(array)=%lu\n", sizeof(array));
	return 0;
}
#endif