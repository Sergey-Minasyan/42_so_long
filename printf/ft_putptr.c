

#include "so_long.h"

int	ft_putptr(void *ptr)
{
	int					count;

	write(1, "0x", 2);
	count = 2;
	count += ft_putnbr_unsigned((unsigned long long)ptr, 16, 0);
	return (count);
}
