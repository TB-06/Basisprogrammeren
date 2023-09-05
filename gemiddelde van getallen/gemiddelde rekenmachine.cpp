#include <stdio.h>

int main()
{
	int A;
	int B;
	int C;
	int getal;

	printf("geef het eerste getal\n");
	scanf_s("%d", &A);
	printf("geef het tweede getal\n");
	scanf_s("%d", &B);
	printf("geef het derde getal\n");
	scanf_s("%d", &C);

	getal = (A + B + C) / 3;
	printf("het gemiddelde is %d",getal);
}