CC = c++

# CFLAGS = -Wall -Werror -Wextra -std=c++98
CFLAGS = -std=c++98

SRC = main.cpp RPN.cpp

OBJ = $(SRC:.cpp=.o)

HEAD = RPN.hpp

NAME = RPN

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

