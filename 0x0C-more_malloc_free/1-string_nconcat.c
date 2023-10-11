#include "main.h"

int  _strlen(char *s);
/**
 * string_nconcat - stirng concatenate
 * @s1: string to be checke
 * @s2: string to be checked
 * @n: number of bytes to concatenate from the second string
 * Return: pointer to string concatenates
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int j = 0;
	unsigned int i = _strlen(s1);

	ptr = malloc(sizeof(char) * (i + n + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	if (s2 == NULL)
		s1 = "";
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return (ptr);
}
/**
 * _strlen - string length
 * @s: string to be checked
 *
 * Return:string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
