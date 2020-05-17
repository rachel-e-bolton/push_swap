NAME = push_swap
SRC = push_swap_main.c
LIBS = -I../src ../libft/libft.a ../src/checker_push_swap.a
FLAGS = -Wall -Werror -Wextra -g

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) $(LIBS) -o ../$(NAME)

fclean:
	rm -f ../$(NAME)

re: fclean all 