

#include "so_long.h"

void	ft_exit_error(char *str)
{
	if (str && *str)
	{
		write(2, str, ft_strlen(str));
		write(2, "\n", 1);
		exit(EXIT_FAILURE);
	}
}
