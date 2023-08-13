#include"so_long.h"

char	**read_map(int fd, t_data *map)
{
	char	*line;

	map->str = ft_calloc(1, 1);
	while (1)
	{
		line = get_next_line(fd);
		if (line == '\0')
			break ;
		map->str = ft_strjoin(map->str, line);
		free(line);
	}
	map->split_map = ft_split(map->str, '\n');
	return (map->split_map);
}
