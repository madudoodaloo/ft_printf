SRCF = tester.c
TESTS = tester.c
EXEC = ../libftprintf.a

all: test

FORCE:

$(EXEC): FORCE
	@$(MAKE) -C ..
test:
	cc -Wall -Werror -Wextra $(TESTS) $(EXEC) -o test
	./test

