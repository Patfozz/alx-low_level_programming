#include "main.h"

/**
* _strcmp - compares two strings
* @source1: first string
* @source2: second string
* Return: Always 0 if source1 and source2 are equal
*/

int _strcmp(char *source1, char *source2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(source1 + i) == '\0') && (*(source2 + i) == '\0'))
			break;
		op = *(source1 + i) - *(source2 + i);
		i++;
	}
	return (op);
}
