#include "main.h"

/**
 * e_xit - prints error messages
 * @error: exit value
 * @s: either of the two file names
 * @fd: file descriptor
 * Return: 0 on success
 */
int e_xit(int error, char *s, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}

/**
 * main - copies one file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, _nread, _nwrite;
	char *buff[1024];

	if (argc != 3)
		e_xit(97, NULL, 0);

	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
		e_xit(99, argv[2], 0);

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		e_xit(98, argv[1], 0);

	while ((_nread = read(fd1, buff, 1024)) != 0)
	{
		if (_nread == -1)
			e_xit(98, argv[1], 0);
		_nwrite = write(fd2, buff, _nread);
		if (_nwrite == -1)
			e_xit(99, argv[2], 0);
	}
	close(fd2) == -1 ? (e_xit(100, NULL, fd2)) : close(fd2);
	close(fd1) == -1 ? (e_xit(100, NULL, fd1)) : close(fd1);
	return (0);
}
