#include <stdio.h>
/**
 *main - printing the size of various computer types.
 *Return: 0
 */
int main(void)
{
char a;
int b;
long int l;
long long int g;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(g));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
