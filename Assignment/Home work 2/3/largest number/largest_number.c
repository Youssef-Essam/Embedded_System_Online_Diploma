/*
 * largest_number.c
 *
 *  Created on: Apr 1, 2021
 *      Author: Youssef Essam
 */
#include <stdio.h>


int main()
{
	int x,y,z;
	printf("Enter 3 numbers\n");
	fflush(stdout);
	scanf("%d %d %d",&x,&y,&z);
	if ((x>y)&&(x>z))
	{
		printf("%d is the largest number\n",x);
	}
	else if (y>z)
	{
		printf("%d is the largest number\n",y);
	}

	else
	{
		printf("%d is the largest number\n",z);
	}



	return 0;
}


