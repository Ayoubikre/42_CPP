CC = c++

CFLAGS = -Wall -std=c++98
# CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp Fixed.cpp Point.cpp bsp.cpp

OBJ = $(SRC:.cpp=.o)

HEAD= Fixed.hpp Point.hpp

NAME = fixed

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

