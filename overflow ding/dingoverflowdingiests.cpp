#include <stdio.h>
int main()
{
	int A, B;
	printf("geef twee positieve hele getallen\n");
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	unsigned int getal = A * B;
	if (getal < 214783647)
	{
		printf("%d", getal);
	}
	else
	{
		printf("overflow");
	}
}