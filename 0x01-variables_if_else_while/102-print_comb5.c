[8/11, 11:43 PM] ★彡[🌻 Suzanne 🌻]彡★: Write a program that prints all possible combinations of two two-digit numbers.

    The numbers should range from 0 to 99
    The two numbers should be separated by a space
    All numbers should be printed with two digits. 1 should be printed as 01
    The combination of numbers must be separated by comma, followed by a space
    The combinations of numbers should be printed in ascending order
    00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
    You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
    You can only use putchar eight times maximum in your code
    You are not allowed to use any variable of type char
    All your code should be in the main function
[8/11, 11:46 PM] ★彡[🌻 Suzanne 🌻]彡★: #include <stdio.h>

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
            putchar(' ');

            /* Print the second two-digit number */
            putchar((num2 / 10) + '0');
            putchar((num2 % 10) + '0');

            /* Print comma and space if not the last combination */
            if (num1 != 99 || num2 != 99)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}
