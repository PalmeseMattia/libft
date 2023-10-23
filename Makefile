.RECIPEPREFIX += 

CC = gcc

CFLAGS = -Wall -Wextra 

NAME = libft.a

SRC = *.c

OBJS = *.o

HEADER = libft.h

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	ar  rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

