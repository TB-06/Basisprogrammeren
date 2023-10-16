#include <stdio.h>
int main()
{
	lmao:
	int a;
	printf("geef alstublieft een jaartal. \n");
	scanf_s("%d", &a);

	if (a % 4 == 0)
	{
		printf("1");
	}
	else if (a % 4 > 0)
	{
		printf("0");
	}
	else
	{
		printf("ongeldig jaartal ingevuld, probeer het opniew.");
		goto lmao;
	}
}