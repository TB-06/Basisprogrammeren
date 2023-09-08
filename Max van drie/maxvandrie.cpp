#include <stdio.h>
int main()
{
	int A, B, C;
	printf("geef 3 getallen\n");
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	scanf_s("%d", &C);
	if (A > C)
	{
		printf("%d is het grootste getal", &A);
	}
	else
	{
		if (B > C)
		{
			printf("%d is het grootste getal", &B);
		}
		else
		{
			printf("%d is het grootste getal", &C);
		}
	}
}
