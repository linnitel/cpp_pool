NAME = code_unclean

CC = clang++

SRCS = main.cpp AssaultTerminator.cpp Squad.cpp TacticalMarine.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = AssaultTerminator.hpp Squad.hpp TacticalMarine.hpp ISquad.hpp ISpaceMarine.hpp

FLAGS = -Wall -Werror -Wextra -g -std=c++98

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
