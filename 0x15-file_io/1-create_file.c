#include "main.h"
/**
 * create_file - create a file named filename
 *
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 if success and -1 if not
*/


int create_file(const char *filename, char *text_content)
{
	int i, k, l = 0;

	if (!filename)
		return (-1);
	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (i < 0)
		return (-1);
	if (text_content)
	{
		while (*(text_content + k))
		{
			k++;
			l = write(i, text_content, k);
			if (l != k)
				return (-1);
		}
	}
	close(i);
	return (1);
}

