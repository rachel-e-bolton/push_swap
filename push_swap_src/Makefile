NAME = push_swap
SRC = push_swap_main.c
LIBS = ../libft/libft.a ../src/checker_push_swap.a
FLAGS = -Wall -Werror -Wextra -g

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) $(LIBS) -o ../$(NAME)

clean:
	rm -f ../$(NAME)

fclean: clean
	rm -f ../$(NAME)

re: fclean all 