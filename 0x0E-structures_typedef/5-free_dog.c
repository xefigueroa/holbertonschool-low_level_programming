#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - dogs deserve to be free
 * @d: pointer to struct of dog to free
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
