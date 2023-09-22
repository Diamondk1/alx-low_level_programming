i#include "lists.h"

/**
 * before_main - Executes before main
 *
 * Return: void
 */
void before_main(void) __attribute__((constructor));
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
