/*
 * Print_integer.c
 *
 *  Created on: Mar 27, 2021
 *      Author: Youssef Essam
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, y;
	printf("Enter two integers \n");
	fflush(stdout);
	scanf("%d %d", &x , & y);
	printf("You entered %d %d", x, y);
	return 0;
}


