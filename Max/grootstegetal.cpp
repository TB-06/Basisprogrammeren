#include <stdio.h>
int main()
{
	int A, B;
	printf("geef 2 getallen\n");
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	if (A > B)
	{
		printf("%d is het grootst", A);
	}
	else
	{
		printf("%d is het grootst", B);
	}
}