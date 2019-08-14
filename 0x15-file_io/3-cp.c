#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * @argc: size
 * @argv: character.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int file_to, file_from, readfrom, closeto, closefrom;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	readfrom = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (readfrom != 0)
	{
		write(file_to, buffer, readfrom);
		readfrom = read(file_from, buffer, 1024);
	}
	closefrom = close(file_from);
	if (closefrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	closeto = close(file_to);
	if (closeto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
