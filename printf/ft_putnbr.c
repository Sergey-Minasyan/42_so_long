

#include "so_long.h"

int	ft_putnbr(int n, unsigned int base, int type)
{
	unsigned int	number;
	int				count;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		number = n * -1;
	}
	else
		number = n;
	if (number > base - 1)
		count += ft_putnbr(number / base, base, type);
	number = number % base;
	if (number < 10)
		count += ft_putchar(number + '0');
	else if (number > 9 && type == 0)
		count += ft_putchar(number + 87);
	else if (number > 9 && type == 1)
		count += ft_putchar(number + 55);
	return (count);
}
