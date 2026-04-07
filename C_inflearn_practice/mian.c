#if 0
#include <stdio.h>
// 제어문의 종류 및 특징
int main()
{
	;      // NOP
	if (condition)
		statement;    // 단문

	if (condition)
	{
		statement1;
		statement2;   // 복문
	}
	
	return 0;
}
#endif



#if 0
#include <stdio.h>
// 응용 실습 2-1
int main()
{
	int r;
	int sum;
	printf("반지름 입력: ");
	scanf_s("%d", &r);
	sum = r * r * 3.14;
	printf("sum = %d\n", sum);     // print 식을 한번 더 적음
	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용 실습 2-1 => 내가 코딩한 거
int main()
{
	int r, i;
	scanf_s("%d", &r);
	i = r * r * 3.14;
	printf("i = %d * %d * 3.14", i, r, r); // 이미 계산한 결과로 나와야 정상임   // %d는 두 개인데 변수가 세 개로 나와있음
	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용 실습 1-4
int main()
{
	int a = 10, b = 0;
	b = (a < 3) ? 5 : 8;       //  8
	printf("%d, %d\n", a, b);  // 10, 8

	a = (b = 10, b++);         // 당연히 앞에꺼부터 수행한다
	printf("%d, %d\n", a, b);  // 10, 11

	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용 실습 1-3
int main()
{
	int a, b;
	a = (7 % 5);   // a = 2
	b = (a = a + 5) + 6;  // a = 7 ,b = 13    // 변수가 바뀔 때에는 무조건 스택을 그려본다
	printf("%d, %d\n", a, b);  // 7, 13
	return 0;
}
#endif


#if 0
#include <stdio.h>
// 응용 실습 1-2
int main()
{
	int second;

	scanf_s("%d", &second);
	printf("%d분 %d초\n", second/60, second%60);

	return 0;
}
#endif

#if 0
#include <stdio.h>
// 응용 실습 1-1
int main()
{
	float f1, f2;
	float aver;
	scanf_s("%f", &f1, &f2);
	aver = (f1 + f2) / 2;
	printf("f1 = %f, f2 = %f, aver = %f\n", f1, f2, aver);

	return 0;
}
#endif


#if 0
#include <stdio.h>
// 콤마 연산자: 열거된 순서대로 수행되고, 여러 번의 처리를 하나의 식에서 행하면 효과가 있을 때 사용한다
// 콤마 연산자는 가장 순위가 낮다
int main()
{
	int a, b;
	a = (b = 0, b + 2);                   // b = 0, a = b + 2
	printf("a = %d, b = %d\n", a, b);     // 2, 0
	return 0;
}
#endif


#if 0
#include <stdio.h>
// typecast
int main()
{
	printf("%c\n", (char)(65 + 32));                 // 'a'
	printf("%d\n", (int)((int)3.14 + (float)3 + 1));   // 7
	return 0;
}

#endif


#if 0
#include <stdio.h>
// double은 소수까지 저장한다
int main()
{
	int a = 5, b = 2;
	double f;
	printf("%.2f\n", f = a / b);            // 2.00
	printf("%.2f\n", (double)f = a / b);    // 2.00
	printf("%.2f\n", f = (double)a / b);    // 2.50    // 5.0/2 => 더블의 타입이면 더블로 바뀐다
	printf("%.2f\n", f = (double)(a / b));  // 2.00    // 2.00으로 먼저 괄호로 캐스팅되면 그냥 2.00임 
}
#endif



#if 0
#include <stdio.h>
// 기타 (sizeof, typecast, 콤마) 연산자
// sizeof 연산자는 type과 변수의 크기를 알 수 있다. type을 잴 때에는 반드시 괄호가 있어야 하고, 변수를 잴 때에는 괄호가 있어도 되고 없어도 된다 
int main()
{
	int a;
	long b = 100;
	a = sizeof(++b);                         // ++b는 수행되지 못한다
	printf("a = %d, b = %ld\n", a, b);       // 출력은 a = 4, b = 100
	return 0;
}
#endif

#if 0
#include <stdio.h>
// false면 뒤에꺼를, true면 앞에꺼가 답이다.
int main()
{
	int i = 1, j = 2, k = 3;
	printf("%d\n", i == j ? i : j);    // 2
	printf("%d\n", k % 3 == 0 ? (i = 5) : (i = 10)); // 5
	printf("%d\n", i = k % 3 == 0 ? 5 : 10);  // 5
	return 0;

}
#endif




#if 0
#include <stdio.h>
// 조건 연산자 // 대입연산자가 순서가 거의 제일 낮음
int main()
{
	int x = 1, y = 2, z = 3;
	printf("%d\n", x > y ? x : y);      // 2     // false면 y가 선택됨
	printf("%d\n", x < y ? x++ : y++);  // 1 후치니까!!  // true면 x가 선택됨
	z += x + y ? x++ : y++;             // 5
	printf("%d, %d, %d\n", x, y, z);    // 3, 2, 5
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int a = -8;
	printf("%d\n", a >> 1);      // -4  
	return 0;
}
#endif
// 부호 있는 정수인 경우 << 연산은 오른쪽 비트에 0이 채워지고, >> 연산은 왼쪽 비트에 sign bit가 채워진다
// 부호 없는 정수인 경우 << 연산은 오른쪽 비트에 0이 채워지고, >> 연산은 왼쪽 비트에 0이 채워진다

#if 0
#include <stdio.h>
int main()
{
	int a = 03, b = 02, c = 01;
	a = 1, b = -1;                    // a,b 값이 이 값들로 초기화됨
	printf("%d\n", a << 3);           // 8
	printf("%d\n", b << 3);           // -8   // 음수값 주의!! 1의 보수와 2의 보수값을 통해 구해야함
	return 0;
} 
#endif


#if 0
#include <stdio.h>
int main()
{
	int a = 03, b = 02, c = 01;         // 011, 010, 001로 표현된다
	printf("%d\n", a | b & c);          // 3
	printf("%d\n", a | b & ~c);         // 3  
	printf("%d\n", a ^ b & ~c);         // 1
	return 0;
}
#endif



#if 0
#include <stdio.h>
int main()
{
	int a = 30;
	printf("a >> 1 = %d\n", a >> 1);    // 15    // 왼쪽으로 한 비트씩 밀어버리는 것
	printf("a >> 2 = %d\n", a >> 2);    // 7   // 곱하기 2를 하는 효과
	printf("a >> 3 = %d\n", a >> 3);    // 3
	printf("a >> 4 = %d\n", a >> 4);    // 1
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	int a = 30;
	printf("a << 1 = %d\n", a << 1);    // 60   // 왼쪽으로 한 비트씩 밀어버리는 것
	printf("a << 2 = %d\n", a << 2);    // 120   // 곱하기 2를 하는 효과
	printf("a << 3 = %d\n", a << 3);    // 240
	printf("a << 4 = %d\n", a << 4);    // 480
	return 0; 
}
#endif

#if 0
#include <stdio.h>
int main()
{
	int a = 0x5555, b = 0x00ff;
	printf("a = %x, b = %x\n", a, b);   // 5555, ff
	printf("a | b = %x\n", a | b);      // 55ff     // |는 1이 있을 때에는 무조건 1이 된다 
	printf("a ^ b = %x\n", a ^ b);      // 55aa     // ^는 서로 같을 때에는 0, 서로 다를 때에는 1.
	return 0;
}
#endif


#if 0
#include <stdio.h>
// 0x 가 붙으면 무조건 16진수이다
int main()
{
	int a = 0x5555, b = 0x00ff;
	printf("a = %x, b = %x\n", a, b);        // 5555,ff
	printf("~a = %x, ~b = %x\n", ~a, ~b);    // ffffaaaa, ffffff00   //~는 비트 낫이다. 각각의 비트 내에서 not을 취한다.
	printf("a = %x, b = %x\n", a, b);       // 5555, ff              //&는 어느한 쪽이 0이면 0이 된다. 
	printf("a & b = %x\n", a & b);           // 55
	return 0;

}
#endif



#if 0
#include <stdio.h>
int main()
{
	int a = 3, b = 2, c = 1;
	printf("%d\n", - (--a));            // -2
	printf("%d\n", b - (--c));         // 2
	printf("%d\n", a++ - b);           // 0  => 후치니까 나중에 계산. 그래서 그 전의 a와 b로 계산한다. 
	printf("%d\n", a++ / ++b * --c);   // 3 / 3 * (-1) => -1
	printf("%d\n", ++c / b++ * --a);   // 0 / 3 * 3 => 0
	return 0;
}
#endif




#if 0
#include <stdio.h>
int main()
{
	int a = 10, b = 2;
	a += b++;
	printf("a = %d, b = %d\n", a, b);      // 12, 3
	{
		int a = 2;
		a += b;     b -= a;
		printf("a = %d, b = %d\n", a, b);  // 5, -2   unnamed brace에서는 변수가 새롭게 선언된다
		{
			int b = 5;
			b *= a + 1;     ++a;           // 복합 대입 연산자는 오른쪽에 있는 계산부터 실행해야한다
			printf("a = %d, b = %d\n", a, b);      // 6, 30
		}
		printf("a = %d, b = %d\n", a, b);          // 6, -2
	}
	printf("a = %d, b = %d\n", a, b);              // 12, -2
	return 0;
}

#endif

#if 0
#include <stdio.h>
int main()
{
	int a = 10;
	int b;
	b = a + ++a;          // 한 행에서 한 변수가 두 번 이상 쓰일 때에는 어느 쪽에도 ++을 붙이면 안된다.
	printf("a=%d, b=%d\n", a, b);

	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	int a = 30, b = 30;
	printf("%d, %d\n", a, b);     // 30, 30
	printf("%d\n", ++a);          // 31
	printf("%d, % d\n", a, b);    // 31, 30
	printf("%d\n", a++);          // 31
	printf("%d %d\n", a, b);      // 32, 30  후치니까 a = a+1이 여기에서 계산됨.
	printf("%d\n", ++a + ++b);    // 64
	printf("%d, %d\n", a, b);     // 33, 31
	printf("%d\n", b++ + b++);    // 62      후치니까 그냥 b + b 계산하면 됨. 왜냐하면 후치 계산이니까 b값에 숫자 대입만 하면 끝남. b + 1을 할 필요가 없음.
	printf("%d, %d\n", a, b);     // 33, 33   b가 앞에서 두 번 증가하는거니까.
	return 0;
}
#endif

#if 0
#include <stdio.h>
// 증가/감소 연산자
int main()
{
	int a, b = 10;
	printf("%d\n", a = ++b);      // b = b + 1, a = b  => 먼저 b를 증가시킨 후, a에 대입하라
	                              
	                              // 순서가 다르다
	b = 10;
	printf("%d\n", a = b++);      // a = b , b = b + 1 => b를 a에 대입한 후, b를 증가시켜라
	return 0;
}
#endif



#if 0
#include <stdio.h>
int main()
{
	int i, j, k;
	i = j = k = 3;                            // 예외!!! 주의!!! 순서를 오른쪽에서 왼쪽으로 대입한다
	printf("%d\n", k %= i = 1 + k / 2);       // 오른쪽에서부터 왼쪽 순서로 계산한다. k = 3, j = 3, i = 2 so, 출력값은 1
	printf("%d\n", i += j += k);              // 계속 대입하면서 값이 바뀐다고 생각하면 됨. 
	printf("%d\n", k = (i / 2) + (j / 2));  
	return 0;
}
#endif



#if 0
#include <stdio.h>
// 복합 대입 연산자
int main()
{
	int a = 1, b = 2, c = 3, d = 4;
	a /= 3 + 1;                      // a = a / 4;      // 복합 대입연산자
	b += a;                           // b = b + a;     // a가 이미 바뀐 값으로 들어감. 순서대로 코딩되기 때문.
	c %= a + 1;                       // c = c % (a + 1);
	d -= a * 2;                       // d = d - (a * 2);
	printf("a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
	return 0;
}
#endif




#if 0
#include <stdio.h>
int main()
{
	int x = 1, y = 2;
	printf("%d\n", x || ++y);      // 1   // ++y는 y값을 먼저 증가시키고, 증가된 값을 사용한다 -> 전위 증가 연산자
	printf("%d\n", y);             // 2

	printf("%d\n", x!= 1 && ++y);  // 0   // 앞이 거짓이면 && 뒤에는 실행되지 않는다. 그래서 y는 증분하지 않는다
	printf("%d\n", y);             // 2

	return 0;
}
#endif



#if 0
#include <stdio.h>
// 논리 연산자 => &&가 ||보다 우선순위가 높다. but 사칙연산을 가장 우선순위에 두어야한다.
int main()
{
	int x = 1, y = 2, z = 4;
	printf("%d\n", x || y && z);      // 1 || 2 && 4 => 1. 둘 중 하나라도 참이면 참.                        
	printf("%d\n", x > y || z == y && x < z);  //    0==0 => 0        
	printf("%d\n", x != y && y + 1 == !z + 4);  //   !z -> !true -> false임.  0 && 0 => 0
	printf("%d\n", y - 1 == 3 || y + 1 ==3);  // 0 || 1 => 1. 둘 중 하나라도 참이면 참.

	return 0;
}

#endif



#if 0
#include <stdio.h>
// 논리 연산자
int main()
{
	char b = 'q';
	int i = 3, j = 4, k = 5;
	printf("!i : %d, !b : %d\n", !i, !b);                             // !: 부정
	printf("k >= 3 && k <= 7 : %d\n", k >= 3 && k <= 7);              // &&: 논리 곱 (그리고)  // 관계 연산자는 논리 연산자보다 계산 우선순위가 높다 => 둘 다 참이어야 참
	printf("i == 2 && j == 4 : %d\n", i == 2 && j == 4);              
	printf("b == 'q' || b == 'Q' : %d\n", b == 'q' || b == 'Q');      // ||: 논리 합 (또는) => 둘 중 하나라도 참이라면 참
	
	return 0;
}

#endif


#if 0
#include <stdio.h>
int main()
{
	int i = 30;
	printf("%d\n", 0 < i < 20);    // 주의. 디버깅을 했을 때 true의 값인 1이 나옴.
	return 0;                      // --> 그래서 논리연산자를 사용해서 오류를 해결해야한다. 
}                                  // 1. 0 < i
                                   // 2. 1 < 20 이어서 true로 나오게 됨.

#endif



#if 0
#include <stdio.h>
int main()
{
	int i = 10;
	printf("%d\n", 0 < i < 20);    // 주의. 
	return 0;
}

#endif



#if 0
#include <stdio.h>
int main()
{
	int i = 1, j = 2, k = -7;
	printf("%d\n", 'a' + 1 < j);             // 97+1<2 => 0
	printf("%d\n", - i - 5 * j >= k + 1);    // -1-10>=-7+1 => 0
	printf("%d\n", i + j + k == -2 * j);     // -4 == -4 => 1

	return 0;
}
#endif


#if 0
#include <stdio.h>
// 관계 연산자
int main()
{
	int a = 15, b = 23;
	printf("%d == %d   : %d\n", a, b, a == b);         // true는 1, false는 0
	printf("%d =! %d   : %d\n", a, b, a =! b);
	printf("%d + 8 >= %d : %d\n", a, b, a + 8 >= b);
	
	return 0;
}

#endif



#if 0
#include <stdio.h>
int main()
{
	int a = 10, b = 3;
	printf("%d / %d = %d\n", a, b, a / b);    // 정수와 정수 연산은 결과도 정수이다. 몫만을 추출한다.
	printf("%d %% %d = %d\n", a, b, a % b);   // 나머지를 추출하는 연산이다.
	                                          // %의 기능을 상쇄하려면 %를 한번 더 붙여준다. 
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int num1, num2;
	num1 = num2 = 10;         // 예외. 오른쪽을 먼저 계산하고, 왼쪽으로 간다
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
	printf("%d\n", num);      // 우선 순위가 같은 것들이 여러개 있을 경우
	return 0;                 // 당연히 앞에서부터 뒤 순서대로 계산한다
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int num;
	// num = 1 << (3 + 2);    // 연산자를 다 외울 수는 없으니 먼저 계산하고 싶은 쪽은 무조건 괄호 치기
	num = 1 << 3 + 2;         // +가 <<보다 우선순위가 높음. 그래서 1을 왼쪽으로 5 비트 이동
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

#if 0
#include <stdio.h>
// 응용 실습 2-3
int main()
{
	char ch1, ch2, ch3, ch4, ch5;

	ch1 = getchar();
	getchar();
	ch2 = getchar();
	getchar();
	ch3 = getchar();
	getchar();
	ch4 = getchar();
	getchar();
	ch5 = getchar();
	getchar();

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
// 응용 실습 2-2
int main()
{
	char ch1, ch2, ch3, ch4, ch5;
	
	scanf_s("%c %c %c %c %c", 
		&ch1,1, &ch2,1, &ch3,1, &ch4,1, &ch5,1);  // 공백을 지정해놓았기 때문에 입력할 때 공백도 포함해서 넣어야한다 
	                                              // 바이트 수를 채워넣어야 공백 안 생김
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
	getchar();           // enter 오류 방지
	ch2 = getchar();

	printf("%c\n", ch1);
	printf("%c\n", ch2);

	return 0;
}
#endif



#if 0
#include <stdio.h>
// 응용실습 2-1 내가 만든 코드임. 이것도 맞는 방식임.
// 문자 1글자 출력해내야하니까 getchar()와 putchar 사용하기
int main()
{
	char ch1, ch2;
	printf("영어 글자를 입력하시오 :  ");
	ch1 = getchar(); 
	getchar();        // enter 오류 방지
	
	
	printf("영어 글자를 입력하시오:  ");
	ch2 = getchar();
	putchar(ch1);
	putchar(ch2);

	return 0;
}
#endif



#if 0
#include <stdio.h>
int main()
{
	int num;
	printf("숫자를 하나 입력하시오 :  ");
	scanf_s("%d", &num);
	printf("num= %d\n", num + 50);

	num = num + 50;
	printf("num = %d\n", &num);
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	float f1, f2;
	printf("Input 2 real numbers >>  ");
	scanf_s("%f %f", &f1, &f2);
	printf("addition   : %f\n", f1 + f2);
	printf("subtraction  : %f\n", f1 - f2);
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
	scanf_s("%lf", &d);      // double d는 %lf로 표현한다 
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

	printf("10진수 입력: ");
	scanf_s("%d", &num);
	printf("10진수 출력 :  %d\n", num);

	printf("16진수 입력 : ");
	scanf_s("%x", &num);
	printf("10진수 출력 : %d\n", num);

	printf("long 입력 : ");
	scanf_s("%ld", &l_num);
	printf("long 출력 : %ld\n", l_num);

	return 0;
}
#endif



#if 0                       // 바로 이전에 실습한 enter 오류 없애는 방법
#include <stdio.h>

int main()
{
	char ch1, ch2;
	printf("한 문자 입력: "); 
	ch1 = getchar();         // scanf_s("%c", &ch1);
	// fflush(stdin);        // getchar();  이전에 입력된 \n(enter)을 제거하는 동작
	getchar();
	
	printf("한 문자 입력: ");
	ch2 = getchar();           // scanf_s("%c", &ch2);
	putchar(ch1);              // printf("%c", ch1);
	putchar(ch2);              // printf("%c", &ch2);
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int a, ch1, ch2;
	printf("number : "); scanf_s("%d", &a);   //int형 입력
	printf("a = %d\n", a);
	printf("char1 : "); scanf_s("%c", &ch1);  //char형 입력
	printf("ch1 = %c\n", ch1);
	printf("char2 : "); scanf_s("%c", &ch2);  //char형 입력
	printf("ch2 = %c\n", ch2);
	return 0;
}
// enter 오류 뜸
#endif



#if 0
#include <stdio.h>

int main()
{
	int num;
	printf("Enter the character : ");
	scanf_s("%d", &num);
	printf("character : %d\n", ++num);     // scanf는 \n 넣으면 안된다 
	return 0;
}
#endif



#if 0
#include <stdio.h>
//정수, 실수, 문자, 문자열 등 사용 가능
int main()
{
	char ch;
	printf("Enter the character : ");
	scanf_s("%c", &ch);
	printf("character : %c\n", ch);     // scanf는 \n 넣으면 안된다 
	return 0;
}
#endif


#if 0
#include <stdio.h>
//문자열 한 줄 -> 최대 길이 넘어가면 buffer overflow가 됨
int main()
{
	char str[10];     //입력 최대 문자 수 최소 +1을 확보해야 안전하다
	printf("Enter the string : ");
	gets(str);
	printf("input string : %s\n", str);
	return 0;
} 
#endif


#if 0
#include <stdio.h>
//문자 1글자
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
//응용실습 I-6
int main()
{
	printf("<\"That's great! You scored 99%%\">\n");  //따옴표를 찍고싶으면 \로 상쇄시킨다
	return 0; 
}
#endif


#if 0
#include <stdio.h>
//응용실습 I-5
int main()
{
	int x = 100;
	int y = 100;
	int z = 100;
	printf("x/25=%d\n", x/25);
	printf("x%25=%d\n", x%25);
	printf("y/25=%d\n", y/35);
	printf("y%35=%d\n", y % 35);
	printf("z/45=%d\n", z/45);
	printf("z%45=%d\n", z%45);

	return 0;
}
#endif


#if 0
#include <stdio.h>
//응용실습 I-4
int main()
{   
	char ch1 = 'A', ch2 = 66, ch3 = 'A' + 2;
	printf("%c%c%c\n", ch1, ch2, ch3);
	return 0;
}
#endif


#if 0
#include <stdio.h>
//응용실습 I-3
int main()
{   /*
	puts("This is the first line");
	printf("\n");
	printf("\n");
	puts("This is the second line");
	*/
	printf("This is the first line\n\n");
	printf("This is the second line");
	return 0;
}
#endif


#if 0
#include <stdio.h>
//응용실습 I-2
int main()
{
	int num = 1256;
	printf("%o %d %x\n", num, num, num);
	return 0;
}

#endif


#if 0
#include <stdio.h>

int main()
{
	name = "김서연";  --> c언어는 변수를 쓰기 전에는 반드시 타입과 함께 선언해야함
	printf("%s\n", name);
	
	return 0;
}
--> 에러 뜸
#endif


#if 0
#include <stdio.h>
//응용실습 I-1
int main()
{
	char* name = "김서연";
	printf("김서연\n");
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
	printf("[%c]\n", b);      // 문자 출력
	printf("[%8c]\n", b);     // 우측 정렬
	printf("[%-8c]\n", b);    // 좌측 정렬
	printf("[%f]\n", c);      // 실수 출력
	printf("[%8.3f]\n", c);   // 우측 정렬
	printf("[%-8.3f]\n", c);  // 좌측 정렬
	printf("[%+8.3f]\n", c);  // 부호 출력
	printf("[%08.3f]\n", c);  // 공백 채움
	printf("[%+08.3f]\n", c);
	return 0;
}

#endif

#if 0
int main()
{
	int a = 1234;
	printf("[%d]\n", a);      // 정수 출력
	printf("[%8d]\n", a);     // 우측 정렬
	printf("[%-8d]\n", a);    // 좌측 정렬
	printf("[%+8d]\n", a);    // 부호 출력
	printf("[%08d]\n", a);    // 공백 채움
	printf("[%+08d]\n", a);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 1234;
	printf("[%d]\n", a);      // 정수 출력
	printf("[%8d]\n", a);     // 우측 정렬
	printf("[%-8d]\n", a);    // 좌측 정렬
	printf("[%+8d]\n", a);    // 부호 출력
	printf("[%08d]\n", a);    // 공백 채움
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

%x: 16진수 정수 출력
%d: 10진수 정수 출력
%o: 8진수 정수 출력
%c: 문자 1개 출력 (정수도 아스키 코드로 출력됨)
%e: 지수 표기법 = 실수를 지수 형태로 출력

#endif


#if 0
#include <stdio.h>

int main()
{
	puts("hello world\n");
	puts("happy birthday!\n"); 

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	puts("ABC");
	puts("DEF");      ///puts 함수는 null을 만나면 \n이 출력된다


	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	float f = 10.25f;
	printf("%f\n", f);
}
#endif

#if 0

실수형의 바이트폭:
                 가수     지수표현법
1000000000 = > 0.1 * 10의 10승 

#endif

#if 0
#include <stdio.h>

int main()
{
	char ch = -7;
	printf("%x\n", ch);
	return 0;
}
#endif

#if 0

int 나 unsigned char 쓰면 최상위 비트를 부호로 쓰지 않음

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
	printf("10\n");
	printf("hello\n");
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	//int a = 0x10;   // 변수 선언부 및 초기화
	int a = 010;
	printf("%d\n", a);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 10;          // 변수 선언부 및 초기화
	char ch = 'A';
	float f = 3.14f;
	double df = 1.414;

	a = b;

	return 0;
}
#endif


#if 0
상수:
1. 정수형 상수:
숫자 앞에 0x 붙이면 16진수
숫자 앞에 0 붙이면 8진수

2. 실수형 상수:
f 붙이면 float형 상수
f 안 붙이면 8byte double형 함수

3. 문자형 상수:
'a' = > 97 이것은 ASCII 코드의 값으로 나온다
'b' = > 98
'c' = > 99
'A' = > 65  
'\n' = > 10
'\t' = > 9
'\0' = > 0
' ' = > 32
'0' = > 48

4. 문자열 상수

#endif

#if 0
#include <stdio.h>

int main()
{
	int a = 10;          // 변수 선언부 및 초기화
	int b = 20;
	char ch = 'A';

	a = b;

	return 0;
}
#endif

#if 0
char ch = 'A';      // 문자형 변수 ch (1 byte 공간)
int a;              // 정수형 변수 a (4 byte 공간)
int b = 10;         // 정수형 변수 b (4 byte 공간)
float f;            // 실수형 변수 f (4 byte 공간)
double d = 3.14;    // 실수형 변수 d (8 byte 공간)
#endif

#if 0
#include <stdio.h>    // 선언문

int main()
{
	int a;            // 변수 선언부
	char ch;          

	a = 10;           // 변수 처리부
	ch = 'A';
	return 0;
}
#endif


#if 0
/* This is a test */
#include <stdio.h>

int main()
{
	int int_temp_0;
	printf("%lu\n", sizeof("Hello World!\n"));
	printf("Hello World!\n");
	return 0;
} 
#endif

