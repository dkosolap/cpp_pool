NAME = acc

FLAG = -Wall -Wextra -Werror

SRC = main.cpp Account.class.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(OBJ) -o $(NAME)

%.o : %.cpp
	clang++ -c $< -o $@

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
