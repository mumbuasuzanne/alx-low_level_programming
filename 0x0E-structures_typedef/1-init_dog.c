#include "dog.h"

/**
 * init_dog - Initializes a struct dog variable.
 * @d: Pointer to the struct dog variable to initialize.
 * @name: Name of the dog (string).
 * @age: Age of the dog (float).
 * @owner: Owner of the dog (string).
 *
 * Description: This function initializes the members of a struct dog
 * variable with the provided name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        return;

    d->name = name;
    d->age = age;
    d->owner = owner;
}

