CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

HEAD= main.hpp AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp Character.hpp IMateriaSource.hpp MateriaSource.hpp

NAME = ex3

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