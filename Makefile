CC=cc
NAME=name
CFLAGS= -Wall -Wextra -Werror
all:$(NAME)

$(NAME):main.c ft_substr.o ft_strlen.o
	$(CC) $(CFLAGS) main.c ft_substr.o ft_strlen.o -o main
ft_substr.o:
	$(CC) -c ft_substr.c
ft_strlen.o:
	$(CC) -c ft_strlen.c
clean:
	rm -f *.o
fclean:clean
	rm -f $(NAME)
re:fclean all