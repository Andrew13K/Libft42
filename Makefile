CC=cc
NAME=name
CFLAGS= -Wall -Wextra -Werror
all:$(NAME)

$(NAME):main.c ft_memchr.o
	$(CC) $(CFLAGS) main.c ft_memchr.o -o main
ft_memchr.o:
	$(CC) -c ft_memchr.c
clean:
	rm -f *.o
fclean:clean
	rm -f $(NAME)
re:fclean all