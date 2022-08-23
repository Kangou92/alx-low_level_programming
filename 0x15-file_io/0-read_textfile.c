#include "main.h"

/**
 * read_textfile - reads the content of the text file
 *
 * @filename: name of the file to read
 * letters: number characters in the text file
 * Return: the number of letters to read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, j, k;
	int *buf;
	if (!filename)
		return (0);
	j = open(filename, O_RDONLY);
	if (j < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	i = read(j, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	close(j);
	k = write(STDOUT_FILENO, buf, i);
	if (k < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (k);
}
