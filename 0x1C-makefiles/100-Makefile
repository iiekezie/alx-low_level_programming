CC = gcc
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
NAME = school
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) *~ $(NAME)

oclean:
	$(RM) $(OBJ)

fclean: clean oclean
	$(RM) $(NAME)

re: fclean all

$(OBJ): m.h

.PHONY: all clean oclean fclean re