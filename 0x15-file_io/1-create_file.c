#include "main.h"

/**
 * create_file - function creates a file
 * @filename: it's a pointer to the file created
 * @text_content: it's a Null terminated string to write to the file
 *
 * Return: 1 (Success), else -1 (Fail) or filename is NULL
 * if text_content is NULL, create a new empty file
 */
int create_file(const char *filename, char *text_content)
{
	int len = 0;
	int fileDir, w;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fileDir = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fileDir, text_content, len);

	if (fileDir == -1 || w == -1)
		return (-1);
	close(fileDir);
	return (1);
}
