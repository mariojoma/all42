# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: majorge- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/08 17:07:59 by majorge-          #+#    #+#              #
#    Updated: 2025/02/08 17:08:10 by majorge-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFILES=$(shell find src -type f -name "*.c")
HEADERS_DIR=includes/
CFLAGS=-Wall -Wextra -Werror -I $(HEADERS_DIR)
DEBUG_FLAGS=-Wall -Wextra -Werror
NAME=skyscraper
OBJS=${CFILES:.c=.o}

all: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf src/*.o

debug:
	$(CC) $(DEBUG_FLAGS) -g debug/test.c

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean debug fclean re
