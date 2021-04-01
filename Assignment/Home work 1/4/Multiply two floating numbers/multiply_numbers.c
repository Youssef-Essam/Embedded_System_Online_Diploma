/*
 * multiply_numbers.c
 *
 *  Created on: Mar 27, 2021
 *      Author: Youssef Essam
 */

#include <stdio.h>
#include <stdlib.h>
int main ()
{
	float x,y;
	printf("Enter two numbers ");
	fflush(stdout);
	scanf("%f %f",&x,&y);
	printf("Product: %f" ,x*y);
	return 0;
}


