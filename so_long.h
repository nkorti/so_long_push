#ifndef SO_LONG_H
# define SO_LONG_H

#include "mlx.h"
#include "Libft/libft.h"
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

typedef struct s_show
{
	void		*mlx_ptr;
	void		*win_ptr;
	void		*img;
	int			w;
	int			h;
}				t_show;

typedef struct s_player
{
	int			pos_x;
	int			pos_y;
}				t_player;

typedef struct s_data
{
	int			fd;
	char		*str;
	char		**split_map;
	int			y;
	int			x;
	int			lines;
	int			len;
	char		**dup_map;
	int			count[5];
	int			check_c;
	int			keycode;
	int			mov;
	t_show		*show;
	t_player	*player;
}				t_data;

char			**read_map(int fd, t_data *map);
int				composed_map(t_data *map);
int				onechar_map(t_data *map, t_player *player);
int				rectangular_map(t_data *map);
int				no_line(t_data *map);
int				wall_map(t_data *map);
void			flood_fill_p(int pos_x, int pos_y, char **map);
void			flood_fill_e(int pos_x, int pos_y, char **map);
int				check_path(t_data *map, char c);
int				name_map(char *name);
void			all_check(t_data *map, t_player *player);
void			put_img(t_data *map, char *path_img, char c);
void			showmap(t_data *map);
int				move_map(int keycode, t_data *map );
int				count_line(t_data *map);
char			**map_dup(t_data *map);
int				ft_strchr_wm(char *map_split, int c);
void			print_m(t_data *map);
void			a(t_data *map, int x, int y);
void			d(t_data *map, int x, int y);
void			w(t_data *map, int x, int y);
void			s(t_data *map, int x, int y);
void			move_sup(t_data *map);
void			put_er_img(t_data *map);












#endif