# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obeaj <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/26 15:30:28 by obeaj             #+#    #+#              #
#    Updated: 2021/08/26 15:41:14 by obeaj            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c
OBJ = $(SRC:.c=.o)
INCLUDE = includes/ft.h

all: $(NAME)
$(NAME) :
	$(CC) $(FLAGS) -c $(SRC) -I $(INCLUDE)
	mv ft*.o srcs/
	ar rcs $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)

re : fclean all
