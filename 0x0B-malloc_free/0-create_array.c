#include "main.h"
/**
 * create_array - create an array of chars
 * @size: size of an array to be created
 * @c: char to be created
 *
 * Return: NULL if size is 0 pointer to an array if succesful
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char*)malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);
	
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
