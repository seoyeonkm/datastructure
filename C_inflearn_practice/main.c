#include <stdio.h>
extern void Increment();
extern int GetNum();
int main()
{
	printf("num : %d\n", GetNum());
	Increment();
	printf("num : %d\n", GetNum());
	Increment();
	printf("num : %d\n", GetNum());
	Increment();

	return 0;
}