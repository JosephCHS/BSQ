##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Made by Joseph C.
##

.PHONY: all clean fclean re debug

SRC	=	src/error.c	\
		src/my_bsq.c	\
		src/first_line_with_nb.c	\
		src/convert_array.c	\
		src/lgth_line.c	\
		src/square_algo.c	\
		src/total_lgth.c	\

OBJ	:=	$(SRC:.c=.o)

CC	:=	gcc
RM	:=	rm -f

NAME	:=	bsq

CFLAGS	:=	-W -Wall -Wextra -Werror -Iinclude -O2
DEBUGFLAGS :=	-g3 -ggdb

all:	$(NAME)

$(NAME):	$(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(CFLAGS) || (echo "Build failed" && exit 1)
	@echo "Build successful"

debug: CFLAGS += $(DEBUGFLAGS)
debug: re

%.o:	%.c
	@$(CC) $(CFLAGS) -c $< -o $@ || (echo "Compilation of $< failed" && exit 1)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
