NAME = a.out

FLAGS = -Wall -Wextra -Werror

SRC = main.cpp  AWeapon.cpp PlasmaRifle.cpp PowerFist.cpp Enemy.cpp SuperMutant.cpp RadScorpion.cpp Character.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	clang++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
	