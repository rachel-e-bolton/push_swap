NAME = checker
SRC = checker_main.c
LIBS = ../libft/libft.a ../src/checker_push_swap.a
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) $(LIBS) -o $(NAME)
	mv ./$(NAME) ../

clean:
	rm -f ../$(NAME)

fclean: clean
	rm -f ../$(NAME)

re: fclean all 