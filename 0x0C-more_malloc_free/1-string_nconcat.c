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
	char *con;
	unsigned int ln = n, idx;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (idx = 0; s1[idx]; idx++)
		ln++;
	con = malloc(sizeof(char) * (ln + 1));
	if (con == NULL)
		return (NULL);
	ln = 0;
	for (idx = 0; s1[idx]; idx++)
		con[ln++] = s1[idx];
	for (idx = 0 ; s2[idx] && idx < n; idx++)
		con[ln++] = s2[idx];
	con[ln] = '\0';
	return (con);
}
