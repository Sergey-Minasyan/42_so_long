

#include "so_long.h"

void	ft_move_down(t_program *s)
{
	if (s->map.matrix[s->imgs.player.y + 1][s->imgs.player.x] == '0')
	{
		ft_fill_player(s, s->imgs.player.y + 1, s->imgs.player.x);
		ft_fill_floor(s, s->imgs.player.y, s->imgs.player.x);
		s->imgs.player.y++;
	}
	else if (s->map.matrix[s->imgs.player.y + 1][s->imgs.player.x] == 'C')
	{
		ft_fill_player(s, s->imgs.player.y + 1, s->imgs.player.x);
		ft_fill_floor(s, s->imgs.player.y, s->imgs.player.x);
		s->map.matrix[s->imgs.player.y + 1][s->imgs.player.x] = '0';
		s->map.collect--;
		s->imgs.player.y++;
	}
	else if (s->map.matrix[s->imgs.player.y + 1][s->imgs.player.x] == 'E')
	{
		if (s->map.collect)
			return ;
		ft_fill_player(s, s->imgs.player.y + 1, s->imgs.player.x);
		ft_fill_floor(s, s->imgs.player.y, s->imgs.player.x);
		ft_destroy_window(s);
	}
}
