#include "so_long.h"

void	a(t_data *map, int x, int y)
{
	static int	m;

	if (m)
	{
		m = 0;
		map->show->img = mlx_xpm_file_to_image(map->show->mlx_ptr,
				"./images/P.xpm", &map->show->w, &map->show->h);
		put_er_img(map);
		mlx_put_image_to_window(map->show->mlx_ptr, map->show->win_ptr,
			map->show->img, x * map->show->w, y * map->show->h);
		mlx_destroy_image(map->show->mlx_ptr, map->show->img);
	}
	else
	{
		m = 1;
		map->show->img = mlx_xpm_file_to_image(map->show->mlx_ptr,
				"./images/P.xpm", &map->show->w, &map->show->h);
		put_er_img(map);
		mlx_put_image_to_window(map->show->mlx_ptr, map->show->win_ptr,
			map->show->img, x * map->show->w, y * map->show->h);
		mlx_destroy_image(map->show->mlx_ptr, map->show->img);
	}
}

void	d(t_data *map, int x, int y)
{
	static int	m;

	if (m)
	{
		m = 0;
		map->show->img = mlx_xpm_file_to_image(map->show->mlx_ptr,
				"./images/P.xpm", &map->show->w, &map->show->h);
		put_er_img(map);
		mlx_put_image_to_window(map->show->mlx_ptr, map->show->win_ptr,
			map->show->img, x * map->show->w, y * map->show->h);
		mlx_destroy_image(map->show->mlx_ptr, map->show->img);
	}
	else
	{
		m = 1;
		map->show->img = mlx_xpm_file_to_image(map->show->mlx_ptr,
				"./images/P.xpm", &map->show->w, &map->show->h);
		put_er_img(map);
		mlx_put_image_to_window(map->show->mlx_ptr, map->show->win_ptr,
			map->show->img, x * map->show->w, y * map->show->h);
		mlx_destroy_image(map->show->mlx_ptr, map->show->img);
	}
}

void	w(t_data *map, int x, int y)
{
	static int	m;

	if (m)
	{
		m = 0;
		map->show->img = mlx_xpm_file_to_image(map->show->mlx_ptr,
				"./images/P.xpm", &map->show->w, &map->show->h);
		put_er_img(map);
		mlx_put_image_to_window(map->show->mlx_ptr, map->show->win_ptr,
			map->show->img, x * map->show->w, y * map->show->h);
		mlx_destroy_image(map->show->mlx_ptr, map->show->img);
	}
	else
	{
		m = 1;
		map->show->img = mlx_xpm_file_to_image(map->show->mlx_ptr,
				"./images/P.xpm", &map->show->w, &map->show->h);
		put_er_img(map);
		mlx_put_image_to_window(map->show->mlx_ptr, map->show->win_ptr,
			map->show->img, x * map->show->w, y * map->show->h);
		mlx_destroy_image(map->show->mlx_ptr, map->show->img);
	}
}

void	s(t_data *map, int x, int y)
{
	static int	m;

	if (m)
	{
		m = 0;
		map->show->img = mlx_xpm_file_to_image(map->show->mlx_ptr,
				"./images/P.xpm", &map->show->w, &map->show->h);
		put_er_img(map);
		mlx_put_image_to_window(map->show->mlx_ptr, map->show->win_ptr,
			map->show->img, x * map->show->w, y * map->show->h);
		mlx_destroy_image(map->show->mlx_ptr, map->show->img);
	}
	else
	{
		m = 1;
		map->show->img = mlx_xpm_file_to_image(map->show->mlx_ptr,
				"./images/P.xpm", &map->show->w, &map->show->h);
		put_er_img(map);
		mlx_put_image_to_window(map->show->mlx_ptr, map->show->win_ptr,
			map->show->img, x * map->show->w, y * map->show->h);
		mlx_destroy_image(map->show->mlx_ptr, map->show->img);
	}
}
