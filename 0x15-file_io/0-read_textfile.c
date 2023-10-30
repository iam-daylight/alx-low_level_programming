#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - A function that reads a text file and prints it
 * @filename : The name of the file to read
 * @letters : The numbers of letters to read
 * Return: number of letters that was read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int doc_a;
	int r, w;
	char *buff;

	if (filename == NULL)
		return (0);
	doc_a = open(filename, O_RDONLY);
	if (doc_a == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(doc_a);
		return (0);
	}

	r = read(doc_a, buff, letters);
	close(doc_a);
	if (r == -1)
	{
		free(buff);
		return (0);
	}
	w = write(STDOUT_FILENO, buff, r);
	free(buff);
	if (r != w)
		return (0);
	return (w);
}
