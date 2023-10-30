#include "main.h"

/**
 * append_text_to_file -A function to  append text at the end of a file
 * @filename: filename.
 * @text_content:  content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int d_a;
	int n;
	int xxx;

	if (!filename)
		return (-1);

	d_a = open(filename, O_WRONLY | O_APPEND);

	if (d_a == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;

		xxx = write(d_a, text_content, n);

		if (xxx == -1)
			return (-1);
	}

	close(d_a);

	return (1);
}
