#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Prints the information of a dog
 * @d: Pointer to a struct dog
 *
 * Description: If an element of d is NULL, print (nil) instead of this element.
 * (if name is NULL, print Name: (nil))
 * If d is NULL, print nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
