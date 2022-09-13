#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 *
 * Description: The character to print
 *
 * Return: On success 1.
 * On error, -1 is return 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
