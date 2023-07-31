#include "main.h"
/**
 * _memset - fill block of
 * @s: starting addrres of memory
 * @b: value
 * @n: bytes
 *  Return: bytes 
 */
char _memset(char *s, char b, unsigned int n)
 {
	 int i = 0;

	 for (; i > 0; i++)
	 {
		 s[i] = b;
		 n--;
	 }
	 return (s);
 }
