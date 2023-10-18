#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;
	printf("geef alstublieft 2 doubles.\n");
	scanf_s("%lf", &a);
	scanf_s("%lf", &b);
	c = sqrt((a * a) + (b * b));
	printf("%lf", c);
}