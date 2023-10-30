#include "main.h"
#include <stdio.h>

/**
 * error_file - function that checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main -A function to check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int ff, ft, ec;
	ssize_t nc, aaa;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	ff = open(argv[1], O_RDONLY);
	ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(ff, ff, argv);

	nc = 1024;
	while (nc == 1024)
	{
		nc = read(ff, buf, 1024);
		if (nc == -1)
			error_file(-1, 0, argv);
		aaa = write(ft, buf, nc);
		if (aaa == -1)
			error_file(0, -1, argv);
	}

	ec = close(ff);
	if (ec == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
		exit(100);
	}

	ec = close(ft);
	if (ec == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
		exit(100);
	}
	return (0);
}
