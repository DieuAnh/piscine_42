# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thile <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/21 12:39:03 by thile             #+#    #+#              #
#    Updated: 2018/07/24 14:00:52 by thile            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = srcs/do_op.c srcs/ft_atoi.c
HEADER = includes/ft.h
CFLAGS = -Wall -Wextra -Werror

all: make_awesome
make_awesome:
		gcc $(CFLAGS) -I $(HEADER) $(SRC) -o $(NAME) 
clean:
		/bin/rm -f *.o
fclean: clean
		/bin/rm -f $(NAME)
		
re: fclean all
			
