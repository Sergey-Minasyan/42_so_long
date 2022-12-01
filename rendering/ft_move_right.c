

#include "so_long.h"

void	ft_move_right(t_program *s)
{
	if (s->map.matrix[s->imgs.player.y][s->imgs.player.x + 1] == '0')
	{
		ft_fill_player(s, s->imgs.player.y, s->imgs.player.x + 1);
		ft_fill_floor(s, s->imgs.player.y, s->imgs.player.x);
		s->imgs.player.x++;
	}
	else if (s->map.matrix[s->imgs.player.y][s->imgs.player.x + 1] == 'C')
	{
		ft_fill_player(s, s->imgs.player.y, s->imgs.player.x + 1);
		ft_fill_floor(s, s->imgs.player.y, s->imgs.player.x);
		s->map.matrix[s->imgs.player.y][s->imgs.player.x + 1] = '0';
		s->map.collect--;
		s->imgs.player.x++;
	}
	else if (s->map.matrix[s->imgs.player.y][s->imgs.player.x + 1] == 'E')
	{
		if (s->map.collect)
			return ;
		ft_fill_player(s, s->imgs.player.y, s->imgs.player.x + 1);
		ft_fill_floor(s, s->imgs.player.y, s->imgs.player.x);
		ft_destroy_window(s);
	}
}
