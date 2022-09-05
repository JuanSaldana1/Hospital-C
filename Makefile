# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 19:22:33 by jsaldana          #+#    #+#              #
#   Updated: 2022/09/05 18:26:09 by jsaldana         ###   ########.fr       # #
#                                                                              #
# **************************************************************************** #

NAME = Hospital
CC = gcc
CFLAGS = -Wall -Werror -Wextra -fsanitize=address -g3
SRC = main.c src/Functions.c
LIB = lib/
RESDIR = res/

OBJS = $(SRC:.c=.o)

all: $(NAME)
$(NAME):
	$(CC) -I $(LIB)*.h $(CFLAGS) $(SRC)

clean:
	@rm -f $(OBJS)
	@echo "\033[93mAll .o Files Removed"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[95mLibrary Removed"

re: fclean all

.PHONY: all fclean clean re
