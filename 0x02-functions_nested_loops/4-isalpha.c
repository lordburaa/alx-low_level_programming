#include "main.h"
/**
 * _isalpha - checks alphabetic character
 * Return: Always 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
