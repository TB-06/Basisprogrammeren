#include <stdio.h>
int main()
{
	int A, B;
	int getal;
	printf("geef twee hele positieve getallen\n");
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	getal = A * B;
	if (getal > 214783647)
	{
		printf("overflow");
	}
	else
	{
		printf("het getal is %d", getal);
	}
}