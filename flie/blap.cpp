}
#include <stdio.h>
int gemiddelde(int* arr, int lenght);
int main()
{
	int arr[] = { 1, 3, 5, 6, 12, 6, 9, 14 };
	int length = sizeof(arr) / sizeof(arr[0]);

	printf("%d", gemiddelde(arr, length));
	return 0;
}

int gemiddelde(int* arr, int lenght)
{
	int a = 0, lul = 0;
	for (int i = 0; i < lenght; i++)
	{
		lul = lul + arr[i];
	}

	return lul / lenght;
}
