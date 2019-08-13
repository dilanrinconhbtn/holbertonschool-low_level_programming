#include "holberton.h"

/**
 * read_textfile - check the code for Holberton School students.
 * @filename: file name
 * @letters: amount of characters
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, counter = 0;
	char *s;

	if (filename == NULL)
		return (0);
	s = malloc(letters);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return(0);
	if (s == NULL)
		return (0);
	counter = read(fd, s, letters);
	write(STDOUT_FILENO, s, counter);
	close(fd);
	free(s);
	return (counter);
}
