#include "so_long.h"

static void	check_arg(int argc, char *argv[], t_data *map)
{
	if (argc != 2)
	{
		ft_putstr_fd("Error:\nInvalid number of arg\nTry ./so_long 'map.ber'", 2);
		exit(1);
	}
	else if (name_map(argv[1]) == 1)
	{
		ft_putstr_fd("Error:\nInvalid file name\nTry ./so_long 'map.ber'", 2);
		exit(1);
	}
	map->fd = open(argv[1], O_RDONLY | O_DIRECTORY);
	if (map->fd > 0)
	{
		ft_putstr_fd("Error:\nIt's a directory", 2);
		exit(1);
	}
	map->fd = open(argv[1], O_RDONLY);
	if (map->fd < 0)
	{
		ft_putstr_fd("Error:\nMap file does not exist", 2);
		exit(1);
	}
}

int	main(int argc, char *argv[])
{
	t_data		m;
	t_player	player;
	t_show		s;

	check_arg(argc, argv, &m);
	m.show = &s;
	m.player = &player;
	m.split_map = read_map(m.fd, &m);
	all_check(&m, &player);
	m.show->mlx_ptr = mlx_init();
	m.len = ft_strlen(m.split_map[0]);
	s.win_ptr = mlx_new_window(s.mlx_ptr, 70 * m.len, 70 * m.lines, "So_long");
	m.keycode = 2;
	showmap(&m);
	m.check_c = 0;
	m.mov = 0;
	mlx_hook(m.show->win_ptr, 2, 0, move_map, &m);
	mlx_hook(m.show->win_ptr, 17, 0, (void *)exit, &m);
	mlx_loop(m.show->mlx_ptr);
	return (0);
}
