/*
 * Swap_numbers.c
 *
 *  Created on: Mar 27, 2021
 *      Author: youssef essam
 *
 */

#include<stdio.h>
#include <stdlib.h>
int main()
{
	int a,b;
	printf("Enter value of a: \n" );
	fflush(stdout);
	printf("Enter value of b: \n" );
	fflush(stdout);
	scanf("%d %d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After swapping, value of a=%d\n",a);
	fflush(stdout);
	printf("After swapping, value of b=%d\n",b);
	return 0;
}



