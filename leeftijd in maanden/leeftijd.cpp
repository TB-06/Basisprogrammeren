#include <stdio.h>

int main()
{
	int leeftijd;
	int maand;
	printf("leeftijd");
	scanf_s("%d", &leeftijd);
	maand = leeftijd * 12;
	printf("je leeft %d maanden", maand);	
}