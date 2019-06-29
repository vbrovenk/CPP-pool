
NAME = ex03

SRC = 	main.cpp \
		AMateria.cpp \
		Ice.cpp \
		Cure.cpp \
		Character.cpp \
		MateriaSource.cpp

HEADERS =	AMateria.hpp \
			Ice.hpp \
			Cure.hpp \
			Character.hpp \
			MateriaSource.hpp \
			ICharacter.hpp \
			IMateriaSource.hpp


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
