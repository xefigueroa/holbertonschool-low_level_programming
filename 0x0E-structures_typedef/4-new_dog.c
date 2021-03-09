#include "dog.h"
#include <stdlib.h>

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
 * new_dog - create new dog
 * @name: name of doggie doge
 * @age: age of doggie doge
 * @owner: owner of doggie doge
 *
 * Return: NULL if fai. Otherwise doge
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doge;

	if (name == NULL || age < 0 || owner == NULL) /* return condition */
	{
		return (NULL);
	}

	doge = malloc(sizeof(dog_t)); /*mem alloc */

	if (doge == NULL) /* return condition */
	{
		return (NULL);
	}

	doge->name = malloc(sizeof(char) * (_strlen(name) + 1)); /* mem alloc name */
	if (doge->name == NULL)
	{
		free(doge);
		return (NULL);
	}

	doge->owner = malloc(sizeof(char) * (_strlen(owner) + 1)); /* alloc owner */
	if (doge->owner == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}

	doge->name = _strcpy(doge->name, name); /* storage */
	doge->age = age;
	doge->owner = _strcpy(doge->owner, owner);

	return (doge);
}

/**
 * _strlen - measure length of string
 * @s: string to evaluate
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
	{}

	return (len);
}

/**
 * _strcpy - make copy of a string
 * @dest: destination of copy
 * @src: source of original
 *
 * Return: copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}


