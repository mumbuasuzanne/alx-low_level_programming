#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a[5] = {98, 1988, 1024, 402, -1};
    int *p;

    p = a + 2;
    *(p + 3) = 98; 
    printf("a[2] = %d\n", a[2]);
    return (0);
}
