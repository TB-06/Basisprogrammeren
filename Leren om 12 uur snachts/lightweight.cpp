#include <stdio.h>
int main()
{
	int a;
	printf("geef aub een integer.");
	scanf_s("%d", &a);

	for (int i = a; i >= 0; i--)
	{
		printf("%d \n", i);
	}
}