#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds length
 * @str: argument
 * Return: always 0
 */

int _strlen(char *str)
{
	int length;
	length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * _strcopy - Copies string
 * @dest: first argument
 * @src: argument
 * Return: always 0
 */

char *_strcopy(char *dest, char *src)
{
	int num;

	for (num = 0; src[num]; num++)
		dest[num] = src[num];

	dest[num] = '\0';

	return (dest);
}

/**
 * new_dog - new
 * @name: first arg
 * @age: Second arg
 * @owner: Third arg
 * Return: Always 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogs;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogs = malloc(sizeof(dog_t));

	if (dogs == NULL)
		return (NULL);

	dogs->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogs->name == NULL)
	{
		free(dogs);
		return (NULL);
	}

	dogs->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogs->owner == NULL)
	{
		free(dogs->name);
		free(dogs);
		return (NULL);
	}

	dogs->name = _strcopy(dogs->name, name);
	dogs->age = age;
	dogs->owner = _strcopy(dogs->owner, owner);

	return (dogs);
}
