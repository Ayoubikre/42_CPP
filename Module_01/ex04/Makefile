CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = 

OBJ = $(SRC:.cpp=.o)

NAME = 

all: clean $(NAME)  

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) && echo && ./$(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
