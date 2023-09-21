#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c;
	printf("geef a \n");
	scanf_s("%d", &a);
	printf("geef b \n");
	scanf_s("%d", &b);
	printf("geef c \n");
	scanf_s("%d", &c);

	int discriminant = b * b - 4 * a * c;
	if (discriminant < 0)
	{
		printf("geen oplossingen");
	}
	else if (discriminant == 0)
	{
		double x1 = -b / (2.0 * a);
		printf("de oplossing is: %f\n", x1);
	}
	else
	{
		double x1 = (-b + sqrt(discriminant)) / (2.0 * a);
		double x2 = (-b - sqrt(discriminant)) / (2.0 * a);
		printf("x1 is %f", x1);
		printf("x2 is %f", x2);

	}
}