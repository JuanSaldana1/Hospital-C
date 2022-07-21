# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 19:22:33 by jsaldana          #+#    #+#              #
#    Updated: 2022/07/20 14:40:15 by jsaldana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Hospital
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = main.c
LIB = lib/libc.h
RESDIR = res/

all: $(NAME)
$(NAME):
	$(CC) -I $(LIB) $(CFLAGS) $(SRC) -o $(NAME)
fclean:
	rm -f $(NAME)
re: fclean all
