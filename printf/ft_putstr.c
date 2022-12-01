

#include "so_long.h"

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		count += ft_putchar(*str);
		str++;
	}
	return (count);
}
