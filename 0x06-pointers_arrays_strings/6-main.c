#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	char str[] = "Except the best. Prepare for the worst. Capitalize on what comes.\n hello world! hello-word 0123456hello world\thello world.hellow world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
