/*
 * poitivety.c
 *
 *  Created on: Apr 1, 2021
 *      Author: Youssef Essam
 */
#include <stdio.h>


int main()
{
	int z;
	printf("Enter a number\n");
	fflush(stdout);
	scanf("%d",&z);

	if (z>0)
		{
			printf("%d is poistive \n",z);
		}
		else if (z<0)
		{
			printf("%d is negative \n",z);
		}

		else
		{
			printf("ZERO");
		}

	return 0;
}

