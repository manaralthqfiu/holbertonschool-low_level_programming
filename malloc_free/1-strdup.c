#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Creates a duplicate of a given string in newly allocated memory.
 * @str: The input string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL or malloc fails.
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return NULL;

	size_t len = strlen(str);
	char *copy = malloc(len + 1);

	if (copy == NULL)
		return NULL;

	strcpy(copy, str);
	return copy;
}
