#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of a text file
 * @text_content: content of file
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openfile, counter = 0;

	if (filename == NULL)
		return (-1);
	openfile = open(filename, O_WRONLY | O_APPEND);
	if (openfile == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[counter])
		counter++;
	write(openfile, text_content, counter);
	close(openfile);
	return (1);
}
