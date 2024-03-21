#include "main.h"
#include <stdio.h>

/**
 * read_textfile - Reads a text file and prints it to the standard output.
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 *         0 if the file cannot be opened or read, or if filename is NULL.
 *         0 if memory allocation fails.
 *         0 if write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file_descriptor;
	char *buffer;
	size_t chars_read;

	if (*filename == '\0')
		return (0);
	if (access(filename, R_OK) == -1)
	{
		fprintf(stderr);
		return (0);
	}
	file_descriptor = fopen(filename, "r");

	if (file_descriptor == NULL)
		return (0);

	buffer = (char *)malloc(letters + 1);

	if (buffer == NULL)
	{
		fclose(file_descriptor);
		return (0);
	}

	chars_read = fread(buffer, sizeof(char), letters, file_descriptor);

	if (ferror(file_descriptor))
	{
		free(buffer);
		fclose(file_descriptor);
		return (0);
	}

	buffer[chars_read] = '\0';
	printf("%s", buffer);
	free(buffer);

	fclose(file_descriptor);
	return (chars_read);
}
