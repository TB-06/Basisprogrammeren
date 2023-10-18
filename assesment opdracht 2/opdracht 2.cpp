#include <stdio.h>
int main()
{
	int a, b, c;
	printf("geef alsublieft 3 integers\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	if ((a*b*c>=-10)&&(a*b*c<=10))
	{
		printf("waar");
	}
	else
	{
		printf("niet waar");
	}
}