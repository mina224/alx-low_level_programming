#include "main.h"
/**
 *append_text_to_file - a function that appends text at the end of a file.
 *@filename: the file we append to.
 *@text_content: the content to append at the end the file.
 *Return: 1 succes otherwise -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t tw;
	int i, Fo;

	if (filename == NULL)
		return (-1);

	Fo = open(filename, O_WRONLY | O_APPEND);
	if (Fo == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++);
		tw = write(Fo, text_content, i);
		if (tw == -1)
			return (-1);
	}
	close(Fo);
	return (1);
}
