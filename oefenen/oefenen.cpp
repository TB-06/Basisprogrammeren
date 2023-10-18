#include <stdio.h>
#define SLEUTELAFM 16

int main()
{
	int i, sleutel[] = { 4,3,1,67,55,8,0,4,-5,37,7,4,2,9,1,-1 };
	void mergesort(int*, int);
	
	mergesort(sleutel, SLEUTELAFM);
	printf("Na mergesort:\n");
	for (i = 0; i < SLEUTELAFM; ++i)
		printf("%4d", sleutel[i]);
	putchar('\n');
}