#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int cd;
	ssize_t pta, psd;
	char *bus;

	if (!filename)
		return (0);

	cd = open(filename, O_RDONLY);

	if (cd == -1)
		return (0);

	bus = malloc(sizeof(char) * (letters));
	if (!bus)
		return (0);

	pta = read(cd, bus, letters);
	psd = write(STDOUT_FILENO, bus, pta);

	close(cd);

	free(bus);

	return (psd);
}
