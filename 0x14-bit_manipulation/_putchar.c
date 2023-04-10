#include <unistd.h>

/**
 *_putchar - prints characters
 *@c: the character to print
 *Return: 1 on succes
 *on error, -1 is returned, and errno is set appropriately 
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
