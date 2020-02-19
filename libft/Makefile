# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdilotso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/24 09:32:04 by tdilotso          #+#    #+#              #
#    Updated: 2018/06/13 14:15:43 by tdilotso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_bzero.c\
	  ft_memchr.c\
	  ft_memset.c\
	  ft_memcpy.c\
	  ft_memccpy.c\
	  ft_strlen.c\
	  ft_memalloc.c\
	  ft_isdigit.c\
	  ft_isalpha.c\
	  ft_isprint.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_isascii.c\
	  ft_isalnum.c\
	  ft_memmove.c\
	  ft_atoi.c\
	  ft_strcpy.c\
	  ft_memcmp.c\
	  ft_strdup.c\
	  ft_strncpy.c\
	  ft_strchr.c\
	  ft_memdel.c\
	  ft_strnew.c\
	  ft_strdel.c\
	  ft_strclr.c\
	  ft_striter.c\
	  ft_striteri.c\
	  ft_strmap.c\
	  ft_strmapi.c\
	  ft_strlen.c\
	  ft_memdel.c\
	  ft_putchar.c\
	  ft_putstr.c\
	  ft_putendl.c\
	  ft_strstr.c\
	  ft_strnstr.c\
	  ft_strcat.c\
	  ft_strcmp.c\
	  ft_striteri.c\
	  ft_striter.c\
	  ft_strsub.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_strncat.c\
	  ft_strequ.c\
	  ft_strnequ.c\
	  ft_strlcat.c\
	  ft_strrchr.c\
	  ft_strncmp.c\
	  ft_itoa.c\
	  ft_putnbr.c\
	  ft_putnbr_fd.c\
	  ft_strtrim.c\
	  ft_strjoin.c\
	  ft_strsplit.c\
	  get_next_line.c\

CC = gcc

FLAGS = -Wall -Werror -Wextra

OBJECT = ft_bzero.o\
		 ft_memchr.o\
		 ft_memset.o\
		 ft_memcpy.o\
		 ft_memccpy.o\
		 ft_strlen.o\
		 ft_memalloc.o\
		 ft_isdigit.o\
		 ft_isalpha.o\
		 ft_isprint.o\
		 ft_toupper.o\
		 ft_tolower.o\
		 ft_isascii.o\
		 ft_isalnum.o\
		 ft_memmove.o\
		 ft_atoi.o\
		 ft_strcpy.o\
		 ft_memcmp.o\
		 ft_strdup.o\
		 ft_strncpy.o\
		 ft_strchr.o\
		 ft_memdel.o\
		 ft_strnew.o\
		 ft_strdel.o\
		 ft_strclr.o\
		 ft_striter.o\
		 ft_striteri.o\
		 ft_strmap.o\
		 ft_strmapi.o\
		 ft_strlen.o\
		 ft_memdel.o\
		 ft_putchar.o\
		 ft_putstr.o\
		 ft_putendl.o\
		 ft_strstr.o\
		 ft_strnstr.o\
		 ft_strcat.o\
		 ft_strcmp.o\
		 ft_striteri.o\
		 ft_striter.o\
		 ft_strsub.o\
		ft_putchar_fd.o\
		ft_putstr_fd.o\
		ft_putendl_fd.o\
		ft_strncat.o\
		ft_strequ.o\
		ft_strnequ.o\
		ft_strlcat.o\
		ft_strrchr.o\
		ft_strncmp.o\
		ft_itoa.o\
		ft_putnbr.o\
		ft_putnbr_fd.o\
		ft_strtrim.o\
		ft_strjoin.o\
		ft_strsplit.o\
		get_next_line.o\

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all
