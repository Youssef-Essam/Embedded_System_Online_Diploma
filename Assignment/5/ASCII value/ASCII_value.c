/*
 * ASCII_value.c
 *
 *  Created on: Mar 27, 2021
 *      Author: Youssef Essam
 */
#include<stdio.h>
#include <stdlib.h>
int main()
{
	char c;
	printf("Enter a character: " );
	fflush(stdout);
	scanf("%c",&c);
	printf("ASCII value of %c is %d",c,c);
	return 0;
}

