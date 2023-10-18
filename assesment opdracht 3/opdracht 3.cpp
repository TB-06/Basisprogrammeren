#include <stdio.h>
int main()
{
	int n = 0;
	int alles = 0;
	printf("geef een getal en ik tel tot dat getal op\n");
	scanf_s("%d", &n);
	for (int i = 0; i <= n; i++)
	{
		alles = alles + i;
	}
	printf("%d", alles);
}
