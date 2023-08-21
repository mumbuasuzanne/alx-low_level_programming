#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 101-crackme program.
 *
 * Return: Always 0.
 */
int main(void)
{
    char password[6];  
    int i;

    srand(time(0));  

    for (i = 0; i < 5; i++)
    {
        password[i] = rand() % 26 + 97;
    }

    password[i] = '\0'; 

    printf("Random password: %s\n", password);

    return 0;
}


