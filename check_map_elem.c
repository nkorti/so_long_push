#include"so_long.h"

int	composed_map(t_data *map)
{
	map->y = 0;
	while (map->split_map[map->y])
	{
		map->x = 0;
		while (map->split_map[map->y][map->x])
		{
			if (map->split_map[map->y][map->x] != '0'
				&& map->split_map[map->y][map->x] != '1'
				&& map->split_map[map->y][map->x] != 'C'
				&& map->split_map[map->y][map->x] != 'E'
				&& map->split_map[map->y][map->x] != 'P')
				return (1);
			map->x++;
		}
		map->y++;
	}
	return (0);
}