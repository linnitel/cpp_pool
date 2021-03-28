NAME = world_on_fire

CC = clang++

SRCS = main.cpp AWeapon.cpp PowerFist.cpp PlasmaRifle.cpp WirtsLeg.cpp Enemy.cpp SuperMutant.cpp RadScorpion.cpp EvilBabushka.cpp Character.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = AWeapon.hpp PowerFist.hpp PlasmaRifle.hpp WirtsLeg.hpp Enemy.cpp SuperMutant.hpp RadScorpion.hpp EvilBabushka.hpp Character.hpp

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
