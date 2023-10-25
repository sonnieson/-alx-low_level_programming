#include "main.h"

/**
 * _strlen_recursion - main function
 *
 * @s: Function parameter
 * Return: Length
 */
int _strlen_recursion(char *s)
{
	int y = 0;
	
	if (*s)
	{
		y++;
		y += _strlen_recursion(s + 1);
	}
	return (y);
}
