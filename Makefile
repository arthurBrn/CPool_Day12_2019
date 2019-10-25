##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Make file
##

SRC	=	my_cat.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_cat

RM	=	rm -f

INCLUDE	=	-I include

CFLAGS	=	-W -Wall -Wshadow -Wextra -Werror $(INCLUDE)

LIB_DIR	=	lib/my

LIB	=	-L $(LIB_DIR) -lmy

LDFLAGS	=	$(LIB)

CC	=	gcc

all: $(NAME)

$(NAME):	$(OBJ)
	$(MAKE)	-C $(LIB_DIR)
	$(CC) -o $(NAME) $(OBJ) $(LIB) $(CFLAGS)

clean:
	$(RM) $(OBJ)
	$(MAKE) -C $(LIB_DIR) fclean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIB_DIR) fclean

re:	fclean all
