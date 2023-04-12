#include "main.h"

/**
 *create_file - a function that creates file
 * *filename: is the name of file to create
 * *text_content: is NULL
 *Return: 1 on succes, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
  int x, i, len = 0;

if (!filename)
return (-1);

i = open("filename", O_RDWR | O_CREAT | O_TRUNC, 0600);
if (i == -1)
return (-1);

if (text_content != NULL)
{
  for (len = 0; text_content[len]; len++);
}
x = write(i, text_content, len);
if (x == -1)
return (-1);


close(i);
return (1);
}
