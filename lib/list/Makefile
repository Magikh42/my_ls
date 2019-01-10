##
## EPITECH PROJECT, 2018
## libmy
## File description:
## Makefile
##

NAME		:=	../liblist.a

SRCS		:=	list.c		\
			list_back.c	\
			list_front.c


_SRCS		:=	$(SRCS:%=src/%)

OBJS		:=	$(_SRCS:.c=.o)

INCLUDES	:=	-I ./include/

CFLAGS		:=	-Wall -g $(INCLUDES)

all:		$(NAME)

$(NAME):	$(OBJS)
		@ar rc $(NAME) $(OBJS)
		@ranlib $(NAME)
		@cp ./include/list.h ../../include/list.h
clean:
	@rm -f $(OBJS)

fclean:	clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
.SILENT: $(OBJS)
