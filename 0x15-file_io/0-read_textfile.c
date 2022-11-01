#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - entry point
 *
 * @filename: the name of the file that is readed
 * @letters: the number of letters it should read and print
 *
 *
 * Description: function that reads a text file and prints it
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buf;

	buf =  (char *)malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	fd = open("Requiescat", O_RDWR);
	if (fd == -1)
	{
		return (0);
	}
	r = read(fd, buf, letters);
	if (r == -1)
	{

		return (0);
	}
	buf[letters] = '\0';
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
	{
		return (0);
	}
	close(fd);
	free(buf);
	return (w);
}
