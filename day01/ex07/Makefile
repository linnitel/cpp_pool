NAME = replace

CC = clang++

SRCS = main.cpp File.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = File.hpp

FLAGS = -Wall -Werror -Wextra -g -std=c++98

.PHONY: all clean fclean bonus re test1 test2

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	@echo "compile"
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	@echo "cleaning .o files"
	@/bin/rm -f *.o

fclean: clean
	@echo "cleaning executable"
	@/bin/rm -f $(NAME) test/*.replace

re: fclean all
	@echo "recompile"

test1:
	./$(NAME) this some test/test_1.txt

test2:
	./$(NAME) "Lorem" POSSUM test/test_2