#include <stdio.h>

void prior(void) __attribute__ ((constructor));

/**
 * first - prints before main is executed
 */

void prior(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
