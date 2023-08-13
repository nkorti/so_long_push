CC			=	cc
NAME		=	so_long
CFLAGS		=	-Wall -Wextra -Werror -fsanitize=address -g3

SRCS		=	utils.c \
				valide_name_map.c\
				check.c \
				1char_map.c \
				check_rectangular.c \
				map_wall.c \
				map_path.c \
				check_map_elem.c \
				read_map.c \
				show_img.c \
				move.c \
				button.c \
				so_long.c\

LIBS		=	libft.a

INCLUDES	=	$(LIBS:%=Libft/libft.a)

MLX_macos	=	-lmlx -framework OpenGL -framework AppKit

OBJ = ${SRCS:.c=.o}

all: $(LIBS) $(NAME)

$(NAME): $(OBJ)
	$(CC) -I includes $(CFLAGS) $(OBJ) $(INCLUDES) $(MLX_macos) -o $(NAME)

libs: $(LIBS)

$(LIBS):
	@make -C Libft

clean:
	@rm -f ${OBJ}
	@make -C Libft clean

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(INCLUDES)
	@make -C Libft fclean

re: fclean all

.PHONY: all