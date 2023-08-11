#include "main.h"
/**
 * *string_nconcat - concatenates n bytes of a stringto ano
 * @s1: string to append too
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to s1
 * Return: pointer to the resulting
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int ln = n, idx;

	if (s1 == NULL)
		s1 = "";
	for (idx = 0; s1[idx]; idx)
		ln++;
	con = malloc(sizeof(char) * (ln + 1));
	if (con = NULL)
		return (NULL);
	ln = 0;
	for (idx = 0; s1[idx]; idx++)
		con[ln++] = s1[idx];
	for (idx = 0; s2[idx] && idx < n; idx++)
		con[ln++] = s2[idx];
	con[ln] = '\0';
	return (con):
}
