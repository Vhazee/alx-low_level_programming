#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function read a text file and prints to standard output
 * @filename: a text file used to read
 * @letters: is the number of letters that needs to be read
 * Return: w- actual number of letters read and printed
 * if filename is NULL or fails , return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fileDir;
	ssize_t r;
	ssize_t w;
	char *buff;

	fileDir = open(filename, O_RDONLY);
	if (fileDir == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	r = read(fileDir, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(fileDir);
	return (w);
}
