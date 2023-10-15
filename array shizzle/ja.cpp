#include <stdio.h>
void printArray(int a[], int lengte);


int main()
{
	int a[5] = { 1,2,3,4,5 };
	printArray(a, 5);
}

void printArray(int a[], int lengte)
{
	for (int i = 0; i < lengte; i++)
	{
		printf("%d ; %d\n", i, a[i]);
	}
}