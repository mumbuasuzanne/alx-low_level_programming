#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Check if a string contains only digits.
 * @str: The input string.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int is_digit(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

/**
 * multiply - Multiply two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The result of the multiplication.
 */
int multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0, i, j;
    int *result;

    while (num1[len1])
        len1++;
    while (num2[len2])
        len2++;

    result = malloc(sizeof(int) * (len1 + len2));
    if (result == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    for (i = 0; i < len1 + len2; i++)
        result[i] = 0;

    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = result[i + j + 1] + mul;

            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    i = 0;
    while (i < len1 + len2 && result[i] == 0)
        i++;

    if (i == len1 + len2)
    {
        printf("0\n");
    }
    else
    {
        for (; i < len1 + len2; i++)
            printf("%d", result[i]);
        printf("\n");
    }

    free(result);
    return 0;
}

int main(int argc, char *argv[])
{
    if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
    {
        printf("Error\n");
        return 98;
    }

    multiply(argv[1], argv[2]);
    return 0;
}