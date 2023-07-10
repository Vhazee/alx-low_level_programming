#include "main.h"

/**
 * append_text_to_file - this function appends text at the end of a file
 * @filename: pointer pointing to the file name
 * @text_content: Null terminated string to add at the end of file
 *
 * Return: 1 (Success) if file exists or -1 (Fail) if it doesn't
 * if filename is NULL, return -1
 * if text_content is NULL, do not add anything to file
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int opn, wrt;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wrt = write(opn, text_content, len);

	if (opn == -1 || wrt == -1)
		return (-1);
	close(opn);
	return (1);
}
