CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp Contact.cpp

OBJ = $(SRC:.cpp=.o)

HEAD= main.hpp Contact.hpp

NAME = PhoneBook

all: clean $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) && echo && ./$(NAME)

%.o: %.cpp $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
