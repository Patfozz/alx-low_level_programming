#include "main.h"

/**
* _strncat - copies a string
* @src: source
* @dest: destination
* @n: amount of bytes in source
* Return: Always 0
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
