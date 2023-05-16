NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

SRC = 

OBJ = $(SRC:.c = .o)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
		RM 
