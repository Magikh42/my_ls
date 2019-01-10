##
## EPITECH PROJECT, 2018
## Project Name
## File description:
## Makefile
##

NAME		:=	my_ls

_SRCS		:=	main.c	\
				options.c

SRCS		:=	$(_SRCS:%=src/%)

INCLUDES	:=	-I ./include/

LIBS		:=	-L ./lib/ -l my

OBJS		:=	$(SRCS:.c=.o)

CFLAGS		:=	-Wall -Wextra -g $(INCLUDES)

all:		$(NAME)

lib:
		@make --no-print-directory -C ./lib/my/

$(NAME):	lib $(OBJS)
		@gcc -o $(NAME) $(OBJS) $(LIBS)

clean:
		@make --no-print-directory -C ./lib/my clean
		@rm -f $(OBJS)

fclean: clean
		@make --no-print-directory -C ./lib/my fclean
		@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re lib all
.SILENT: $(OBJS)
