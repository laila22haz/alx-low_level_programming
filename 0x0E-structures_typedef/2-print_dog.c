#include <stdio.h>
#include "dog.h"
/*laila22haz*/
/**
 * print_dog - Short description
 * @d: First member
 *
 * Description: prints the name, age and owner of the dog
 *              If name, age, or owner are NULL, prints "(nil)"
 */
void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->age)
		printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
