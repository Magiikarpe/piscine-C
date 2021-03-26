##
## EPITECH PROJECT, 2019
## makefile
## File description:
## Compile the libmy.
##

SRC	=	my_strlen.c		\
		my_strcpy.c		\
		my_putchar.c		\
		my_putstr.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a


all:	$(NAME)
$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)
	cp $(NAME) ../
	mkdir -p ../../include
	cp my.h ../../include
clean:
		rm -f *.o core

fclean:		clean
		rm $(NAME)
