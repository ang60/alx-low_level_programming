#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int cd;
	int x;
	int pwr;

	if (!filename)
		return (-1);

	cd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (cd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (x = 0; text_content[x]; x++)
		;

	pwr = write(cd, text_content, x);

	if (pwr == -1)
		return (-1);

	close(cd);

	return (1);
}
