#include <stdio.h>
int mainboek()
{
	int mijlen, yards;
	float kilometers;

	mijlen = 26;
	yards = 385;
	kilometers = 1.609 * (mijlen + yards / 1760.0);
	printf("\nEen marathonloop telt %f kilometers.\n\n" , kilometers);
}