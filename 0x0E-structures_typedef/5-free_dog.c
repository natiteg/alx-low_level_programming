#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* free_dog - entry point
* @d: struct to free
* Return: 0
*/
void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d);
}
