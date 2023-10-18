#include <stdio.h>
double berekenverplaatsing(double a, double t, double v0, double x0);

int main()
{
	printf("%lf\n", berekenverplaatsing(1, 0, 0, 10));
	printf("%lf\n", berekenverplaatsing(4, 2, 1, 10));
	return 0;
}







double berekenverplaatsing(double a, double t, double v0, double x0)
{
	double xt = .5 * a * (t * t) + v0 * t + x0;
	return xt;
}