#include <stdio.h>
int main()
{
	printf("je hebt duizend euro, met twee procent rente. vul een integer in om te laten zien wat je bedrag is over dat aantal jaar.\n");
	int a;
	scanf_s("%d", &a);
	int b = a * 0.02 * 1000 + 1000;
	printf("%d", b);
}