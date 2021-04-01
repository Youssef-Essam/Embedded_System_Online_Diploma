/*
 * calculate_sum.c
 *
 *  Created on: Apr 1, 2021
 *      Author: Youssef Essam
 */
#include <stdio.h>
int main()
{
	int x,sum=0;
	printf("Enter a number\n");
	fflush(stdout);
	scanf("%d",&x);
	for (int i=1;i<=x;i++)
	{
		sum+=i;
	}

	printf("sum = %d\n",sum);


	return 0;
}


