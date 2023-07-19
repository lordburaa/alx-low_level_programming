#include "main.h"
/**
 * main - islower
 * char checked
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return(0);
}
