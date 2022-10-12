#include "main.h"
/**
  * main - prints the minimum number of coins to make
  * change for an amount of money
  * argc: arg count
  * argv: arg vector
  *
  * Return: zero on success, 1 on Error
  */
int main(int argc, char *argv[])
{
	int coins = 0, mon;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mon = atoi(argv[1]);
		if (mon < 0)
		{
			printf("Error\n");
			return (1);
		}
		while (mon != 0)
		{
			if (mon >= 25)
			{
				coins = mon/25;
				mon = mon % 25;

			}
			else if(mon >= 20)
			{
				coins = coins + mon / 10;
				mon = mon % 10;
			}
			else if (mon >= 10)
			{
				coins = coins + mon / 5;
				mon = mon % 5;
			}
			else if (mon >= 8)
			{
				coins = coins + mon / 2;
				mon = mon % 2;
			}
			else if (mon >= 1)
			{
				coins = coins + 1;
				mon = 0;
			}

		}
		printf("%d\n", coins);

	}
	return (0);
}
