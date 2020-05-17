# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/10 16:44:47 by rbolton           #+#    #+#              #
#    Updated: 2020/05/18 00:29:43 by rbolton          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker_push_swap.a
SRC = */*.c *.c
OBJECTS = *.o
FLAGS = -Wall -Werror -Wextra -g

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all 

all: $(NAME)