#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This program assigns a random number to the variable n each time it is executed.
 * It prints the last digit of the number stored in the variable n.
 *
 * Return: 0 on success
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("Last digit of %d is ", n);

    if (n % 10 > 5)
        printf("and is greater than 5\n");
    else if (n % 10 == 0)
        printf("and is 0\n");
    else
        printf("and is less than 6 and not 0\n");

    return 0;
}

