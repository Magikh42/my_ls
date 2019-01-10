##
## EPITECH PROJECT, 2018
## libmy
## File description:
## Makefile
##

NAME		:=	../libmy.a

SRCS	:=	my_getnbr.c	\
		my_putchar.c	\
		my_putnbr.c		\
		my_putstr.c		\
		my_puterr.c		\
		my_revstr.c		\
		my_strcat.c		\
		my_strncat.c	\
		my_strcmp.c		\
		my_strncmp.c	\
		my_strcpy.c		\
		my_strncpy.c	\
		my_strdup.c		\
		my_strndup.c	\
		my_strlen.c		\
		my_strstr.c	\
		smalloc.c	\
		str_append.c

_SRCS		:=	$(SRCS:%=src/%)

OBJS		:=	$(_SRCS:.c=.o)

INCLUDES	:=	-I ./include/

CFLAGS		:=	-Wall -g $(INCLUDES)

all:		$(NAME)

$(NAME):	$(OBJS)
		@ar rc $(NAME) $(OBJS)
		@ranlib $(NAME)
		@cp ./include/my.h ../../include/my.h
clean:
	@rm -f $(OBJS)

fclean:	clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
.SILENT: $(OBJS)
