

#include "so_long.h"

void	ft_fill_player(t_program *s, int i, int j)
{
	mlx_put_image_to_window(s->mlx, s->win, s->imgs.player.ptr,
		j * TEXTURE_X, i * TEXTURE_Y);
}

void	ft_fill_floor(t_program *s, int i, int j)
{
	mlx_put_image_to_window(s->mlx, s->win, s->imgs.floor,
		j * TEXTURE_X, i * TEXTURE_Y);
}

void	ft_fill_exit(t_program *s, int i, int j)
{
	mlx_put_image_to_window(s->mlx, s->win, s->imgs.exit,
		j * TEXTURE_X, i * TEXTURE_Y);
}
