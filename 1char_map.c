#include"so_long.h"

static void	onechar_sup(t_data *map, t_player *player)
{
	if (map->split_map[map->y][map->x] == 'P')
	{
		player->pos_x = map->x;
		player->pos_y = map->y;
		map->count[0]++;
	}
	if (map->split_map[map->y][map->x] == 'C')
		map->count[1]++;
	if (map->split_map[map->y][map->x] == 'E')
		map->count[2]++;
	if (map->split_map[map->y][map->x] == '0')
		map->count[3]++;
	if (map->split_map[map->y][map->x] == '1')
		map->count[4]++;
}

int	onechar_map(t_data *map, t_player *player)
{
	map->count[0] = 0;
	map->count[1] = 0;
	map->count[2] = 0;
	map->count[3] = 0;
	map->count[4] = 0;
	map->y = 0;
	while (map->split_map[map->y])
	{
		map->x = 0;
		while (map->split_map[map->y][map->x])
		{
			onechar_sup(map, player);
			map->x++;
		}
		map->y++;
	}
	if (map->count[0] != 1 || map->count[1] == 0 || map->count[2] != 1
		|| map->count[3] == 0 || map->count[4] == 0)
		return (1);
	return (0);
}