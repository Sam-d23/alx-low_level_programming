#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 * Return: length of the string
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
 * _strcpy - copies the string pointed by src
 * including the null byte
 * to the buffer pointed to by dest
 * @dest: pointer to buffer in which the string is copied
 * @src: string to be copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int l, i;
while (src[i] != '\0')
{
dest[l] = src[i];
}
return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the nem dog, else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int l1, l2;
l1 = _strlen(name);
l2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
	return (NULL);
dog->name = malloc(sizeof(char) * (l1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (l2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
