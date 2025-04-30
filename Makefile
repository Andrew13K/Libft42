CC=cc
NAME=libft.a
OBJ_DIR=obj/
CFLAGS= -Wall -Wextra -Werror
SRC:=$(wildcard *.c)
OBJ:=$(patsubst %.c,$(OBJ_DIR)/%.o,$(SRC))

all:$(OBJ_DIR) $(NAME)
$(NAME):$(OBJ)
	ar rcs $@ $^
$(OBJ_DIR)/%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(OBJ_DIR):
	mkdir -p $@
clean:
	rm -f $(OBJ)
fclean:clean
	rm -f $(NAME)
re:fclean all