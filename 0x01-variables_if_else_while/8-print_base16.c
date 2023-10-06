#include <stdio.h>
/**
 * main - Prints number between 0 to 9 and letters between a to f.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int s;
for (s = 48; s < 58; s++)
{ putchar(s); }
for (s = 97; s < 103 ; s++)
{ putchar(s); }
putchar('\n');
return (0); }

