#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - entry point
 * @name: string from main, name of dog
 * @age: number from main, age of dog
 * @owner: string from main, owner of dog
 * Return: dog
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
