#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print struct dog attributes
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
