#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int openfile, counter = 0;

	if (filename == NULL)
		return (-1);
	openfile = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (openfile == -1)
		return (0);
	if (text_content == NULL)
		text_content = "";
	while (text_content[counter])
	{
		counter++;
	}
	write (openfile, text_content, counter);
	close (openfile);
	return (1);
}
