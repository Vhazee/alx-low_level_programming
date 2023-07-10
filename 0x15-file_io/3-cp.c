#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fileDscpt);

/**
 * create_buffer - Allocates a memory of 1024 bytes for one buffer
 * @file: Name of the file buffer storing char
 *
 * Return: pointer to the new buffer
 */
char *create_buffer(char *file)
{
	char *bufferFile;

	bufferFile = malloc(sizeof(char) * 1024);

	if (bufferFile == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (bufferFile);
}

/**
 * close_file - function closes the file descriptors
 * @fileDscpt: The file descriptor to be closed
 */
void close_file(int fileDscpt)
{
	int cls;

	cls = close(fileDscpt);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileDscpt);
		exit(100);
	}
}

/**
 * main - the function copies contents of the file to another file
 * @argc: the argument numbers applied to the program
 * @argv: An array of argument pointers
 *
 * Return: 0 on success or,
 * If  argument count is incorrect - exit code 97
 * If file_from does not exist or cannot be read from - exit code 98
 * If file_to cannot be created or written to - exit code 99
 * If file_from or file_to cannot be closed - exit code 100
 */
int main(int argc, char *argv[])
{
	char *bufferFile;
	int wrt, to, from, rd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bufferFile = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, bufferFile, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bufferFile);
			exit(98);
		}

		wrt = write(to, bufferFile, rd);
		if (to == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bufferFile);
			exit(99);
		}

		rd = read(from, bufferFile, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(bufferFile);
	close_file(from);
	close_file(to);

	return (0);
}
