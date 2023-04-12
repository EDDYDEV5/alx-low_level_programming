#include "main.h"
#include <string.h>
/**
 *create_file - a function that creates file
 * *filename: is the name of file to create
 * *text_content: is NULL
 *Return: 1 on succes, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int x, i;

if (!filename)
return (-1);

i = open("filename", O_RDWR | O_CREAT | O_TRUNC, 0600);
if (i == -1)
return (-1);

if (text_content)
{
  x = write(i, text_content, strlen(text_content));
if (x == -1)
return (-1);
}

close(i);
return (1);
}
