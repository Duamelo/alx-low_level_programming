#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Entry point
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's dog
 *
 * Description: function that creates a new dog
 *
 * Return: Null if the function fails, otherwise a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *n, *o;

	dog = malloc(sizeof(dog_t));
	n = malloc(sizeof(char));
	o = malloc(sizeof(char));
	if (n == NULL || o == NULL)
	{
		return (NULL);
	}
	n = name;
	o = owner;
	if (dog != NULL)
	{
		dog->name = n;
		dog->age = age;
		dog->owner = o;
		return (dog);
	}
	return (NULL);
}
