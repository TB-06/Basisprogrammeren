#include <stdio.h>
int main()
{
	float a, b, c, d, e, f;
	printf("geef 6 cijfers alstublieft.\n");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	scanf_s("%f", &c);
	scanf_s("%f", &d);
	scanf_s("%f", &e);
	scanf_s("%f", &f);
	if ((a + b + c + d + e + f) / 6 < 5.5)
	{
		printf("dit is een onvoldoende.");
	}
	else
	{
		printf("dit is een voldoende.");
	}
}