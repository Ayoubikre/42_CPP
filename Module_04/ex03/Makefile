CC = c++

CFLAGS = -Wall -std=c++98
# CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp 

OBJ = $(SRC:.cpp=.o)

HEAD= main.hpp AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp

NAME = ex3

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