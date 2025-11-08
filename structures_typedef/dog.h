#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure that stores dog information
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 *
 * Description: This structure holds basic information about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
