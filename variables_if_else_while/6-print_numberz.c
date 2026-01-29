#include <stdio.h>

/**
 * main - prints numbers 0 to 9 without using char
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(48 + i); /* ASCII '0' = 48 */
	putchar('\n');

	return (0);
}
