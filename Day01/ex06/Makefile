NAME = weapon

SRC = 	main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp

HEADERS =	Weapon.hpp \
			HumanA.hpp \
			HumanB.hpp


OBJ = $(SRC:.cpp=.o)


FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(OBJ) -o $(NAME)
	
%.o: %.cpp $(HEADERS)
	clang++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
