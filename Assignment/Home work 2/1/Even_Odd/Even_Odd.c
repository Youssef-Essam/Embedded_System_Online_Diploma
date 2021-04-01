/*
 * Even_Odd.c
 *
 *  Created on: Mar 31, 2021
 *      Author: Youssef Essam
 */
#include <stdio.h>


int main()
{
	int x;
	printf("Enter a number\n");
	fflush(stdout);
	scanf("%d",&x);
	if ((x%2)==0)
	{
		printf("Even number");
	}
	else
	{
		printf("Odd number");
	}
	return 0;
}
