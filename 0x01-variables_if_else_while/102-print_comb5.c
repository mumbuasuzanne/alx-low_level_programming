#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers
 * ranging from 0 to 99, following the specified format.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num1, num2;

    for (num1 = 0; num1 <= 99; num1++)
    {
        for (num2 = num1; num2 <= 99; num2++)
        {
            /* Print the first two-digit number */
            putchar((num1 / 10) + '0');
            putchar((num1 % 10) + '0');

            /* Print the space separator */
            putchar(' ');

            /* Print the second two-digit number */
            putchar((num2 / 10) + '0');
            putchar((num2 % 10) + '0');

            /* Print the comma and space separator */
            if (num1 != 98 || num2 != 99)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}
