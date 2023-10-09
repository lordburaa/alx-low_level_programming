#include "main.h"
/**
 * create_array - create an array of chars
 * @size: size of an array to be created
 * @c: char to be created
 *
 * Return: NULL if size is 0 pointer to an array if succesful
 */
char *create_array(unsigned int size, __attribute__((unused)) char c)
{
	char *ptr;

	if (size  == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
