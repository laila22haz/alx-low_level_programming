#include "main.h"

/**
 * create_file - function that creates a file
 * @filename : the first argument
 * @text_content : the second argument
 * Return: 1 on success
 * -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
		i++;
	}
		o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0644);
		w = write(o, text_content, i);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
