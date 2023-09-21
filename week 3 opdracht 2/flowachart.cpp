#include <stdio.h>
int main()
{
	int a;
	printf("geef een integer aub\n");
	scanf_s("%d", &a);
	while (a < 100)
	{
		a = a * -2;
		printf("%d \n", a);
	}
	printf("nu is getal helemaal mooi.");
}