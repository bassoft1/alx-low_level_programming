#include "main.h"

/**
* _memset -Fills the first n bytes of the memory area
* @s: A pointer to the memory area to be filled.
* @b: the character to fill the memory area with.
*@n: The number of bytes to be filled.
*
* Return: A pointer to the filled memory area @s.
*/

char * _memset(char *s, char b, unsigned int n)
{
while (n)
{
s[n - 1] = b;
n--;
}
return (s);
}

