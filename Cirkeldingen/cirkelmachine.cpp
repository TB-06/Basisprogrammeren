#include <stdio.h>
#include <math.h>
int main()
{
	int radius;
	float oppervlakt, omtre;
	printf("geef maar eens even de radius van een cirkel\n");
	scanf_s("%d", &radius);

	oppervlakt = radius * radius * 3.14159;
	omtre = 2 * radius * 3.14159;
	printf("de oppervlakte van je cirkel is %f\n", oppervlakt);
	printf("de omtrek van je cirkel is %f\n", omtre);
}