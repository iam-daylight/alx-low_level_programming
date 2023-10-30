#include "main.h"

/**
 * create_file - A function to create a file
 * @filename: filename.
 * @text_content: content to write in the file.
 *
 * Return: 1 on  success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int d_a;
	int n;
	int xxx;

	if (!filename)
		return (-1);

	d_a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (d_a == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	xxx = write(d_a, text_content, n);

	if (xxx == -1)
		return (-1);

	close(d_a);

	return (1);
}
