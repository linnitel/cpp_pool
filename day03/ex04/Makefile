NAME = clap_trap

CC = clang++

SRCS = main.cpp FragTrap.cpp ScavTrap.cpp ClapTrap.cpp NinjaTrap.cpp SuperTrap.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = FragTrap.hpp ScavTrap.hpp ClapTrap.hpp NinjaTrap.hpp SuperTrap.hpp

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
