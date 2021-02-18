NAME = megaphone

CC = clang++

SRCS = megaphone.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98

all:
	@echo "compile"
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@echo "cleaning .o files"
	@/bin/rm -f *.o

fclean: clean
	@echo "cleaning executable"
	@/bin/rm -f $(NAME)

re: fclean all
	@echo "recompile"
