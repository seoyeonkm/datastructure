
#if 0
#include <stdio.h>
// 응용실습 2-3
int main()
{
	int a=20, b=50;
	int x = 0xabcd;
	printf("%d\n", a / 2 + b / 2);
	
	a = 710;
	printf("%d\n", a >> 4);

	printf("%d\n", !x);

	x = 0xff00;
	printf("%x\n", ~x); // ffff00ff

	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 2-2
int main()
{
	int a,b,c,d;
	int temp = -999;
	
	printf("정수입력:");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	temp = (temp < a) ? a : temp;
	temp = (temp < b) ? b : temp;
	temp = (temp < c) ? c : temp;
	temp = (temp < d) ? d : temp;
	printf("temp = %d\n", temp);

	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 2-1
int main()
{
	int r;
	double sum;
	printf("반지름 입력:");
	scanf_s("%d", &r);
	sum = r * r * 3.14;
	printf("sum = %.2lf\n", sum);

	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 1-4
int main()
{
	int a = 10, b = 0;
	b = (a < 3) ? 5 : 8;
	printf("%d, %d\n", a, b);
	a = (b = 10, b++);
	printf("%d, %d\n", a, b);

	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 1-3
int main()
{
	int a, b;
	a = (7 % 5);
	b = (a = a + 5) + 6;
	printf("%d, %d\n", a, b);
	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 1-2
int main()
{
	int second;
	
	scanf_s("%d", &second);

	printf("%d분 %d초\n", second/60, second%60 );

	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용실습 1-1
int main()
{
	float f1, f2;
	float aver;
	scanf_s("%f %f", &f1, &f2);
	aver = (f1 + f2) / 2;
	printf("f1=%f, f2=%f, aver=%f\n", f1, f2, aver);

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a, b;
	a = b = 0, b + 2;   // b = 0, a = b + 2;
	printf("a = %d, b = %d\n", a, b); // 0, 0
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a, b;
	a = (b = 0, b + 2);// b = 0, a = b + 2;
	printf("a = %d, b = %d\n", a, b); // 2, 0

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	printf("%c\n", (char)(65 + 32));          // 'a'
	printf("%d\n", (int)((int)3.14 + (float)3 + 1));  // 7

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a = 5, b = 2;
	double f;
	printf("%.2f\n", f = a / b);
	printf("%.2f\n", (double)f = a / b);
	printf("%.2f\n", f = (double)a / b);
	printf("%.2f\n", f = (double)(a / b));

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a;
	long b = 100;
	//a = sizeof(++b);                      // ++b는 수행되지 못한다.
	a = sizeof(b = 20);
	printf("a = %d, b = %ld\n", a, b);    // 출력은 a = 4, b = 100
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a = 3, b = 5;
	printf("char         : %d byte\n", sizeof char );
	printf("int          : %d byte\n", sizeof(int));
	printf("float        : %d byte\n", sizeof(float));
	printf("double       : %d byte\n", sizeof(double));
	printf("sizeof a     : %d byte\n", sizeof a );
	printf("sizeof a + b : %d byte\n", sizeof(a + b));

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i = 1, j = 2, k = 3;
	printf("%d\n", i == j ? i : j);  // 2
	printf("%d\n", k % 3 == 0 ? (i = 5) : (i = 10)); // 5
	printf("%d\n", i = k % 3 == 0 ? 5 : 10); // 5

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int x = 1, y = 2, z = 3;
	printf("%d\n", x > y ? x : y);     // 2
	printf("%d\n", x < y ? x++ : y++); // 1
	z += x + y ? x++ : y++;
	printf("%d, %d, %d\n", x, y, z);   // 3,2,5

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = -8;
	printf("%d\n", a >> 1);  // -4

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 03, b = 02, c = 01;
	a = 1, b = -1;
	printf("%d\n", a << 3);  // 8
	printf("%d\n", b << 3);  // -8

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 03, b = 02, c = 01;
	printf("%d\n", a | b & c);
	printf("%d\n", a | b & ~c);
	printf("%d\n", a ^ b & ~c);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 30;
	printf("a >> 1 = %d\n", a >> 1);   // 15
	printf("a >> 2 = %d\n", a >> 2);   // 7
	printf("a >> 3 = %d\n", a >> 3);   // 3
	printf("a >> 4 = %d\n", a >> 4);   // 1

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a = 5, b = 3, c = 7, d = 6;
	printf("%d\n", a & b);  // 1
	printf("%d\n", c ^ d);  // 1
	printf("%d\n", a | d);  // 7

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 30;
	printf("a << 1 = %d\n", a << 1);  // 60
	printf("a << 2 = %d\n", a << 2);  // 120
	printf("a << 3 = %d\n", a << 3);  // 240
	printf("a << 4 = %d\n", a << 4);  // 480
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 0x5555, b = 0x00ff;
	printf("  a = %x,   b = %x\n", a, b);  // 5555, ff
	printf("a ^ b = %x\n", a ^ b); // 55aa

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 0x5555, b = 0x00ff;
	printf("  a = %x,   b = %x\n", a, b);  // 5555, ff
	printf("a | b = %x\n", a | b); // 55ff

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 0x5555, b = 0x00ff;
	printf("  a = %x,   b = %x\n", a, b);  // 5555, ff
	printf("a & b = %x\n", a & b);         // 55
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a = 0x5555, b = 0x00ff;
	printf("  a = %x,   b = %x\n", a, b);  // 5555, ff
	printf("~a = %x, ~b = %x\n", ~a, ~b);  // aaaa, ff00

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 3, b = 2, c = 1;
	printf("%d\n", -(--a));     // -2
	printf("%d\n", b - (--c));  // 2
	printf("%d\n", a++ - b);    // 0
	printf("%d\n", a++ / ++b * --c);  // -1
	printf("%d\n", ++c / b++ * --a);  // 0

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 10, b = 2;
	a += b++;
	printf("a = %d, b = %d\n", a, b);  // 12, 3
	{
		int a = 2;
		a += b;    b -= a;
		printf("a = %d, b = %d\n", a, b); // 5, -2
		{
			int b = 5;
			b *= a + 1;   ++a;
			printf("a = %d, b = %d\n", a, b); // 6,30
		}
		printf("a = %d, b = %d\n", a, b); // 6, -2
	}
	printf("a = %d, b = %d\n", a, b); // 12, -2

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a = 10;
	int b;
	b = a + ++a;
	printf("a=%d, b=%d\n", a, b);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 30, b = 30;

	printf("%d, %d\n", a, b);  // 30, 30
	printf("%d\n", ++a);       // 31 
	printf("%d, %d\n", a, b);  // 31, 30
	printf("%d\n", a++);       // 31
	printf("%d, %d\n", a, b);  // 32, 30
	printf("%d\n", ++a + ++b); // 64
	printf("%d, %d\n", a, b);  // 33, 31
	printf("%d\n", b++ + b++); // 62
	printf("%d, %d\n", a, b);  // 33, 33
	return 0;
}
#endif
#if 0
#include <stdio.h>

int main()
{
	int a, b = 10;
	printf("%d\n", a = ++b);

	b = 10;
	printf("%d\n", a = b++);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i, j, k;
	i = j = k = 3;
	printf("%d\n", k %= i = 1 + k / 2);       //  1
	printf("%d\n", i += j += k);              //  6
	printf("%d\n", k = (i / 2) + (j / 2));    //  5

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a = 1, b = 2, c = 3, d = 4;
	a /= 3 + 1;		// a = a / (3+1);
	b += a;       	// b = b + a;
	c %= a + 1;		// c = c % (a + 1);
	d -= a * 2;		// d = d - (a * 2);
	printf("a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int x = 1, y = 2;
	printf("%d\n", x || ++y);
	printf("%d\n", y);

	printf("%d\n", x != 1 && ++y);
	printf("%d\n", y);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int x = 1, y = 2, z = 4;
	printf("%d\n", x || y && z);
	printf("%d\n", x > y || z == y && x < z);
	printf("%d\n", x != y && y + 1 == !z + 4);
	printf("%d\n", y - 1 == 3 || y + 1 == 3);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char b = 'q';
	int i = 3, j = 4, k = 5;
	printf("!i : %d, !b : %d\n", !i, !b);                       // 0, 0
	printf("k>=3 && k<=7 : %d\n", k >= 3 && k <= 7);            // 1
	printf("i == 2 && j == 4 : %d\n", i == 2 && j == 4);        // 0
	printf("b == 'q' || b == 'Q' : %d\n", b == 'q' || b == 'Q'); // 1

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i = 30;
	printf("%d\n", 0 < i < 20);

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int i = 10;
	printf("%d\n", 0 < i < 20);

	return 0;
}

#endif


#if 0
#include <stdio.h>

int main()
{
	int i = 1, j = 2, k = -7;
	printf("%d\n", 'a' + 1 < j);
	printf("%d\n", -i - 5 * j >= k + 1);
	printf("%d\n", i + j + k == -2 * j);

	return 0;
}

#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 15, b = 23;
	printf("%d < %d      : %d\n", a, b, a < b);
	printf("%d > %d      : %d\n", a, b, a > b);
	printf("%d == %d     : %d\n", a, b, a == b);
	printf("%d != %d     : %d\n", a, b, a != b);
	printf("%d + 8 >= %d : %d\n", a, b, a + 8 >= b);
	return 0;
}

#endif


#if 0
#include <stdio.h>

int main()
{
	printf("%d\n", -4 + 6 * 5 + 3);
	printf("%d\n", 3 - 7 % 8 + 5);
	printf("%d\n", -5 * 3 % -2 / 4);
	printf("%d\n", (8 + 7) % 6 / 2);

	return 0;
}

#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 10, b = 3;     // 변수선언
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
	return 0;
}

#endif

#if 0
#include <stdio.h>

int main()
{
	int num1, num2;
	num1 = num2 = 10;
	printf("%d %d\n", num1, num2);
	return 0;
}

#endif


#if 0
#include <stdio.h>

int main()
{
	int num;
	num = 1 + 2 - 3 + 5;
	printf("%d\n", num);
	return 0;
}

#endif


#if 0
#include <stdio.h>

int main()
{
	int num;
	//num = 1 << (3 + 2);
	num = (1 << 3) + 2;
	printf("%d\n", num);
	return 0;
}

#endif

#if 0

#include <stdio.h>

int main()
{
	int num;
	num = 3 + 2 * 7;
	printf("%d\n", num);
	return 0;
}

#endif