NAME = phonebook

FLAG = -Wall -Wextra -Werror

SRC = main.cpp Contact.class.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAG) $(OBJ) -o $(NAME)

%.o : %.cpp
	clang++ $(FLAG) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
