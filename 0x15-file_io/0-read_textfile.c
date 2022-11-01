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
	int fd, number_of_bytes_readed, number_of_bytes_printed;
	size_t i = 0;
	char *buf;

	buf =  (char *)malloc(sizeof(char) * (letters + 1));
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
	number_of_bytes_readed = read(fd, buf, letters);
	if (number_of_bytes_readed == -1)
	{

		return (0);
	}
	buf[letters + 1] = '\0';
	while (buf[i] != '\0')
	{
		i++;
	}
	if (i != letters && i != (size_t)number_of_bytes_readed)
	{
		return (0);
	}
	number_of_bytes_printed = write(1, buf, i);
	if (number_of_bytes_printed == -1 || number_of_bytes_printed != (int)i)
	{
		return (0);
	}
	close(fd);
	return (number_of_bytes_readed);
}
