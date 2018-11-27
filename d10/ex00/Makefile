# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thile <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/21 11:13:39 by thile             #+#    #+#              #
#    Updated: 2018/07/24 00:47:07 by thile            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
HEADER = includes/
CFLAGS = -Wall -Wextra -Werror
COBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o


all: make_awesome
make_awesome:
		 gcc $(CFLAGS) -I $(HEADER) -c $(SRC)
		 ar rc $(NAME) $(COBJECTS)
		 ranlib $(NAME)
clean:
		/bin/rm -f *.o
fclean: clean
		/bin/rm -f $(NAME)
re: fclean all
