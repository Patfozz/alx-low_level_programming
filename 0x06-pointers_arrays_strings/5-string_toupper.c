#include "main.h"
#include <stdio.h>

/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @i: input strings
* Return: Always 0
*/

char *string_toupper(char *i)
{
	int count = 0;

	while (*(i + count) != '\0')
	{
		if ((*(i + count) >= 97) && (*(i + count) <= 122))
			*(i + count) = *(i + count) - 32;
		count++;
	}

	return (i);
}
