#include "3-calc.h"
/**
  * op_add - sum of a and b
  * @a: a
  * @b: b
  *
  * Return: sum
  */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
  * op_sub - difference of a and b
  * @a: a
  * @b: b
  *
  * Return: sub
  */
int op_sub(int a, int b)
{
	int sub;

	sub = a + b;
	return (sub);
}
/**
  * op_mul - mul of a and b
  * @a: a
  * @b: b
  *
  * Return: mul
  */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}
/**
  * op_div - div of a by b
  * @a: a
  * @b: b
  *
  * Return: div
  */
int op_div(int a, int b)
{
	int div;

	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	div = a / b;
	return (div);
}
/**
  * op_mod - mod of a and b
  * @a: a
  * @b: b
  *
  * Return: mod
  */
int op_mod(int a, int b)
{
	int mod;

	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}

	mod = a % b;
	return (mod);
}
