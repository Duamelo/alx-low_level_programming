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

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	if (name == NULL)
	{
		free(dog);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(dog);
		free(name);
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
