/*
 * calculator.c
 *
 *  Created on: Apr 1, 2021
 *      Author: Youssef Essam
 */
#include <stdio.h>

int main ()
{
	int x,y,result;
	char o;
	printf("Enter 1st number then operator then 2nd number\n");
	fflush(stdout);
	scanf("%d %c %d",&x,&o,&y);
	switch(o)
	{
	case'+':
		result=x+y;
		break;
	case'-':
		result=x-y;
			break;
	case'*':
		result=x*y;
			break;
	case'/':
	result=x/y;
			break;
	}
  printf("%d",result);
	return 0;
}

