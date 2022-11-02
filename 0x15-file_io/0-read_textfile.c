#include "main.h"
/**
  * read_textfile - reads a text file and prints it to POSIX standard output
  * @filename: filename
  * @letters: letters to be read and printed.
  *
  * Return: Actual number of letters
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wr;
	char *buf;

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		free(buf);
		return (0);
	}
	rd = read(op, buf, letters);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}
	wr = write(1, buf, letters);

	if (wr == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (wr);
}
