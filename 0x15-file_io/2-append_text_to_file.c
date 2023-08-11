#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <fcntl.h>
#include "main.h"
#include <unistd.h>

/**
 *  append_text_to_file - create a file
 * @filename: name of the file to create
 * @text_content: string to write the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int om, mo, counter = 0;
	char *buffer;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[counter] != '\0')
		counter++;
	buffer = malloc(counter * sizeof(char));
	if (buffer == NULL)
		return (-1);
	om = open(filename, O_RDWR | O_APPEND);
	if (om == -1)
		return (-1);
	mo = write(om, text_content, counter);
	if (mo == NULL)
		return (-1);
	close(om);
	free(buffer);
	return (mo);
}
