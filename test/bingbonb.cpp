#include <stdio.h>
int main() {
	int a;
	int b;
	printf("Geef de lengte van zijde a en b van een rechthoek.\n");
	while (a < 1 || b < 1) {
		scanf_s("%d %d", &a, &b);
		if (a < 1 || b < 1) {
			printf("Een van beide zijden heeft een lengte van 0 of kleiner.Probeer het opnieuw.\n");
		}
	}
	printf("De oppervlakte van de rechthoek is %d\n", a * b);
}