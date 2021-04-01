/*
 * check_vowel.c
 *
 *  Created on: Apr 1, 2021
 *      Author: Youssef Essam
 */

/*
 * Check_vowel.c
 *
 *  Created on: Mar 31, 2021
 *      Author: Youssef Essam
 */
#include <stdio.h>


int main()
{
	int x;
	printf("Enter a charcter\n");
	fflush(stdout);
	scanf("%c",&x);
	switch(x)
	{
	case 'a':
		printf("%c is a vowel\n",x);
		break;
	case 'u':
			printf("%c is a vowel\n",x);
			break;
	case 'e':
			printf("%c is a vowel\n",x);
			break;
	case 'i':
			printf("%c is a vowel\n",x);
			break;
	case 'o':
			printf("%c is a vowel\n",x);
			break;
	default :
		printf("%c is a consonant\n",x);

	}
	return 0;
}




