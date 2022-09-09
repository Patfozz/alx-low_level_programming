#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */


/* betty style doc for function main goes there */
/**
* main - Entry point
* Return: Always return 0 (Success)
*/
int main(void)
{char ch = 'a';
char so = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (so <= 'Z')
{
putchar(so);
so++;
}
putchar('\n');
return (0);
}
