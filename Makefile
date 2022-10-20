NAME = minishell

SRC =	./srcs/main.c \
	./srcs/parser.c \

OBJ = $(SRC:.c=.o)

DEPS = $(OBJ:.o=.d)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

LDFLAGS= -pthread

all: $(NAME)

%.o:  %.c 
	${CC} ${CFLAGS} -MMD -c $< -o $@

$(NAME) : $(OBJ)
	$(MAKE) -C libft 
	$(CC) $(OBJ) -Llibft -lft -o $(NAME)

clean:
	rm -f $(OBJ)
	rm -f $(DEPS)
	$(MAKE) -C libft clean

norm:
	norminette ./srcs/ ./inc

fclean: clean
	rm -f $(NAME) libft/libft.a

re: fclean all

.PHONY: all clean norm fclean re

-include $(DEPS)