#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include "main.h"


/**
 * create_file - entry point
 *
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Description: function that creates a file
 *
 * Return: 1 on success, -1 on failure(file can not be created or written)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, count = 0, i = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		count = 0;
	}
	else
	{
		while (text_content[i] != '\0')
		{
			count++;
			i++;
		}
	}
	w = write(fd, text_content, count);
	if (w == -1)
	{
		write(STDOUT_FILENO, "fails", 5);
		return (-1);
	}
	return (1);
}
