#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure that stores dog information
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to struct dog to initialize
 * @name: Name to assign
 * @age: Age to assign
 * @owner: Owner to assign
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the contents of a struct dog
 * @d: Pointer to struct dog to print
 */
void print_dog(struct dog *d);
/**
 * new_dog - Creates a new dog and stores copies of name and owner
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 *
 * Return: Pointer to new dog_t, or NULL if allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner);

#endif
