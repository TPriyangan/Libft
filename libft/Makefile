# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 09:42:00 by tpriyang          #+#    #+#              #
#    Updated: 2022/11/25 10:04:40 by tpriyang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:.c=.o)

AR = ar rcs

RM = rm -f

SRCS = $(wildcard *.c)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

.PHONY: clean fclean re

so:
	gcc -nostartfiles -shared -o libft.so $(OBJS)

clean:
	$(RM) *.o

fclean:
	$(RM) $(NAME) *.o

re: $(fclean) all


