NAME = libftprintf.a
CFLAGS = cc -Wall -Wextra -Werror
SRCF = $(wildcard *.c)
OBJF := $(SRCF:.c=.o)

all: $(NAME)

%.o : %.c
	cc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJF)
	ar -cr $@ $^

clean:
	rm -rf $(OBJF)

fclean: clean
	rm -rf $(NAME)

re: fclean all

setup: 
	@make
	@echo
	@make clean
	@clear
	@echo "make successfull: libft.a created 🫧"
	@echo "In order to use libftprintf.a, compile your code with libftprintf.a"
	@echo "Don't forget your .c files must have #include \"[path_to_libftprintf.h]\"."