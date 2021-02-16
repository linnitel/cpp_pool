NAME = my_aw_phonebook

CC = clang++

SRCS = phonebook.cpp myPhoneBook.class.cpp Contact.class.cpp Field.class.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = myPhoneBook.class.hpp Contact.class.hpp Field.class.hpp

FLAGS = -Wall -Werror -Wextra -g

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
