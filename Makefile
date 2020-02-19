NAME = fdf
COMP = gcc
FLAGS = -Wall -Werror -Wextra -std=c99
LIB_F = -I libft/ 
LIB_FA = libft/libft.a
LIB_G = -L libft/ -L minilibxOSX -lmlx -framework OpenGL -framework Appkit
FUNCS = main \
		draw_calc \
		line_draw \
		map_read \
		projection \
		scale_and_rotate \
		keys \

SRCC = $(addsuffix .c, $(FUNCS))
SRCO = $(addsuffix .o, $(FUNCS))

HF = libft/libft.h 
LIB = ./libft/libft.a
INCLUDES = -I./libft
all: $(NAME)

$(NAME):	$(SRCO)
	@make -C libft/ clean
	@$(COMP) $(FLAGS) -I $(LIB) -c $(SRCC)
	$(COMP) -o $(NAME) $(SRCO) -lm -L libft/ -lft -lmlx -framework OpenGL -framework Appkit
clean:
	rm -f $(SRCO)

fclean: clean
	@make -C libft/ fclean
	rm -f $(NAME)

re: fclean all

