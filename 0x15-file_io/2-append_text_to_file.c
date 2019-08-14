#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name file
 * @text_content: texto
 * Return: int -1 id fails
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int int_openf, int_writef, size = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	int_openf = open(filename, O_WRONLY | O_APPEND);

	if (text_content == NULL)
	{
		close(int_openf);
		return (1);
	}
	if (int_openf == -1)
	{
		return (-1);
	}

	while (*(text_content + size) != '\0')
	{
		size++;
	}
	int_writef = write(int_openf, text_content, size);

	if (int_writef == -1)
	{
		close(int_openf);
		return (-1);
	}
	close(int_openf);
	return (1);
}
