#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the name of the file it was compiled from.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    printf("The name of the current file is: %s\n", __FILE__);
    return (0);
}

