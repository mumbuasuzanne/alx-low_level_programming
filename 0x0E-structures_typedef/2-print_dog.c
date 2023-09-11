#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints information about a struct dog.
 * @d: Pointer to the struct dog variable to print.
 *
 * Description:
 * This function prints the name, age, and owner of a struct dog.
 * If any element of d is NULL, it prints "(nil)" for that element.
 * If d is NULL, it prints nothing.
 */
void print_dog(struct dog *d)
{
    if (d != NULL)
    {
        printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
        printf("Age: %.6f\n", d->age);
        printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
    }
}
