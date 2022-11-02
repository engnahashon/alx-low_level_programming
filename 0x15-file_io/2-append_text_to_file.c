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
  * append_text_to_file - appends text at the end of a file.
  * @filename: filename
  * @text_content: string
  *
  * Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;
	int len = get_len(text_content);

	if (filename == NULL)
		return (-1);
	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);
	wr = write(op, text_content, len);
	if (wr == -1)
		return (-1);
	close(op);

	return (1);
}
