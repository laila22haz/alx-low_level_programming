#include <stdio.h>
#include "dog.h"

/*laila22haz*/
/**
 * init_dog - Short description
 * @d: First member
 * @name: Second member
 * @age: Third member
 * @owner: fourth member
 *
 * Description: Longer description
 * Return: structre
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)

	d->name = name;
	d->age = age;
	d->owner = owner;
}
