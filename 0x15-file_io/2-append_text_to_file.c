#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int cd;
	int y;
	int pwr;

	if (!filename)
		return (-1);

	cd = open(filename, O_WRONLY | O_APPEND);

	if (cd == -1)
		return (-1);

	if (text_content)
	{
		for (y = 0; text_content[y]; y++)
			;

		pwr = write(cd, text_content, y);

		if (pwr == -1)
			return (-1);
	}

	close(cd);

	return (1);
}
