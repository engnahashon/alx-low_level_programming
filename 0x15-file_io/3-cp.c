#include "main.h"
/**
  * main - copies the content of a file to another file
  * @argc: argument count
  * @argv: argument variable
  *
  * Return: 0 on success
  */
int main(int argc, char *argv[])
{
	int op, rd, wr, cl, count = 8192;
	char *buf;

	buf = malloc(count);
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	op = open(argv[1], O_RDONLY);
	rd = read(op, buf, count);
	if (rd == -1 || op == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cl = close(op);
	if (cl == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", op);
		exit(100);
	}
	op = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	wr = write(op, buf, count);
	if (wr == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	free(buf);
	cl = close(op);
	if (cl == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", op);
		exit(100);
	}
	return (0);
}
