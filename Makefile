##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Made by Joseph C.
##

SRC	=	src/error.c	\
		src/my_bsq.c	\
		src/first_line_with_nb.c	\
		src/convert_array.c	\
		src/lgth_line.c	\
		src/square_algo.c	\
		src/total_lgth.c	\

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

NAME	=	bsq

CFLAGS	=	-W -Wall -Wextra -Iinclude

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(SRC) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
