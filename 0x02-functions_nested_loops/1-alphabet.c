#include "holberton.h"
/**
 * prin alphabet - enert point 
 *
 * Description: prints alphabets in _putchar
 *
 * Return: void
 */

void print_alphabet(void)
{char c;
	for (c ='a'; c <= 'z'; c++)
	{
		_putcjhar(c);
	}
	_puchar('\n');
}

