#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog and stores copies of name and owner
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 *
 * Return: Pointer to new dog_t, or NULL if allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *copy_name, *copy_owner;
	int len_name = 0, len_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	copy_name = malloc(sizeof(char) * (len_name + 1));
	if (copy_name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i <= len_name; i++)
		copy_name[i] = name[i];

	copy_owner = malloc(sizeof(char) * (len_owner + 1));
	if (copy_owner == NULL)
	{
		free(copy_name);
		free(d);
		return (NULL);
	}
	for (i = 0; i <= len_owner; i++)
		copy_owner[i] = owner[i];

	d->name = copy_name;
	d->age = age;
	d->owner = copy_owner;

	return (d);
}
