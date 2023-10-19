#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: the value
 * @src: the value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l;
	int k;
	
	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	k = 0;
	while (k < l && src[k] != '\0')
	{
		dest[l] = src[k];
		l++;
		k++;
		n--;
	}
	dest[l] = '\0';
	return (dest);
}
