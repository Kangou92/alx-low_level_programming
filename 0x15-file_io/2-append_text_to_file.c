#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 *
 * @filename: name of the file
 * @text_content: null terminated string
 * Return: integer
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int f, a, b = 0;

		if (!filename)
			return (-1);
		f = open(filename, O_WRONLY | O_APPEND);
		if (f < 0)
			return (-1);
		if (text_content)
		{
			while (text_content[b])
				b++;
			a = write(f, text_content, b);
			if (a != b)
				return (-1);
		}
		close(f);
		return (1);
}
