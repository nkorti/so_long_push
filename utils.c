
#include "so_long.h"
char	**map_dup(t_data *map)
{
	int	i;

	i = 0;
	map->dup_map = malloc((map->lines + 1) * (sizeof(char *)));
	while (map->split_map[i])
	{
		map->dup_map[i] = ft_strdup(map->split_map[i]);
		i++;
	}
	map->dup_map[i] = 0;
	return (map->dup_map);
}

int	ft_strchr_wm(char *split_map, int c)
{
	unsigned int	i;

	i = 0;
	while (split_map[i] && (char)c == split_map[i])
		i++;
	if (i < ft_strlen(split_map))
		return (1);
	return (0);
}

int	count_line(t_data *map)
{
	map->lines = 0;
	while (map->split_map[map->lines])
		map->lines++;
	return (map->lines);
}

void	put_er_img(t_data *map)
{
	if (!map->show->img)
	{
		ft_putstr_fd("Error\nImg does not exist", 2);
		exit(1);
	}
}
