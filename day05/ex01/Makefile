NAME = bureaucrat

CC = clang++

SRCS = main.cpp Bureaucrat.cpp Form.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = Bureaucrat.hpp Form.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98

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
	@/bin/rm -f $(NAME)

re: fclean all
	@echo "recompile"
