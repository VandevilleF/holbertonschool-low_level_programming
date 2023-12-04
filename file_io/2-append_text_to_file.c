#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, file_w;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	/*Open file with write only and add text_content at the end with O_APPEND*/
	file_d = open(filename, O_WRONLY | O_APPEND);

	/*Check if file opening is unsucess*/
	if (file_d == -1)
		return (-1);

	/*Write the content at the end of the file*/
	file_w = write(file_d, text_content, strlen(text_content));

	if (file_w == -1)
	{
		close(file_d);
		return (-1);
	}
	close(file_d);

	return (1);
}
