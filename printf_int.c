#include "main.h"

/**
 * printf_int - prints an integer
 * @args_2: argument
 * Return: number of arguments printed
 */

int printf_int(va_list args_2)
{

	int n  = va_arg(args_2, int);
	int dig, lst = n % 10, num, lap = 1;
	int i = 1;

	n = n / 10;
	dig = n;

	if (lap < 0)
	{
		_putchar('-');
		dig = -dig;
		lap = -lap;
		i++;
	}
	if (dig  > 0)
	{
		while (dig / 10 != 0)
		{
			lap = lap * 10;
			dig = dig / 10;
		}
		dig = n;
		while (lap > 0)
		{
			num = dig / lap;
			_putchar(num + '0');
			dig = dig - (num * lap);
			lap = lap / 10;
			i++
		}
	}
	_putchar(lap + '0');

	return (i);

}
#include "main.h"
/**
 * printf_d - prints a decimal
 * @args_2: arguments
 * Return: number of chars printed
 */

int printf_d(va_list args_2)
{
	int n  = va_arg(args_2, int);
	int dig, lst = n % 10, num, lap = 1;
	int i = 1;

	n = n / 10;
	dig = n;
	if (lap < 0)
	{
	_putchar('-');
		dig = -dig;
		lap = -lap;
		i++;
	}
	if (dig  > 0)
	{
		while (dig / 10 != 0)
		{
			lap = lap * 10;
			dig = dig / 10;
		}
		dig = n;
		while (lap > 0)
		{
			num = dig / lap;
			_putchar(num + '0');
			dig = dig - (num * lap);
			lap = lap / 10;
			i++
		}
	}
	_putchar(lap + '0');
	return (i);
	}