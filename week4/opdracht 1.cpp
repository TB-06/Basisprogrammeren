#include <stdio.h>
double gemiddelde(int a, int b, int c, int d)
{
	double result = a + b + c + d;
	return result / 4.0;
}
int main()
{
	printf("%f", gemiddelde(1, 4, 9, 2));
}