#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include "main.h"


/**
 * append_text_to_file - entry point
 *
 * @filename: the name of the file
 * @text_content: a NULL terminated string to add at the end of the file
 *
 * Description: function that appends text at the end of a file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, count = 0, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			count++;
			i++;
		}
		w = write(fd, text_content, count);
		if (w == -1)
		{
			return (-1);
		}
	}
	return (1);
}
