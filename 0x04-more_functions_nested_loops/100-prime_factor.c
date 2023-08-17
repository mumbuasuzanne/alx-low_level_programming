#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 * @num: The number to find the largest prime factor for.
 *
 * Return: The largest prime factor.
 */
long largest_prime_factor(long num)
{
    long max_prime = -1;
    long i;

    while (num % 2 == 0)
    {
        max_prime = 2;
        num /= 2;
    }

    for (i = 3; i <= sqrt(num); i += 2)
    {
        while (num % i == 0)
        {
            max_prime = i;
            num /= i;
        }
    }

    if (num > 2)
        max_prime = num;

    return max_prime;
}

/**
 * main - Entry point for the prime factor program.
 *
 * Return: Always 0.
 */
int main(void)
{
    long num = 612852475143;
    long largest_factor = largest_prime_factor(num);

    printf("%ld\n", largest_factor);

    return 0;
}

