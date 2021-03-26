/*
 * Swap_without_temp.c
 *
 *  Created on: Mar 27, 2021
 *      Author: youssef essam
 */
#include <stdio.h>
int main ()
{
	int x,y;
	scanf("%d %d",&x,&y);
	x=x+y;
	y=x-y;
	x=x-y;
	/*x=x^y;
	y=x^y;
	x=x^y;*/
	printf("%d %d",x,y);
	return 0;
}
