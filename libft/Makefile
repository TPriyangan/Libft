# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpriyang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 09:42:00 by tpriyang          #+#    #+#              #
#    Updated: 2022/11/21 13:59:38 by tpriyang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc -Wall -Wextra -Werror
AR = ar rcs
RM = /bin/rm -f *.o
SRC =AREMPLIR.c

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRC)

.PHONY: clean fclean re

clean:
	$(RM)

fclean: clean
	$(RM) $(NAME)

re: fclean all


