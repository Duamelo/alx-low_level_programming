#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include "main.h"


/**
 * cp - entry point
 *
 * @file_to: the name of file to be copied
 * @file_from: the name of file to be filled by the content of file_to
 *
 *
 * Description: programme that copies the content of a file to another file
 *
 *
 * Return: exit code 97, 98, 99 or 100 according to the type of error
 */
void cp(const char *file_from, const char *file_to)
{
	int fd_to, fd_from, r_from, w_to, c_from, c_to;
	char *buf;

	buf = (char *)malloc(sizeof(char) * 1025);
	if (buf == NULL)
		exit(0);
	fd_from = open(file_from, O_TRUNC | O_RDONLY);
	fd_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	r_from = read(fd_from, buf, 1024);
	buf[1024] = '\0';
	w_to = write(fd_to, buf, 1024);
	if (fd_from == -1 || r_from == -1)
	{
		dprintf(2, "Error: Can't read  from  file %s\n", file_from);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	if (w_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	c_from = close(fd_from);
	c_to = close(fd_to);
	free(buf);
	if (c_from == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", c_from);
		exit(100);
	}
	if (c_to == -1)
	{
		dprintf(2, "Error:  Can't clase fd %d\n", c_to);
		exit(100);
	}
}
/**
 * main - entry point
 *
 * @ac: quantity of arguments
 * @ar: arguments
 *
 * Description: test cp function
 *
 * Return: 0 as success
 */
int main(int ac, char *ar[])
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(ar[1], ar[2]);
	return (0);
}
