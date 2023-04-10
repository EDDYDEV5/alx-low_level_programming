#include "main.h"

/**
 * binary_to_uint - converts binary numbers to unsigned int
 * @k: string containing the binary numbers
 *
 * Return: the converted numbers
 */
unsigned int binary_to_uint(const char *k)
{
int i;
unsigned int con_num = 0;
if (!k)
return (0);
for (i = 0; k[i]; i++)
{
if (k[i] < '0' || k[i] > '1')
return (0);
con_num = 2 * con_num + (k[i] - '0');
}
return (con_num);
}
