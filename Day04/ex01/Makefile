NAME = ex00

SRC = 	main.cpp \
		AWeapon.cpp \
		PlasmaRifle.cpp \
		PowerFist.cpp \
		Enemy.cpp \
		SuperMutant.cpp \
		RadScorpion.cpp \
		Character.cpp

HEADERS =	AWeapon.hpp \
			PlasmaRifle.hpp \
			PowerFist.hpp \
			Enemy.hpp \
			SuperMutant.hpp \
			RadScorpion.hpp \
			Character.hpp


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
