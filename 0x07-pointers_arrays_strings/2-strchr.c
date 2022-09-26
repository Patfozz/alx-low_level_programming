#include "main.h"
#include <string.h>

/**
* _strchr - a function to find a character in a string
* @s : string
* @c : character to find
* Return: pointer to the first occurrence of the character
*/

char *_strchr(char *s, char c)

{
char *i;
i = strchr(s, c);
return (i);
}
