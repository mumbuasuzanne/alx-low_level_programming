#ifndef DOG_STRUCT_H
#define DOG_STRUCT_H

/**
 * struct dog - Defines a structure representing a dog.
 * @name: The name of the dog (string).
 * @age: The age of the dog (float).
 * @owner: The owner of the dog (string).
 *
 * Description: This structure represents a dog with its name, age, and owner.
 */
struct dog {
    char *name;
    float age;
    char *owner;
};

#endif /* DOG_STRUCT_H */

