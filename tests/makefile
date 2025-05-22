CC=cc
RM=rm -f
CFLAGS=-Wall -Werror -Wextra
CRITERION_FLAG=-lcriterion
BSD_FLAG=-lbsd
SRC_TEST:=$(wildcard *.c)
SRC_FUNC:=$(wildcard ../libft_files/*.c)
SRC:=$(SRC_FUNC) $(SRC_TEST)
OBJ:=$(SRC:.c=.o)
NAME=testing

test:$(NAME)
$(NAME):$(OBJ)
	$(CC) $(CRITERION_FLAG) $(BSD_FLAG) $(CFLAGS) $(OBJ) -o $(NAME)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
run_%: test_%.c ../libft_files/%.c
	$(CC) $(CFLAGS) $^ $(CRITERION_FLAG) $(BSD_FLAG) -o $@
	./$@
clean:
	$(RM) $(OBJ) $(NAME) run_*
fclean: clean
	$(RM) $(NAME)
re: fclean test

.PHONY: test clean fclean re