/*
 * check_character.c
 *
 *  Created on: Apr 1, 2021
 *      Author: Youssef Essam
 */
#include <stdio.h>
int main()
{
	char x;
	printf("Enter a number\n");

	fflush(stdout);

	scanf("%c",&x);

	if ((x>='A')&&(x<='z'))
		{
			printf("%c is an alphabet \n",x);
		}


		else
		{
			printf("%c is NOT an alphabet \n",x);
		}

	return 0;
}



