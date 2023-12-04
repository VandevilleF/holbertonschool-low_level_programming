#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: pointers to the files
 * @letters:  number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_d, file_r, file_w;
	char *buffer;

	/*Allocate memory for the buffer*/
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	/*Check if filename is NULL*/
	if (filename == NULL)
		return (0);

	/*Open filename for read only*/
	file_d = open(filename, O_RDONLY);

	/*Check if opened is not fail*/
	if (file_d == -1)
	{
		free(buffer);
		return (0);
	}
	/*Read data from file*/
	file_r = read(file_d, buffer, letters);

	/*Write the read content to stdout*/
	file_w = write(STDOUT_FILENO, buffer, file_r);

	/*Close file*/
	close(file_d);

	return (file_w);
}
