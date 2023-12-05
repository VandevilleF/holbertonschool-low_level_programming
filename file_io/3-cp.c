#include "main.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: count number of arguments
 * @argv: list of arguments
 * Return: 0 if is successful
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, bytes_read;
	char buffer[1024];

	if (argc != 3) /*Check if no more or less than 3 arguments*/
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(argv[1], O_RDONLY); /*Open argv1 on read only*/

	if (file_from == -1)/*If file_from does not exist, or if you can not read it*/
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/*Creat new file with write onl, trunc if already exists and set rw-rw-r-- */
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (file_to == -1)/*If you can not create file_to fails*/
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from), exit(99);
	}
	bytes_read = read(file_from, buffer, sizeof(buffer));/**/

	if (bytes_read == -1) /*Check if is not unsuccessful*/
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (write(file_to, buffer, bytes_read) == -1) /*If write to file_to fails*/
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	if (close(file_from) == -1) /*If you can not close a file descriptor*/
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]), exit(100);

	if (close(file_to) == -1) /*If you can not close a file descriptor*/
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]), exit(100);

	return (0);
}
