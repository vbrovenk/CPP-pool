NAME = ex00

SRC = 	main.cpp \
		Sorcerer.cpp \
		Victim.cpp \
		Peon.cpp \
		Ork.cpp

HEADERS =	Sorcerer.hpp \
			Victim.hpp \
			Peon.hpp \
			Ork.hpp


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
