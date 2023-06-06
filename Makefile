NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra #-g -fsanitize=address

RM = rm -f

SRC = ft_printf.c \
	ft_putchar.c ft_putstr.c ft_strlen.c \
	ft_putnbr.c	ft_putunsigned.c \
	ft_putptr.c ft_puthex.c 

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re: fclean $(NAME)