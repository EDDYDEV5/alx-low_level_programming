#include "main.h"

/**
 *_isalpha - a function that checks for alphabetic character
 *@c: the char to be checked
 *Return:1 if c is a letter, lowercase or uppercase, 0 if not
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
