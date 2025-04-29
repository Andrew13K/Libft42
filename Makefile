CC=cc
NAME=name
CFLAGS= -Wall -Wextra -Werror
all:$(NAME)

$(NAME):main.c ft_strdup.o
	$(CC) $(CFLAGS) main.c ft_strdup.o -o main
ft_strdup.o:
	$(CC) -c ft_strdup.c
clean:
	rm -f *.o
fclean:clean
	rm -f $(NAME)
re:fclean all