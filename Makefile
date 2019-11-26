# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/21 15:08:13 by fbertazz          #+#    #+#              #
#    Updated: 2019/11/24 14:55:19 by fbertazz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = fillit.c map.c piece.c read.c verify.c \

OBJ = $(SRC:.c=.o)

INC = -I includes

LIBFT =	libft/libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME) $(LIBFT) -g

$(OBJ): $(LIBFT)
		$(CC) $(FLAGS) -c $(SRC)

$(LIBFT):
		make -C ./libft/

clean:
		rm -f $(OBJ)
			make clean -C ./libft/

fclean: clean
		rm -f $(NAME)
			make fclean -C ./libft/

re: fclean all

.PHONY : all, re, clean, flcean
