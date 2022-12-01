

#include "so_long.h"

void	ft_fill_textures(t_img *imgs, void *mlx)
{
	int	width;
	int	height;

	imgs->collect = mlx_xpm_file_to_image(mlx, MAP_C, &width, &height);
	if (imgs->collect == NULL)
		ft_exit_error("Cant Open Collectible Texture");
	imgs->exit = mlx_xpm_file_to_image(mlx, MAP_E, &width, &height);
	if (imgs->exit == NULL)
		ft_exit_error("Cant Open Exit Texture");
	imgs->wall = mlx_xpm_file_to_image(mlx, MAP_W, &width, &height);
	if (imgs->wall == NULL)
		ft_exit_error("Cant Open Wall Texture");
	imgs->floor = mlx_xpm_file_to_image(mlx, MAP_0, &width, &height);
	if (imgs->floor == NULL)
		ft_exit_error("Cant Open Floor Texture");
	(imgs->player.ptr) = mlx_xpm_file_to_image(mlx, MAP_P, &width, &height);
	if ((imgs->player.ptr) == NULL)
		ft_exit_error("Cant Open Player Texture");
}
