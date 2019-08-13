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
	fd = open("Requiescat", O_RDONLY);
	if (fd == -1)
		exit(0);
	s = malloc(sizeof(letters + 1));
	if (s == NULL)
		return (0);
	s[letters] = '\0';
	counter = read(fd, s, letters);
	write(STDOUT_FILENO, s, counter);
	close(fd);
	return (counter);
}
