#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - a function the gets lgth of str
 * @str: the str to get the lgth
 * Return: lgth of @str
*/
int _strlen(const char *str)
{
	int lgth = 0;

	while (*str++)
		lgth++;
	return (lgth);
}
/**
 * _strcopy - a function that returns @dest with a cp of str from @src
 * @src: str to cp
 * @dest: cp str to here
 * Return: @dest
*/
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - a function that creates a new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the owner's name
 * Return: struct pointer dog
 *	NULL if it fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
