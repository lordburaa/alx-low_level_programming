#include<unistd.h>
/**
 * main - printf that piece of art is useful \" -dora korpar,
 * no printf and puts
 * Return: Always 1
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19", 59);
return (1);
}
