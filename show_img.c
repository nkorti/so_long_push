#include "so_long.h"
void	print_m(t_data *map)
{
	ft_putstr_fd("the cureent number of mouvements: ", 1);
	ft_putnbr_fd(map->mov, 1);
	ft_putchar_fd('\n', 1);
}

void	put_img(t_data *map, char *path_img, char c)
{
	map->show->img = mlx_xpm_file_to_image(map->show->mlx_ptr, path_img,
			&map->show->w, &map->show->h);
	put_er_img(map);
	if (map->split_map[map->y][map->x] == c)
		mlx_put_image_to_window(map->show->mlx_ptr, map->show->win_ptr,
			map->show->img, map->x * map->show->w, map->y * map->show->h);
	mlx_destroy_image(map->show->mlx_ptr, map->show->img);
}

void	showmap(t_data *map)
{
	print_m(map);
	map->y = 0;
	while (map->split_map[map->y])
	{
		map->x = 0;
		while (map->split_map[map->y][map->x])
		{
			put_img(map, "./images/space.xpm", '0');
			put_img(map, "./images/wall.xpm", '1');
			put_img(map, "./images/collect.xpm", 'C');
			put_img(map, "./images/exit_1.xpm", 'E');
			put_img(map, "./images/P.xpm", 'P');
			map->x++;
		}
		map->y++;
	}
}

void	move_sup(t_data *map)
{
	map->y = 0;
	while (map->split_map[map->y])
	{
		map->x = 0;
		while (map->split_map[map->y][map->x])
		{
			if (map->check_c == map->count[1])
				put_img(map, "./images/exit_2.xpm", 'E');
			map->x++;
		}
		map->y++;
	}
}
