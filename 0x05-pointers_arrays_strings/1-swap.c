#include "main.h"

/**
*swap_int - swaps two integers' values
*@n: parameter
*@a: first integer
*@a: first integer
*Return: 0
*/

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}

