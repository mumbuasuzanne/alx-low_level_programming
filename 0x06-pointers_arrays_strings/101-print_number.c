#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to be written.
 *
 * Return: On success, the number of characters written.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to be printed.
 *
 * This function prints the provided integer using the _putchar function.
 */
void print_number(int n)
{
    int divisor = 1;
    
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }
    
    while (n / divisor >= 10)
        divisor *= 10;
    
    while (divisor != 0)
    {
        _putchar((n / divisor) + '0');
        n %= divisor;
        divisor /= 10;
    }
}

