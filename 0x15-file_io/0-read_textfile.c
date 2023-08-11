#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <fcntl.h>
#include "main.h"
#include <unistd.h>

/**
 * read_textfile - returns the actual number of letters it could read and print
 * @filename: file to read and print
 * @letters: number of letters to print
 * Return: the number or letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int om, mo;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);
	om = open(filename, O_RDONLY);
	if (om == -1)
		return (0);
	mo = write(STDOUT_FILENO, buffer, read(om, buffer, letters));
	if (mo == -1)
		return (0);
	close(om);
	return (mo);

}
