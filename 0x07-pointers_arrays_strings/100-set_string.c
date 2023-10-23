#include <stdio.h>
#include "main.h"

void set_string(char **s, char *to)
{
	if (*s != NULL)
	{
		free(*s);
	}
	*s = (char *)malloc(strlen(to) + 1);
	
	if (*s != NULL){
		strcpy(*s, to);
		}
}
int main() {
	char *str = NULL;
	char *newStr = "Hello, World!";

	set_string(&str, newStr);

	if (str != NULL)
	{
		printf("str: %s\n", str);
		free(str);
	}
	return 0;
}
