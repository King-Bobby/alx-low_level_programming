#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: what to write in the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, _nwrite, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC | 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (len = 0; text_content[len]; len++)
		;
	len = len - 1;
	_nwrite = write(fd, text_content, len);
	if (_nwrite == -1 || _nwrite != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (-1);
}
