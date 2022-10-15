#include "variadic_functions.h"
/**
  * print_char - prints the char character
  * @list: the type
  */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_int - prints the int
 * @list: the type
 */
void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}
/**
 * print_float - prints the float
 * @list: the type
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
  * print_string - prints the string
  * @list: the type
  */
void print_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
  * print_all - prints anything
  * @format: list of types of arguments passed to the function
  */

void print_all(const char * const format, ...)
{
	va_list args;
	char *sep;
	print_form_t print_form[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	int i, j;

	va_start(args, format);
	i = 0;
	sep = "";
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (*print_form[j].c == format[i])
			{
				printf("%s", sep);
				print_form[j].f(args, sep);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
