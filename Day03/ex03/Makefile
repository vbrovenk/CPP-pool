NAME = ex03

SRC = 	main.cpp \
		FragTrap.cpp \
		ScavTrap.cpp \
		ClapTrap.cpp \
		NinjaTrap.cpp

HEADERS =	FragTrap.hpp \
			ScavTrap.hpp \
			ClapTrap.hpp \
			NinjaTrap.hpp


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
