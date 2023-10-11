#include "main.h"

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
	unsigned int i;
	int k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i + n + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	for (j = 0; j < n && (s2[j] != '\0'); j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
