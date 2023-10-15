#include <stdio.h>
int main()
{
	double a;
	
	lightweight:
	printf("geef alstublieft een cijfer van een toets ofzo.\n");
	scanf_s("%lf", &a);

	if (a >= 1 && a < 5.5)
	{
		printf("het ingevoerde getal is een onvoldoende.\n");
	}
	else if (a >= 5.5 && a <= 10)
	{
		printf("het ingevoerde getal is een voldoende. \n");
	}
	else
	{
		printf("u heeft een ongeldig getal ingevuld. Probeer het opnieuw.\n");
		goto lightweight;
	}
}