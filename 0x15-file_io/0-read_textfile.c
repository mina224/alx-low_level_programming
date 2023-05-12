#include "main.h"
/**
 *read_textfile -  a function that reads a text file and prints
 *it to the POSIX standard output.
 *@filename: file to read from.
 *@letters: number of letters to read from the file.
 *Return: number of letters it could read and print otherwise 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t dread = 0;
	char *buffer = NULL;
	int Fo = 0;

	if (filename == NULL)
		return (0);

	Fo = open(filename, O_RDONLY);
	if (Fo == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(Fo);
		return (0);
	}
	dread = read(Fo, buffer, letters);
	if (dread == -1)
	{
		close(Fo);
		free(buffer);
		return (0);
	}
	buffer[dread] = '\0';
	if (write(STDOUT_FILENO, buffer, dread) == -1)
	{
		close(Fo);
		free(buffer);
		return (0);
	}
	close(Fo);
	free(buffer);
	return (dread);
}
