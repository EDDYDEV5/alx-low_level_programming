#include "main.h"

/**
 *print_last_digit - a function that prints the last digit of a number
 *@n: the int to extract the last digit from
 *Return:value of the last digit
 */

int print_last_digit(int n)
{
int a;

a = n % 10;

if (n > 0)
{
return (a);
}
else
return (-a);
}
