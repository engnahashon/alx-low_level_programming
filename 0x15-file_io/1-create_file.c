#include "main.h"

int get_len(char *str);
/**
  * get_len - get str len
  * @str: string
  *
  * Return: length
  */
int get_len(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
/**
  * create_file - creates a file
  * @filename: name of the file
  * @text_content: string
  *
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int op, wr;
	int len = get_len(text_content);

	if (filename == NULL)
	{
		return (-1);
	}
	op = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
	if (op == -1)
	{
		close(op)
		return (-1);
	}
	wr = write(op, text_content, len);
	if (wr == -1)
	{
		close(op);
		return (-1);
	}
	return (1);
	close (op);

}
