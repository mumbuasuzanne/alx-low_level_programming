#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog with given name, age, and owner.
 * @name: Name of the new dog.
 * @age: Age of the new dog.
 * @owner: Owner of the new dog.
 *
 * Return: Pointer to the newly created dog structure.
 *         NULL if memory allocation fails or if any argument is NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    if (name == NULL || owner == NULL)
        return (NULL);

    dog_t *new_dog_ptr = malloc(sizeof(dog_t));
    if (new_dog_ptr == NULL)
        return (NULL);

    new_dog_ptr->name = strdup(name);
    if (new_dog_ptr->name == NULL)
    {
        free(new_dog_ptr);
        return (NULL);
    }

    new_dog_ptr->age = age;

    new_dog_ptr->owner = strdup(owner);
    if (new_dog_ptr->owner == NULL)
    {
        free(new_dog_ptr->name);
        free(new_dog_ptr);
        return (NULL);
    }

    return (new_dog_ptr);
}
