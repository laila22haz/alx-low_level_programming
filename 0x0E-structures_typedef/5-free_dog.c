#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/*laila22haz*/
/**
 * free_dog - function with single argument
 * @d: pointer type
 *
 * Description: frees dogs
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
