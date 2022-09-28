#include "main.h"
int test_palindrome(char *str, int i, int j);
/**
  * test_palindrome - Tests of str is palindrome
  * @str: string to test
  * @i: increment
  * @j: decrement str length
  *
  * Return: 1 if palindrome, 0 otherwise
  */
int test_palindrome(char *str, int i, int j)
{
	if (i < j && str[i] == str[j])
		return (test_palindrome(str, i + 1, j - 1));
	if (str[i] != str[j])
		return (0);
	return (1);
}
/**
  * _strlen_recursion - returns length of string
  *  @s: string
  *
  * Return: length of string
  */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return(1 + _strlen_recursion(s + 1));
	return (0);
}
/**
  * returns 1 if a string is a palindrome and 0 if not.
  * @s: string
  *
  * Return: 1 if palidrome zero otherwise
  */
int is_palindrome(char *s)
{
	int i = 0;
	int j = _strlen_recursion(s) - 1;

	return (test_palindrome(s, i, j));
}
