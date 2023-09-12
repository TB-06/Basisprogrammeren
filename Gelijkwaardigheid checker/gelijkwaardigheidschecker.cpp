#include <stdio.h>
int main()
{
	int A, B;
	printf("ik ben de gelijkswaardigheidschecker. Vul AUB 2 hele getallen in.\n");
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	if (A==B)
	{
		printf("deze getallen zijn gelijk.");
	}
	else
	{
		printf("deze getallen zijn niet gelijk.");
	}
}