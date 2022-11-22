# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 09:42:00 by tpriyang          #+#    #+#              #
#    Updated: 2022/11/22 14:29:37 by tpriyang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
FLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

AR = ar rcs

RM = rm -f

SRC = $(wildcard *.c)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJ)

.PHONY: clean fclean re

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME) *.o

re: $(fclean) all


