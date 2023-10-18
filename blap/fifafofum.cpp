#include <stdio.h>
int main()
{
	int a = 6, b = 7;
	int c = a | b;
	int d = a & b;
	int e = a ^ b;
	printf("bij een bitwise or worden 6 en 7 komt er:  %d\n", c);
	printf("bij een bitwise and tussen 6 en 7 komt er: %d\n", d);
	printf("bij een bitwise xor tussen 6 en 7 komt er: %d\n", e);
}
