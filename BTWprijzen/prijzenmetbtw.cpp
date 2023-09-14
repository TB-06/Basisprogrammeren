#include <stdio.h>
int main()
{
	int prijs;
	float btw;
	printf("geef een prijs en ik reken de prijs met btw uit\n");
	scanf_s("%d", &prijs);
	btw = .21 * prijs + prijs;
	printf("dit is de prijs met btw: %f", btw);
}