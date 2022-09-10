#include <stdio.h>
/** 
 * main - print
 *
 * Return: 0(successfully)
 */

int main(void)
{int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of a char:%lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of an in: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);
}

