#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, j, k;
	char *name2, *owner2;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;

	name2 = malloc(sizeof(char) * (i + 1));
	if (name2 == NULL)
	{
		free(dog);
		return (NULL);
	}

	owner2 = malloc(sizeof(char) * (j + 1));
	if (owner2 == NULL)
	{
		free(name2);
		free(dog);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		name2[k] = name[k];
	for (k = 0; k <= j; k++)
		owner2[k] = owner[k];

	dog->name = name2;
	dog->age = age;
	dog->owner = owner2;

	return (dog);
}
