/*
 * factorial.c
 *
 *  Created on: Apr 1, 2021
 *      Author: Youssef Essam
 */
#include <stdio.h>
int main()
{
	int x,product=1;
	printf("Enter a number\n");
	fflush(stdout);
	scanf("%d",&x);
	if (x<0)
	{
		printf("ERROR");
	}
	else if (x==0)
	{
		printf("Factorial = 1");
	}
	else
	{
		for (int i=x;i>1;i--)

		{
			product*=i;
		}
		printf("Factorial = %d",product);
	}


	return 0;
}


