CC=cc
NAME=name
OBJ_DIR=obj
CFLAGS= -Wall -Wextra -Werror
SRC=$(wildcard *.c)
OBJ=$(SRC:%.c=$(OBJ_DIR)/%.o)
all:$(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
$(OBJ_DIR)/%.o:%.c
	@mkdir $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ_DIR)
fclean:clean
	rm -f $(NAME)
re:fclean all