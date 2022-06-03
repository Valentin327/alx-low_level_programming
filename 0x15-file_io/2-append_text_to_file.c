#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - function that appends text
 * at the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to add
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;
	int count = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND, 0666);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while(text_content[count])
		{
			count++;
		}
		wr = write(fd, text_content, count);
		if (wr != count)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
