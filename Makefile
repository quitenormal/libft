NAME = a.out
FLAGS = -Wall -Werror -Wextra
SRC = main.c
#Change SRC to include other files outside of the libft library

all: $(NAME)

$(NAME) : $(SRC)
	gcc $(FLAGS) -c ft_*.c
	ar rsc libft.a ft_*.o
	rm ft_*.o
	gcc $(FLAGS) $(SRC) -L. -lft
#	@./${NAME}

# Prevent error from file names that equal to the label in the Makefile
.PHONY: all re clean fclean

clean:
	@rm *.o
	@rm $(NAME)

fclean:
	touch libft.a
	@rm libft.a
	@rm -f $(NAME)

re: fclean all
