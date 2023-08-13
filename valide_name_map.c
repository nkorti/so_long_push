#include"so_long.h"

int	name_map(char *name)
{
	if (ft_strncmp(name + (ft_strlen(name) - 4), ".ber", 4))
		return (1);
	return (0);
}