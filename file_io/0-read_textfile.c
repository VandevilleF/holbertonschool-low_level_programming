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
	char buffer[1024];

	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
	{
		close(file_d);
		return (0);
	}
	file_r = read(file_d, buffer, letters);

	file_w = write(STDOUT_FILENO, buffer, file_r);

	close(file_d);

	return (file_w);
}
