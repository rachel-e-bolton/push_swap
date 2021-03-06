# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/07 19:11:18 by rbolton           #+#    #+#              #
#    Updated: 2020/05/18 00:41:40 by rbolton          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra

all: random
	(cd src; make all)
	(cd libft; make all)
	(cd checker_src; make all)
	(cd push_swap_src; make all)

clean:
	(cd src; make clean)
	(cd libft; make clean)

fclean:
	(cd src; make fclean)
	(cd libft; make fclean)
	(cd checker_src; make fclean)
	(cd push_swap_src; make fclean)

re:
	(cd src; make re)
	(cd libft; make re)
	(cd checker_src; make re)
	(cd push_swap_src; make re)

re-checker: all
	(cd checker_src; make re)

re-pushswap: all
	(cd push_swap_src; make re)

re-src: all
	(cd src; make re)

re-libft: all
	(cd libft; make re)

random:
	$(CC) $(FLAGS) random.c ./libft/libft.a -o random
	@echo "\033[4;32m== random compiled    ==\033[0m"	