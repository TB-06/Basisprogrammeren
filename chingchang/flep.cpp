#include <stdio.h>
int main()
{
	int a;
	int b=0;
	printf("ik ben de lengte rekenmachine, geef me je lengte en ik reken het uit.\n");
	printf("geef AUB je lengte in centimeters.\n");
	scanf_s("%d\n", &a);
	while (b < 20);
	{
		b++;
		printf("%d", b);
		printf("10100111001011010000101101010011100101010101010101\n");
		printf("11001010011001011101101001010010100101001010101010\n");
		printf("01101010101101011101010110100101010100001111111010\n");
		printf("10101001010100101010100101001010010101001010001010\n");
	}
	printf("berekening is klaar\n");
	printf("je bent %d cm lang", a);
}