# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvieira <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/20 12:10:47 by rvieira           #+#    #+#              #
#    Updated: 2017/07/20 17:41:50 by rvieira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:
.SUFFIXES:

NAME=libft.a

SRC_DIR=srcs/
INC_DIR=includes/

SRCS=\
	 ft_putchar.c\
	 ft_putstr.c\
	 ft_strcmp.c\
	 ft_strlen.c\
	 ft_swap.c

OBJ=$(SRC:.c=.o)

CC=gcc
CFLAGS= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) -I $(INC_DIR) $(CFLAGS) $(SRC)
	@$(AR) $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
