#include <stdio.h>
int printevensom(int n);
int main()
{
	int n = 5;
	scanf_s("%d", &n);
	if (n % 2 > 0)
	{
		n = n - 1;
	}
	
	
	printf("%d", printevensom(n));
	
	return 0;
}

int printevensom(int n)
{
	int som = 0;
	for (int i = 0; i < n; i=i+2)
		som = som + i;
	printf("%d", som);
	return n = som;
}