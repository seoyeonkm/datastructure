#if 0
#include <stdio.h>
int main()
{
	int x = 4, y = 5, z = 6;
	if (x < y && y < z)
		y += 1;
	printf("%d, %d, %d\n", x, y, z);   // 4, 6, 6
	return 0;
}
#endif

#if 0
#include <stdio.h>
// if¹®
int main()
{
	int x = 0, y = 10;
	if (x != 0 && x < y)        // false¸é µÚ¿¡²¨ºÎÅÍ
		x = 30;
	printf("%d, %d\n", x, y);   // 0, 10
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	int a = 10;
	if (a == 100)               // == ·Î ¸¸µé¾îÁÖ´Â °ÍÀÌ Áß¿ä     
		printf("a is 100\n");   // error ³­´Ù
	return 0;
}
#endif

#if 0
#include <stdio.h>
// if-else¹®
int main()
{
	int num;
		scanf_s("%d", &num);
	if (num >= 0)   printf("plus\n");
	else            printf("minus\n");
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
	int num, data = 0;
	if (!data)    // (data == 0)
		num = 10;
	else
		num = 1;

	printf("num = %d", num);

	return 0;
}
#endif


#if 0
#include <stdio.h>
// nested if-else¹®
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
	int x = 4, y = 5, z = 6;
	if (x < y) {
		if (y < z)   y += 1;     // 4, 6, 6
		else         y -= 1;
	}
	else
			y = 0;                  
	printf("%d, %d, %d\n", x, y, z);  // 4, 6, 6
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
			y = x + 10;    // 30, 40, 7, 6    // xê°€ ?¤ì‹œ ?¬ê¸°?ì„œ ?•ì˜??
		}
	}
	else {
		x = 30; y = x;
	}
	printf("x = %d, y = %d\n", x, y);   // 30, 40
	return 0;
}
#endif

#if 0
#include <stdio.h>
// ?¤ì¤‘ ifë¬?(else if)
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
	int a, x = 20, y = 30;

	if (x > y) a = 3;
	else if (x < y) a = 4;
	else a = 5;

	printf("a = %d\n", a);
	return 0;
}
#endif


// 0 <= num <= 100    => ÁÖÀÇ!!!
// 0 <= num && num <= 100   => ÀÌ°Ô ¸ÂÀ½!!

// && ¿¬»êÀÚ´Â AND(±×¸®°í)
// || ¿¬»êÀÚ´Â OR(¶Ç´Â)

#if 0
#include <stdio.h>
int main()
{
	int ch;

	scanf_s("%d", &ch);

	if (('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z'))
		printf("?ŒíŒŒë²³ì…?ˆë‹¤.\n");
	
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
// switch case¹®
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

	switch (a)
	{
	case 1: case 3: case 5: case 7: case 9:
		printf("È¦¼ö\n");  break;
	case 2: case 4: case 6: case 8: case 10:
		printf("Â¦¼ö\n");  break;
	default: printf("¹üÀ§ ÃÊ°ú\n");

	}
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	int month, day;
	int sum = 0;
	printf("¿ù ÀÏ ÀÔ·Â:  ");
	scanf_s("%d %d", &month, &day);

	switch (month)
	{
	case 4: sum += 31;
	case 3: sum += 28;
	case 2: sum += 31;
	}
	sum += day;
	printf("Áö±İ±îÁö Áö³ª¿Â ³¯Â¥´Â %dÀÏ ÀÔ´Ï´Ù.", day);
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
		default: ch = 'Z';
	}
	printf("%c\n", ch);
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf_s("%d", &age);                        // 35
	switch (age / 10) {                         // 3.5 => 3
		case 6: printf("60´ë \n"); break; 
		case 5: printf("50´ë \n"); break;
		case 4: printf("40´ë \n"); break;
		case 3: printf("30´ë \n"); break;
		case 2: printf("20´ë \n"); break;
		case 1: printf("10´ë \n"); break;
		case 0: printf("À¯¼Ò³â \n"); break;
		default: printf("ÇØ´ç»çÇ× ¾ø½À´Ï´Ù. \n");
	}

	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
// case ºÎºĞ¿¡´Â Á¤¼öÇüÀ» ½á¾ßÇÑ´Ù. ºÎµ¿¼Ò¼öÁ¡¼ö, º¯¼ö, ¹®ÀÚ¿­Àº ÀÌ¿ëÇÒ ¼ö ¾ø´Ù. ±×·¡¼­ ÀÌ ½Äµµ ¿À·ù°¡ ¶á´Ù.
{
	double a;
	scanf_s("%lf", &a);
	switch (a) {
		case 1: printf("1111\n"); break;
		case 3: printf("3333\n"); break;
		default: printf("9999\n");
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
	int a = 1;
	while (a > 5) {                // ÀÌ¹Ì false¶ó¼­ µğ¹ö±ëÇßÀ» ¶§ ¾Æ¹«°Íµµ ¾È³ª¿È
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
	int data = 1, num = 1;
	while (num < 6)
		data += (num++);
	printf("%d %d\n", data, num);     // 1 + 1 + 2 + 3 + 4 + 5
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	int age, level = 0;
	printf("Enter your age:  ");
	scanf_s("%d", &age);

	while (age >= 10)
	{
		age = age - 10;
		level = level + 1;          // level++    // 0 + 1 + 2 + 3 + .....
	}
	printf("%d´ë\n", level * 10);
	return 0;
}
#endif


#if 0
#include <stdio.h>
// do while¹®
int main()
{
	int data = 7, num = 6;
	do
	{
		data += 2;
		++num;
	} while (num > 10);
	printf("%d, %d\n", data, num);    // 9, 7 // °ÅÁşÀÌ´Ï±î ÇÑ ¹ø¸¸ ½ÇÇàÇÔ
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	int age, level = 0;
	printf("Enter your age:  ");
	scanf_s("%d", &age);
	do                   // doÀÇ ¿ëµµ°¡ ±Ã±İÇØÁü
	{
		age = age - 10;
		level++;         // level++    // 0 + 1 + 2 + 3 + .....
	} while (age >= 10);
	printf("%d´ë\n", level * 10);
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
	while (ch != '\n')              // enter°¡ ¾Æ´Ò ¶§. enterÀÏ ¶§ Å»ÃâÇØ¾ßÇÔ
	{
		if (ch == ' ')              // °ø¹é ¹®ÀÚÀÎ°¡¿ä?
			count++;
		ch = getchar();
	} 
	printf("count = %d\n", count);
	
	return 0;
}
#endif



#if 0
#include <stdio.h>
int main()
{
	int ch;
	int count = 0;

	do {                               // ÀÔ·Â -> °Ë»ç -> ¹İº¹ // ´õ Æí¸®
		ch = getchar();
		if (ch == ' ')            
			count++;
	} while (ch != '\n');
	printf("count = %d\n", count);

	return 0;
}
#endif

#if 0
#include <stdio.h>
// for ¹®
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
// À§ÀÇ for¹®À» while¹®À¸·Î ¹Ù²Ş 
int main()
{
	int x;
	x = 9;
	while (x >= 1)
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
	int a;
	a = 1;
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
	int i, j, data;
	for (i = 1, data = 0; i <= 6; i++) 
	{
		for (j = 1; j <= 1; j++)         // ¿©±âºÎÅÍ ½ÇÇà
			data += j;                   // data += 1 => data++
	}
	printf("%d\n", data);
}
#endif



#if 0
#include <stdio.h>
int main()
{
	int age, level;
	printf("Enter your age: ");
	scanf_s("%d", &age);

	for (level = 0, age >= 10; level++)
	{
		age -= 10;
	}
	printf("%d\n", level * 10);
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int age, level;
	printf("Enter your age: ");
	scanf_s("%d", &age);
	level = 0;
	while (age >= 10)
	{
		age -= 10;
		level++;
	}
	printf("%d´ë\n", level * 10);
	return 0;
}
#endif


#if 0
#include <stdio.h>
// break ¹® => loop¸¦ Å»ÃâÇÏ±â À§ÇÑ ±¸¹®
int main()
{
	char ch;
	while (1)
	{
		if ((ch = getchar()) == '/')      // °ıÈ£°¡ Áß¿ä!!! == ¸¦ ¸ÕÀú ºñ±³ÇØ¾ßÇÑ´Ù 
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
	int sum = 0, k = 0;
	while (1) 
	{
		k++;
		if (k > 5)
			break;
		sum = sum + k;
	}
	printf("%d, %d\n", k, sum);     // 6, 15
	return 0;
}
#endif


#if 0
#include <stdio.h>
// continue¹® => loop ¾ÈÀ» °Ç³Ê¶Ù±â À§ÇÑ °Í
int main()
{
	int ch;
	while ((ch = getchar()) != EOF)    // ctrl+z, enter  // ÀĞÀ» ¹®ÀÚ°¡ ´õ ÀÌ»ó ¾øÀ» ¶§, Áï ¹İº¹ Á¾·á¶ó´Â ¶æÀÌ´Ù
	{
		if (ch == '/')
			continue;                  // ´Ù½Ã while¹®À¸·Î µ¹¾Æ°¨
		putchar(ch);                   // putchar´Â ¹®ÀÚ¸¦ ÇÑ °³ Ãâ·ÂÇÑ´Ù´Â ±¸¹®
	}
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	int x, y;
	for (x = y = 0; y < 10; y++)
	{
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
// ÀÀ¿ë ½Ç½À 1-1
int main()
{
	int i;
	int sum = 0;              // sumÀº ÃÊ±âÈ­½ÃÄÑ¾ß ´©ÀûÀÌ µÊ
	i = 0;
	while (i < 100)
	{
		sum += i + 1;
		printf("%d\n", i + 1);
		i++;
	}
	printf("ÇÕ%d\n", sum);

	return 0;
}
#endif















//¹è¿­
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
	int a, b, c, d, e, f;
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
	int a[5];
	int total = 0;
	int i;

	for (i = 0; i < 5; i++)
		scanf_s("%d", &a[i]);

	for (i = 0; i < 5; i++)
		total += a[i];


	printf("total=%d\n", total);
	return 0;
}
#endif


#if 0
#include <stdio.h>
// ÀÏÂ÷¿ø ¹è¿­
int main()
{
	int array[5] = { 1, 2, 3, 4, 5 };
	printf("sizeof(array)=%lu\n", sizeof(array));
	return 0;
}
#endif


// ¹®ÀÚÇü º¯¼ö ch (1 byte °ø°£)
// Á¤¼öÇü º¯¼ö a (4 byte °ø°£)
// Á¤¼öÇü º¯¼ö b (4 byte °ø°£)
// ½Ç¼öÇü º¯¼ö f (4 byte °ø°£)
// ½Ç¼öÇü º¯¼ö double d (8 byte °ø°£)


#if 0
#include <stdio.h>
int main()
{
	// int array[5] = { 1, 2, 3 };              // ÀÚµ¿À¸·Î 0À¸·Î Ã¤¿öÁø´Ù
	// int array[5] = { 0 };                    // ÀüÃ¼ ¹è¿­À» 0À¸·Î ÃÊ±âÈ­
	int array[3] = { 1, 2, 3, 4, 5 };           // error
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("array[%d]=%d\n", i, array[i]);
	}
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int i, array[5] = { 1,2,3,4,5 };  // ¹è¿­¿¡ ÃÊ±â°ª ºÎ¿©
	for (i = 0; i < 5; i++)
		printf("%d\t", array[i]);     // »ç¿ëÀÚ°¡ º¼ ¼ö ÀÖ°Ô Ãâ·Â
	printf("\n");

	return 0;
}
#endif

// ÄÚµå ºÎ¿¬¼³¸íÇØº¸ÀÚ¸é,
// array[0] = 1, array[1] = 2, array[2] = 3, array[3] = 4, array[4] = 5
// => ´ÜÁö ÄÄÇ»ÅÍ ¸Ş¸ğ¸®¿¡ ÀÌ·¸°Ô ÀúÀåÇßÀ»»Ó, ¾ÆÁ÷ user´Â ÀÌ °ªÀ» º¼ ¼ö ¾øÀ½.


#if 0
#include <stdio.h>
int main()
{
	int i, array[5];
	for (i = 0; i < 5; i++) 
	{
		array[i] = i + 1;    // ¹è¿­¿¡ ´ëÀÔ
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
	int a[3] = { 1,2,3 };
	int b[] = { 10,20,30 };
	int sum1, sum2, sum3;

	sum1 = 0;                  //ÃÊ±â °ª ºÎ¿© => ¾²·¹±â°ª
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
// ¹®ÀÚ ¹è¿­
// ¹®ÀÚ¿­ÀÇ ³¡¿¡´Â NULLÀÌ ÀÚµ¿À¸·Î Ãß°¡µÇ¾î ¹è¿­ÀÇ Å©±â´Â ÇÊ¿äÇÑ ¹®ÀÚ ¼ö +1ÀÌ µÈ´Ù
int main()
{
	// char array[6] = "come";
	// char array[] = { 'c', 'o', 'm', 'e', '\0'};   
	printf("sizeof(array)=%lu\n", sizeof(array));
	printf("%s\n", array);

	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int number[4];
	char alpha[8];

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
int main(void)
{
	int i, num[10];
	for (i = 0; i < 10; i++)
	{
		printf("Input %d : ", i + 1);   // %d ÀÚ¸®¿¡ µÚÀÇ °ªÀÌ µé¾î°¨
		scanf_s("%d", &num[i]);         // ¹è¿­ÀÇ Á¤¼ö °ª ÀÔ·ÂÈ÷¸é¼­ ÀúÀå
	}
	printf("\nOUTPUT\n");

	for (i = 0; i < 10; i++)
		printf("%d\t", num[i]);         // ¹è¿­ÀÇ Á¤¼ö °ª Ãâ·Â
	printf("\n");
	return 0;
}
#endif

#if 0
#include <stdio.h>
/*Á¤¼ö °ª 10°³¸¦ ÀÔ·Â ¹Ş¾Æ ¿ª¼øÀ¸·Î Ãâ·ÂÇÏ´Â ÇÁ·Î±×·¥*/
int main(void)
{
	int i, num[10];
	for (i = 0; i < 10; i++)
	{
		printf("Input %d : ", i + 1);
		scanf_s("%d", &num[i]);
	}
	printf("\nOUTPUT\n");
	for (i = 9; i >= 0; num[i])
		printf("%d\t", num[i]);
	printf("/n");
	
	return 0;
}
#endif


#if 0
#include <stdio.h>
#define MON 12

/*°¢ ´ŞÀÇ ³¯Â¥ ¼ö¸¦ Ãâ·Â */
int main(void)
{
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int index;

	for (index = 0; index < 12; index++)
	{
		printf("Month %d has %d days.\n", index + 1, days[index]);   // Ã¹¹øÂ° %d¿Í µÎ¹øÂ° %d ¶ó´Â ¶æ
	}  
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	char str1[7] = { 'K', 'O', 'R', 'E', 'A', '\0' };  // ³²Àº Ä­Àº ÀÚµ¿À¸·Î 0À¸·Î Ã¤¿öÁü  // K O R E A \0 0
	char str2[6] = "KOREA";      // K O R E A \0
	char str3[] = "KOREA";       // K O R E A \0
	char alpha[] = { 'a', 'b', 'c', '\0', '1', '2', '3', '\0' };   // ¹®ÀÚ¿­ÀÌ µÎ °³ µé¾îÀÖ´Ù´Â ÀÇ¹Ì

	printf("%s\n", alpha);     // abc  // nullÀÌ¸é ±×³É ³¡³ª´Â°É·Î º½
	printf("%c\n", alpha[4]);  // 1
	printf("%s\n", &alpha[4]); // 123  // alpha[4]¸¦ ´ÙÀ½À¸·Î ÂïÈ÷´Â ¹®ÀÚ¿­À» Ãâ·ÂÇÏ¶ó´Â ÀÇ¹Ì 
	printf("%d\n", alpha);     // ¼ıÀÚ ÂïÈû
	printf("%s %s %s\n", str1, str2, str3);     // KOREA, KOREA, KOREA

	return 0;

}
#endif


#if 0
#include <stdio.h>
// ÀÌÂ÷¿ø ¹è¿­   // ar[Çà][¿­]
int main()
{
	int ar[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	printf("sizeof(ar)=%lu\n", sizeof(ar));
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int i, j;
	int ar[3][4] = { { 1,2,3,4 },{5,6,7,8},{9,10,11,12} };    // Çà, ¿­
	printf("sizeof(ar)=%lu\n", sizeof(ar));

	for (i = 0; i < 3; i++)                  // ÀÌÂ÷¿ø ¹è¿­Àº ÀÌÁß if¸¦ ÀÚÁÖ »ç¿ë
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
int main(void)
{
	int i, j, array[3][4];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("Input number : ");
			scanf_s("%d", &array[i][j]);    // ÀÔ·Â
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d\t", array[i][j]);   // Ãâ·Â
		printf("\n");
	}
	printf("\n");
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main(void)
{ 
	int num[3][4];              // 48 bytes
	char month[3][4];           // 12 bytes
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



//        Æ÷ÀÎÅÍ
// ¾î¶² µ¥ÀÌÅÍ°¡ Â÷ÁöÇÏ´Â ±â¾ï Àå¼ÒÀÇ ÁÖ¼Ò¸¦ ÀúÀåÇÏ±â À§ÇÑ º¯¼ö
// ¿ø½ÃÀûÀÎ µ¥ÀÌÅÍ À¯Áö
// ±â°è¾î level ÀÇ ±â´ÉÀ» ¾ğ¾î »ç¾ç¿¡ ¹İ¿µ½ÃÅ² °ÍÀ¸·Î, ¾ğ¾îÀÎ µ¿½Ã¿¡ ±â°è¾î ·¹º§ÀÇ ¼¼¼¼ÇÑ Ã³¸®¸¦ °¡´ÉÇÏ°Ô ÇØÁØ´Ù
// Æ÷ÀÎÅÍ¸í ¾Õ¿¡ *À» ºÙÀÎ´Ù !!  µ¥ÀÌÅÍÇü * Æ÷ÀÎÅÍ¸í À¸·Î Ç¥½Ã¸¦ ÇÑ´Ù
// sizeof(Æ÷ÀÎÅÍ¸í) = 2bytes(ANSI C) 16bit ÁÖ¼Ò¸¦ »ç¿ëÇÒ °æ¿ì // byte¿Í bit ¼ö´Â °è¼Ó ´Ş¶óÁú ¼ö ÀÖÀ½

#if 0
#include <stdio.h>
// Æ÷ÀÎÅÍ
int main()
{
	int *i;
	printf("sizeof(i)=%lu\n", sizeof(i));

	return 0;
}
#endif

// Æ÷ÀÎÅÍ ¿¬»êÀÚ
#if 0
#include <stdio.h>
int main()
{
	int i = 10;         
	int* p = &i;       // & ¹Ù·Î ´ÙÀ½¿¡ º¯¼ö°¡ ¿À¸é ±× º¯¼ö°¡ ÀúÀåµÈ ÁÖ¼Ò¸¦ ³ªÅ¸³½´Ù
	p = &i;            // Áï, ÁÖ¼Ò ¿¬»êÀÚ     
// º¯¼ö °ªÀÌ Á¤ÇØÁö¸é ¸Ş¸ğ¸®ÀÇ Æ¯Á¤ °ø°£ÀÌ ÇÒ´çµÈ´Ù. ±×·¡¼­ ÀÌ °ø°£¿¡´Â Ç×»ó ÁÖ¼Ò°ªÀÌ ÀÖ´Âµ¥ ÀÌ ÁÖ¼Ò´Â Ç×»ó Æ÷ÀÎÅÍ·Î Á¢±ÙÇÑ´Ù.  

	*p = 20;
	printf("%d", i);
// *Àº °ª

	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int i = 10;
	int* p = &i;
	p = &i;

	*p = 20;

	printf("%d", i);

	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int data;
	int* ptr;           // ptrÀÇ ÁÖ¼Ò°ª
	data = 3;   
	ptr = &data;        // º¯¼ö dataÀÇ ÁÖ¼Ò°ª = º¯¼ö ptrÀÇ °ª
	printf("&data = %p\n", &data);
	printf("ptr =   %p\n", ptr);
	printf("&ptr  = %p\n", &ptr);
	printf("data  = %d\n", ptr);
	printf("*ptr  = %d\n", *ptr);   // ptrÀº dataÀÇ ÁÖ¼Ò°ªÀÌ´Ï±î ÁÖ¼Ò°ªÀÇ °ªÀ» ¿¬°áÇØ¼­ ´Ù½Ã ½áÁØ´Ù 

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
	printf("%d, %d, %d\n", num1, num2, *ptr);    // 10, 0, 10 

	num2 = *ptr;
	printf("%d, %d, %d\n", num1, num2, *ptr);    // 10, 10, 10

	ptr = &num2;
	*ptr = 5;
	printf("%d, %d, %d\n", num1, num2, *ptr);    // 10, 5, 5
	  
	return 0;
}
#endif

#if 0
#include <stdio.h>
// null Æ÷ÀÎÅÍ¸¦ ¿ªÂüÁ¶ÇÏ¸é Àß¸øµÈ ¸Ş¸ğ¸® ÇÁ·Î¼¼½º°¡ Á×´Â´Ù.
int main()
{
	int num1 = 0, num2 = 0;
	int* ptr = &num1;

	printf("%d, %d, %d\n", num1, num2, *ptr);    // 0, 0, 0

	num2 = *ptr;
	printf("%d, %d, %d\n", num1, num2, *ptr);    // 0, 0, 0

	ptr = 0;
	printf("%d, %d, %d\n", num1, num2, *ptr);    // ÇÁ·Î¼¼½º Á¾·á

	return 0;
}
#endif


#if 0
#include <stdio.h>
// Æ÷ÀÎÅÍ¿Í ¹è¿­
// ¹è¿­¸íÀº Æ÷ÀÎÅÍÀÌ´Ù

int a[5];
int* pa;
pa = &a[0];   // Áß¿ä

// decay : ¹è¿­ÀÇ ÀÌ¸§Àº ÀÏ¹İÀûÀ¸·Î ¹è¿­ÀÇ Ã¹¹øÂ° ¿ø¼ÒÀÇ ÁÖ¼Ò·Î ÇØ¼®µÈ´Ù.
// ¿¹¿Ü: sizeof

int a[5];
int* pa;
pa = a;      // Áß¿ä

#endif



#if 0
#include <stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* p = a;     // a´Â &a[0] À» ¸»ÇÏ¹Ç·Î Áï, Ã¹¹øÂ° ¿ø¼ÒÀÇ ÁÖ¼Ò·Î º¯È¯µÊ
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* p = a; // °°´Ù
	printf("sizeof(a)     =%lu\n", sizeof(a));    // 20
	printf("sizeof(int[5])=%lu\n", sizeof(int[5]));  // 20
	printf("sizeof(p)     =%lu\n", sizeof(p));    // 4
	printf("sizeof(int*)=%lu\n", sizeof(int*));   // 4


	// sizeof(a);   // ÀüÃ¼ ¹è¿­
	// sizeof(p);   // ÁÖ¼Ò Å©±â     // ´Ù¸£´Ù
	 
	// ÁÖ¼ÒÀÇ °ªÀº °°Àºµ¥, Å¸ÀÔÀÌ ´Ù¸£´Ù´Â ÀÇ¹Ì

	return 0;
}
#endif

// ¸ğµç º¯¼öÀÇ Å¸ÀÔÀº º¯¼ö¸íÀ» Áö¿ì¸é µÈ´Ù
// °ú¿¬ p¿Í a´Â °°Àº Å¸ÀÔÀÎ°¡?   => ´Ù¸¥ Å¸ÀÔÀÌ´Ù. 




// Æ÷ÀÎÅÍ ¿¬»ê
#if 0
int a[5];
int* pa;
pa = a; 

int a[5];
int* pa = a;
pa += 2;

int a[5];
int* pa = a;
pa += 4;


#endif

#if 0
#include <stdio.h>
// char ¹è¿­
int main()
{
	char str[10];
	char* ptr;
	str[0] = 'A';
	str[1] = 'B';
	str[2] = 'C';
	ptr = str;   // ptr = &str[0]
	printf("%c, %c, %c\n", str[0], str[1], str[2]);          // A, B, C
	printf("%c, %c, %c\n", *ptr, *(ptr + 1), *(ptr + 2));    // A, B, C
	printf("%c, %c, %c\n", *str, *(str + 1), *(str + 2));
	printf("%c, %c, %c\n", ptr[0], ptr[1], ptr[2]);
	return 0;
}
#endif

// ÀÏÂ÷¿ø ¹è¿­À» Æ÷ÀÎÅÍ º¯¼ö¿¡ ´ëÀÔÇÒ °æ¿ì Æ÷ÀÎÅÍ¸¦ ¹è¿­Ã³·³ »ç¿ëÇÒ ¼ö ÀÖ´Ù
#if 0
int array[5] = { 1,2,3,4,5 };
int* ptr = array;
#endif

// Æ÷ÀÎÅÍÀÇ ÁøÇà ¹æ¹ı (char, int, longÀÌ °¢°¢ 1,2,4 byteÀÎ °æ¿ì)
// µ¥ÀÌÅÍÇü    Å©±â    Ã³¸®    °á°ú
//  char       1    ++ptr   1¹øÁö ÁøÇàÇÑ´Ù
//  short      2    ++ptr   2¹øÁö ÁøÇàÇÑ´Ù
//   int       4    ++ptr   4¹øÁö ÁøÇàÇÑ´Ù

// p + n => p + sizeof(*p) * n

#if 0

int i;
int* p = &i;
p + n => p + sizeof(*p) * n   // ÀÌ ½Ä ÀÚÃ¼¸¦ ±â¾ïÇÏÀÚ

int i; 
int* p = &i;
p + 1 = > p + sizeof(int) * 1 // 4byte¾¿ ¿òÁ÷ÀÎ´Ù

char i;
char* p = &i
p + 2 => p + sizeof(char) * 2 // 2byte¾¿ ¿òÁ÷ÀÎ´Ù

#endif



// *ptr++ : ¹øÁö¸¦ 1¸¸ ³ªÁß¿¡ ´õÇÑ´Ù
// (*ptr)++ : °ªÀ» 1¸¸ ³ªÁß¿¡ ´õÇÑ´Ù
// *++ptr : ¹øÁö¸¦ 1¸¸ ¸ÕÀú ´õÇÑ´Ù => ÇØ¼® : *(++ptr)
// ++*ptr : °ªÀ» 1¸¸ ¸ÕÀú ´õÇÑ´Ù => ÇØ¼® : ++(*ptr)


// ´ÜÇ× ¿¬»êÀÚ°¡ ½Éº¼ÀÇ ¾ÕµÚ¿¡ ÀÖ´Ù¸é ¹İµå½Ã µÚ¿¡ ÀÖ´Â ¿¬»êÀÚºÎÅÍ ÇØ¼®µÈ´Ù.

#if 0
#include <stdio.h>
int main()
{
	int count[5] = { 100, 200, 300, 400, 500 };
	int* ptr = count;
	printf("%d\n", *ptr++);    // 100
	printf("%d\n", *ptr++);    // 200
	
	return 0;                    
}

#endif

#if 0
#include <stdio.h>
// °ıÈ£°¡ ¾Õ¿¡ ÀÖÀ» °æ¿ì
int main()
{
	int count[5] = { 100, 200, 300, 400, 500 };
	int* ptr = count;
	printf("%d\n", (*ptr)++);    // 100  // 1. *ptr  
	                                     // 2. *ptr = *ptr + 1
	printf("%d\n", *ptr);        // 101
	return 0; 
}

#endif

#if 0
#include <stdio.h>
int main()
{
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int index, * ptr;

	ptr = days;    // 31
	
	for (index = 0; index < 12; ptr++, index++)
		printf("Month %d has %d day\n", index + 1, *ptr);
	// for (index = 0; index < 12; index++)
	// printf("Month %d has %d day\n", index + 1, *(ptr + index));
	// printf("Month %d has %d day\n", index + 1, *(ptr[index]));
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	int menu[5] = { 0, 10, 20, 30, 40 };
	int* ptr, i;
	ptr = &menu[1];                             // 10
	i = *ptr++;  // ¹øÁö¸¦ ´õÇÑ´Ù                 // ÈÄÄ¡´Ï±î ÀÌ Çà¿¡¼­´Â ¾ÆÁ÷ ¾È ´Ã¾î³²
	printf("i = %d, *ptr = %d\n", i, *ptr);     // 10, 20
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	int num, array[] = { 1, 2, 3, 4, 5 };
	num = *array + 3;
	printf("%d, ", num);           // 4
	
	num = *(array + 3) + 5;        // array ´Â ÁÖ¼Ò¿¬»êÀÚ°¡ »ı·«µÈ °ÍÀÌ¶ó°í »ı°¢ÇÑ´Ù
	printf("%d\n", num);           // 9

	return 0;
}
#endif


//++ ¿¬»êÀÚ°¡ *º¸´Ù ¸ÕÀú °è»êÀÌ µÇ¾î¾ßÇÔ


#if 0
#include <stdio.h>
int main()
{
	int data[2] = { 100, 300 };
	int* p1, * p2, * p3;

	p1 = p2 = p3 = data;   // p1 = p2 = p3 = &data[0];

	printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n",
		*p1++, *++p2, (*p3)++);       // 101!!!, 300, 100 
	// cdecl È£Ãâ ±Ô¾à
	// ÇÔ¼öÀÇ ÀÎÀÚ´Â µÚ¿¡¼­ºÎÅÍ ½ºÅÃÀÌ ½×ÀÎ´Ù...!!!
	printf("*p1 = %d, *p2 = %d, *p3 = %d\n",
		*p1, *p2, *p3);               // 300, 300, 101
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
		str[i] = 65 + i;              // 65 = 'A' // ¾Æ½ºÅ°ÄÚµåÀÇ °ªÀ¸·Î Ç¥½ÃµÊ
	ptr = str + 19;                  
	for (i = 0; i < 20; i++)
		printf("%c, %c\n", str[i], *(ptr - i));
	return 0;
}
#endif

#if 0
#include <stdio.h>
// ¹®ÀÚ¿­ÀÇ ±æÀÌ¸¦ Àç´Â ÄÚµå
int main()
{
	char city[] = "Korea Seoul";
	int i = 0;
	// while (*(city + i) != '\0')   // \0Àº null°ªÀÓ ¹®ÀÚ¿­ÀÇ ³¡¿¡´Â ÀÚµ¿À¸·Î null ¹®ÀÚ°¡ ºÙ´Â´Ù
	while (city[i] != '\0')
			i++;
	printf("%d\n", i);
	return 0;
}
#endif


#if 0
#include <stdio.h>
// Æ÷ÀÎÅÍ¿Í ´ÙÂ÷¿ø ¹è¿­
int main()
{
	int a[3][4];
	int (*pa)[4] = a;   // ÀÌÂ÷¿ø ¹è¿­ÀÇ ÇüÅÂ
	
	int* p = &a[0][0];
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	int a[3];
	int count = sizeof(a) / sizeof(a[0]);
	// ¹è¿­ ÀüÃ¼ÀÇ »çÀÌÁî ³ª´©±â ÇÏ³ªÀÇ ¿ø¼Ò »çÀÌÁî
	printf("%d\n", count);

	return 0;
}
#endif



// 2Â÷¿ø ¹è¿­Àº int*ÀÌ ¾Æ´Ï¶ó int(*)[¿­ÀÇ °³¼ö]  Å¸ÀÔÀ¸·Î decayµÈ´Ù

// int a[3][4] ´Â 12°³Â¥¸®ÀÇ ¹è¿­ÀÌ´Ù?=>xxxxxx
// a = [ (int[4]), (int[4]), (int[4]) ] 
//         ÇÑ Çà      ÇÑ Çà     ÇÑ Çà
// Áï, int 4°³Â¥¸® ¹è¿­ÀÌ 3°³ ¶ó´Â ¶æÀÌ´Ù
// ±×·¡¼­ ÇÙ½É Æ÷ÀÎÆ®´Â
// ¹è¿­ ÀÌ¸§ a°¡ decayµÇ¸é &a[0] ÀÎµ¥ a[0]ÀÇ Å¸ÀÔÀº int[4] ÀÌ´Ù
// ±×·¡¼­ aÀÇ decay Å¸ÀÔÀº int(*)[4] ÀÌ°í,
// ÀÌ ÀÇ¹Ì´Â int 4°³Â¥¸® ¹è¿­À» °¡¸®Å°´Â Æ÷ÀÎÅÍ   ÀÌ´Ù



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
	int array[2][2] = { 1,2,3,4 };
	int (*ptr)[2] = array;    // int 2°³ Á¡ÇÁ (8byte ¾¿ ÀÌµ¿)  // [¼ıÀÚ] * 2·Î ¿Ü¿ì±â
	int i, j;

	ptr[0][0] = 10;    // ptr ·Î ¹Ù²åÁö¸¸ ½ÇÁ¦·Îarray °ªÀÌ ¹Ù²ï´Ù
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
// Æ÷ÀÎÅÍ¸¦ ÀÌ¿ëÇÑ ¹®ÀÚ¿­ÀÇ Ã³¸®´Â ¹®ÀÚ¿­ÀÇ ½ÃÀÛ ÁÖ¼Ò¸¸ ÀúÀåÇÑ´Ù
// charÇü ¹è¿­¿¡ ÀÇÇÑ ¹®ÀÚ¿­ÀÇ Ã³¸®´Â ¹®ÀÚ¿­ Á¤¼ö ÀÚÃ¼¸¦ ÀúÀåÇÑ´Ù
int main()
{
	// char a[] = "now is the time";
	char* p = "now is the time";
	// printf("sizeif(p)=%lu\n", sizeof(p));
	
	// printf("sizeif(a)=%lu\n", sizeof(a));
	
	// p[0]--;
	p = "world";           // Æ÷ÀÎÅÍÀÇ °æ¿ì¿¡¼­´Â °¡´ÉÇÏ´Ù
	printf("[%s}\n", p);   // ½ºÅÃ¿¡¼­ copyÇØ ¿Â ¹è¿­Àº ±× ¾ÈÀÇ °ªÀ» ¹Ù²Ü ¼ö ÀÖÀ½
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	char a[] = "now is the time";

	a = "world";    // ¹®ÀÚ¿­À» ´Ù¸¥ ¹®ÀÚ¿­·Î ¹Ù²Ù´Â °ÍÀº ºÒ°¡´ÉÇÏ´Ù

	printf("[%s]\n", a);
	return 0;
}
#endif

#if 0
#include <stdio.h>
// Æ÷ÀÎÅÍ ¹è¿­
int main()
{
	char* n_city[4] = { "korea", "seoul", "japan", "tokyo" };

	// n_city[0] : ¹®ÀÚ¿­ "korea"°¡ ÁöÁ¤µÈ Àå¼ÒÀÇ ½ÃÀÛ ÁÖ¼Ò¸¦ °¡¸®Å²´Ù
	// n_city[1] : ¹®ÀÚ¿­ "seoul"°¡ ÁöÁ¤µÈ Àå¼ÒÀÇ ½ÃÀÛ ÁÖ¼Ò¸¦ °¡¸®Å²´Ù
	// n_city[2] : ¹®ÀÚ¿­ "japan"°¡ ÁöÁ¤µÈ Àå¼ÒÀÇ ½ÃÀÛ ÁÖ¼Ò¸¦ °¡¸®Å²´Ù
	// n_city[3] : ¹®ÀÚ¿­ "tokyo"°¡ ÁöÁ¤µÈ Àå¼ÒÀÇ ½ÃÀÛ ÁÖ¼Ò¸¦ °¡¸®Å²´Ù
}   
#endif



#if 0
#include <stdio.h>
int main()
{
	int i;
	char* week[] = { "Sunday", "Monday", "Tuesday",
		"Wendnesday", "Thursday", "Friday", "Saturday" };
	for (i = 0; i < sizeof(week) / sizeof(week[0]); i++)   // 28 ³ª´©±â 7=> ¿ø¼ÒÀÇ °³¼ö
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
	char* fruit[] = { "apple", "grape", "banana", "orange" };
	printf("%s\n", fruit[1]);
	return 0;
}
#endif

#if 0
#include <stdio.h>
//int main()
// {
	//int (*p)[2];

	//sizeof(p) => 4
    // p + 1 => p + sizeof(*p)*1 => 8

	//int* p[2];
	//sizeof(p) => 8    // Áß¿ä
	// p + 1 => p + sizeof(*p)*1 => 4
	
	//return 0;
//}
#endif



#if 0
#include <stdio.h>
// ´ÙÁß Æ÷ÀÎÅÍ
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
	// char¿©µµ ÀÌÁß Æ÷ÀÎÅÍ¸é ¹«Á¶°Ç 4byte¾¿ ¿òÁ÷ÀÎ´Ù
	
	return 0;
}
#endif








// ÇÔ¼ö
// ÇÔ¼ö´Â ÀÎ¼ö¸¦ Àü´Ş ¹Ş¾Æ ÀÏ·ÃÀÇ ÀÛ¾÷À» ¼öÇàÇÑ ÈÄ »ı¼ºµÈ °á°ú¸¦ Àü´ŞÇÏ´Â ÇÁ·Î±×·¥
#if 0
#include <stdio.h>

void foo(void)
{
	
}

int main(void)
{
	printf("");
	scanf_s("");  // Ç¥ÁØ ÇÔ¼ö
	foo();        // ÇÔ¼öÀÇ µ¢¾î¸®¸¦ »©¼­ ¿ÜºÎ·Î Àü´Ş
	return 0;
}


#endif


#if 0
#include <stdio.h>

void foo(int a)    // °¡ÀÎ¼ö
{
	
	return 10;     // ÇÔ¼öÀÇ Çü   
}
int main()
{
	foo(10)       // ½ÇÀÎ¼ö
	return 0;
}
#endif


#if 0
#include <stdio.h>
int foo(int a);            // ¼±¾ğÀ» ÇÒ ¶§¿¡´Â ¼¼¹ÌÄİ·Ğ ºÙÀÎ´Ù  // int¸¦ »ı·«ÇÒ ¼ö ÀÖÀ½
int main()
{
	foo(10);       // ½ÇÀÎ¼ö
	return 0;
}

int foo(int a)    // °¡ÀÎ¼ö  // ±¸ÇöÀ» ÇÒ ¶§¿¡´Â ¼¼¹ÌÄİ·Ğ(;) ºÙÀÌÁö ¾Ê´Â´Ù
{
	return 10;    // ÇÔ¼öÀÇ Çü   
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
	printf("goodbye\n");
	print_star();

	return 0;
}
void print_star(void)
{
	printf("**********\n");
}
#endif



#if 0
#include <stdio.h>
void print_star(void);         // ½ÇÀÎ¼ö
int main()
{
	print_star();
	printf("hello\n");
	print_star();
	printf("hi\n");
	print_star();
	printf("goodbye\n");
	print_star();

	return 0;
}
void print_star(void)            // °¡ÀÎ¼ö
{
	int i;
	for (i = 0; i < num; i++)
		printf("*");
	printf("\n");
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
	printf("goodbye\n");
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
int main(void)
{
	int a, b, sum;
	scanf_s("%d %d", &a, &b);
	sum = add(a, b);
	printf("%d + %d = %d\n", a, b, sum);
	return 0;
}
int add(int a, int b)           // add ÇÔ¼ö
{
	int sum;
	sum = a + b;
	return sum;
}
#endif




// ÇÔ¼öÀÇ ¸Å°³º¯¼ö Àü´Ş
// call by value : °ª¿¡ ÀÇÇØ Àü´ŞÇÏ´Â È£Ãâ ¹æ½Ä
// call by address : º¯¼öÀÇ ¸Ş¸ğ¸® ÁÖ¼Ò¸¦ Àü´ŞÇÏ´Â È£Ãâ ¹æ½Ä => Æ÷ÀÎÅÍ Àü´Ş


#if 0
#include <stdio.h>
#include <stdio.h>

// call by value

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

// call by address

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
// call by value
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

void swap(int a, int b);

int main()
{
	int x = 20, y = 50;
	printf("[1] : %d, %d\n", x, y);
	swap(&x, &y);
	printf("[4] : %d, %d\n", x, y);
	return 0;
}

void swap(int* a, int* b )
{
	int temp;
	printf("[2] : %d, %d\n", a, b);
	temp = *a;
	*a = *b;
	*b = temp;
	printf("[3] : %d, %d\n", a, b);

}
#endif

#if 0
#include <stdio.h>
/* ¹İÁö¸§À» ÀÔ·ÂÇØ ¿øÀÇ ³ĞÀÌ¸¦ ±¸ÇÑ´Ù */

float circle_area(int r);

int main()
{
	int radius;
	float area;
	printf("Input radius : ");
	scanf_s("%d", &radius);
	area = circle_area(radius);      //  ÇÔ¼ö È£Ãâ
	printf("area = % .2f\n", area);
	return 0;
}

float circle_area(int r)       /* ¿øÀÇ ³ĞÀÌ */
{
	return 3.14f * r * r;
}
#endif



#if 0
#include <stdio.h>
void input(int* ar);
/* ÇÔ¼öÀÇ ÀÏÂ÷¿ø ¹è¿­ Àü´ŞÇÏ±â */
int main(void)
{
	int i, array[5];
	input(array);
	for (i = 0; i < 5; i++)
		printf("%3d\n", array[i]);
	return 0;
}

void input(int* ar)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("[%d's] Number >> ", i + 1);
		scanf_s("%d", &ar[i]);
	}
}
#endif



#if 0
#include <stdio.h>
void input(int* ar);
void output(int* ar);

/* ÇÔ¼öÀÇ ÀÏÂ÷¿ø ¹è¿­ Àü´ŞÇÏ±â */ // output ÀÌ¿ë
int main(void)
{
	int array[5];
	input(array);
	output(array);
	for (i = 0; i < 5; i++)
		printf("%3d\n", array[i]);
	return 0;
}

void input(int* ar)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("[%d's] Number >> ", i + 1);
		scanf_s("%d", &ar[i]);
	}
}

void output(int* ar)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("[%d's] Number >> ", i + 1);
		scanf_s("%d", &ar[i]);
	}
}
#endif



#if 0
#include <stdio.h>

/* ÇÔ¼öÀÇ ÀÎÀÚ·Î ÀÌÂ÷¿ø ¹è¿­ ³Ñ°ÜÁÖ±â */

void func1(int(*a)[2]);

int main(void)
{
	int array[2][2] = { {1,2}, {3,4} };
	func1(array);
	return 0;
}

void func1(int(*a)[2])    // ÀÌÂ÷¿ø ¹è¿­À» ÇÔ¼ö·Î ³Ñ±æ ¶§ »ç¿ë 
{
	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
			printf("a[%d][%d]=%3d\n", i, j, a[i][j]);
	}
}
#endif



// Àç±ÍÇÔ¼ö recursion call
// µ¿ÀÏÇÑ ÀÛ¾÷À» ´Ü¼øÇÏ°Ô Ã³¸®ÇÏ±â À§ÇØ¼­ ÇÔ¼ö ³»¿¡¼­ ÀÚ½ÅÀÇ ÇÔ¼ö¸¦ È£ÃâÇÏ´Â ¹æ¹ı

#if 0
#include <stdio.h>
// ºñÀç±Í·Î ±¸ÇöÇÑ factorial
int main(void)
{
	int i, fact = 1;
	for (i = 0; i < 5; i++)
		fact *= i + 1;
	printf("5! = %d\n", fact);
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
// Àç±ÍÇÔ¼ö·Î ±¸ÇöÇÑ factorial
int factorial(int f)
{
	if (f == 1) 
		return 1;                          // Á¾·á Á¶°Ç
	else
		return (f * factorial(f - 1));     // ÆÑÅä¸®¾ó °è»ê
}
#endif




// º¯¼öÀÇ ±â¾ï·ù (storage class)
// Áö¿ª º¯¼ö // Àü¿ª º¯¼ö

#if 0
#include <stdio.h>

int main()
{
	int a = 10, b = 20;
	printf("¹Ù²Ù±â Àü a: %d, b: %d\n", a, b);
	{
		int a = 10, b = 20;    // brace ¾È¿¡¼­ ¹Ù²î¾îµµ brace ¿ÜºÎ¿¡¼­´Â ¾È ¹Ù²ï´Ù
		int temp;    
		temp = a;
		a = b;
		b = temp;
	}
	printf("¹Ù²Û ÈÄ a: %d, b: %d\n", a, b);
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int i;
	i = 5;
	{
		int i;
		i = 3;
		printf("i=%d\n", i);  // 3
	}
	printf("i = % d\n", i);   // 5
	return 0;
}
#endif


#if 0
#include <stdio.h>
void func(int a);
int a, b;     // Àü¿ª º¯¼ö ¼±¾ğ

int main()
{
	a = 5;
	func(a);
	printf("a = %d, b = %d\n", a, b);    // 5, 2
	return 0;
}

void func(int a)   // a´Â Áö¿ªº¯¼ö!!!!
{
	b = 2;
	a += 2;    // a´Â Áö¿ªº¯¼ö¸¦ ¹Ù²Û °ÍÀÌÁö, Àü¿ª º¯¼ö¸¦ ¹Ù²Û °ÍÀº ¾Æ´Ô
}
#endif




// ±â¾ï ¿µ¿ª¿¡ ´ëÇÑ ºĞ·ù
// ¸Ş¸ğ¸®¸¦ ³ª´©´Â ±âÁØ
// ÅØ½ºÆ® ¿µ¿ª : ½ÇÇàÇÒ ÇÁ·Î±×·¥ ÄÚµå ¹× »ó¼ö¸¦ ¿Ã·Á ³õÀ» °ø°£
// µ¥ÀÌÅÍ ¿µ¿ª : ÇÁ·Î±×·¥ Á¾·á ½Ã±îÁö À¯ÁöÇÒ µ¥ÀÌÅÍ °ø°£
// ½ºÅÃ ¿µ¿ª : Àá½Ã »ç¿ëÇÏ°í ¹ö¸± µ¥ÀÌÅÍ ÀúÀå °ø°£; Áö¿ª º¯¼ö
// Èü ¿µ¿ª : ¾ğÁ¦µç ÇÒ´çÇÏ°í »ç¿ë ÈÄ ÇØÁ¦ÇÒ ¼ö ÀÖ´Â µ¥ÀÌÅÍ ÀúÀå °ø°£;
        // => malloc() ÇÔ¼ö·Î ÇÒ´ç & free() ÇÔ¼ö·Î ÇØÁ¦




#if 1
#include <stdio.h>
// Á¤Àû º¯¼ö static variable : ÇÔ¼ö°¡ ¸®ÅÏµÈ ÈÄ¿¡µµ ±â¾ï °ø°£ÀÌ Á¸ÀçÇÔ
void PrintCount();
int main()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		PrintCount();
	}
	return 0;
}

void PrintCount()
{
	static int count = 0;          // °ªÀ» °è¼Ó À¯ÁöÇÏ°í ½Í´Ù¸é static »ç¿ë
	count++;
	printf("%d¹øÂ° È£Ãâ\n", count);
}
#endif



// ºĞÇÒ ÄÄÆÄÀÏ : ÇÏ³ªÀÇ ÇÁ·Î±×·¥Àº ±â´É¿¡ µû¶ó ¸¹Àº ÇÔ¼öµéÀ» Æ÷ÇÔ


