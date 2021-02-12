NAME = my_aw_phonebook

CC = clang++

SRCS = phonebook.cpp myPhoneBook.cpp Contact.cpp

OBJ = $(SRCS:.cpp=.o)

HEADER = myPhoneBook.h Contact.h

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@echo "compile"
	@$(CC) $(FLAGS) $(SRCS) $(HEADER) -o $(NAME)

clean:
	@echo "cleaning .o files"
	@/bin/rm -f *.o

fclean: clean
	@echo "cleaning executable"
	@/bin/rm -f $(NAME)

re: fclean all
	@echo "recompile"
