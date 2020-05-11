NAME = checker
SRC = checker_main.c
LIBS = -I../src ../libft/libft.a ../src/*.c
FLAGS = -Wall -Werror -Wextra -g

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) $(LIBS) -o ../$(NAME)

clean:
	rm -f ../$(NAME)

fclean: clean
	rm -f ../$(NAME)

re: fclean all 