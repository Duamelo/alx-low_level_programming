#include "dog.h"
#include <stdlib.h>


/**
 * free_dog - Entry point
 *
 * @d: dog data's information
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
