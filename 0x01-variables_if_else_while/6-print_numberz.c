#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * It only uses the putchar function and follows the given restrictions.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
