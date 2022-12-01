

#include "so_long.h"

void	ft_free_array(char **arr)
{
	if (!arr || !*arr)
		return ;
	free(*arr);
	*arr = NULL;
}

void	ft_free_matrix(char ***matrix)
{
	int	i;

	if (!matrix || !*matrix)
		return ;
	i = 0;
	while ((*matrix)[i])
	{
		ft_free_array(*matrix + i);
		i++;
	}
	free(*matrix);
	*matrix = NULL;
}
