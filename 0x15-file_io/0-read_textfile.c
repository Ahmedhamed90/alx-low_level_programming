#include "main.h"

/**
 * read_textfile - read text from a file
 *
 * @filename: name of file
 * @letters: number
 *
 * Return: number
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char but[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &but[0], bytes);
	close(fd);
	return (bytes);
}
