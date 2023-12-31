#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_d;

	if (filename == NULL)
		return (-1);

	/*Creatan empty file if text_content is NULL*/
	if (text_content == NULL)
		text_content = "";

	/*Creat file with write only and flag trunc and set perm to rw--*/
	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_d == -1)
		return (-1);

	write(file_d, text_content, strlen(text_content));

	close(file_d);

	return (1);
}
