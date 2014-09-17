##
## Makefile for Makefile in /home/loisel_k/travail/C-Prog-elem/pushswap/src
## 
## Made by kevin loiseleur
## Login   <loisel_k@epitech.net>
## 
## Started on  Fri Jan  2 16:11:47 2014 Kevin LOISELEUR
## Last update Thu Jan  2 17:49:34 2014 Kevin LOISELEUR
##
##

NAME		= push_swap

SRC		= algo.c \
		list.c \
		list2.c \
		ope.c \
		pushswap.c

OBJ		= $(SRC:.c=.o)

CC		= cc

RM		= rm -f

CP		= cp

LIB		= -lmy -L../

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB)
	$(CP) $(NAME) ../

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ)
	$(RM) $(NAME)
	$(RM) ../$(NAME)

re: fclean all