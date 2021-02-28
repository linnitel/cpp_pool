NAME = world_on_fire

CC = clang++

SRCS = main.cpp AWeapon.cpp PowerFist.cpp PlasmaRifle.cpp SuperMutant.cpp RadScorpion.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = AWeapon.hpp PowerFist.hpp PlasmaRifle.hpp SuperMutant.hpp RadScorpion.hpp

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
