#include "main.h"
#include <string.h>

/**
*_strncat - a function that concatenates two strings
*@dest: copy to
*@src: copy from
*@n: input of max bytes to be used
*Return: Always 0 (Success)
*/
char *_strncat(char *dest, char *src, int n)
{
char *ptr;
ptr = strncat(dest, src, n);
return (ptr);
}
