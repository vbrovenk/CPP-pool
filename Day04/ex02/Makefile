NAME = ex02

SRC = 	main.cpp \
		Squad.cpp \
		TacticalMarine.cpp \
		AssaultTerminator.cpp \

HEADERS =	Squad.hpp \
			TacticalMarine.hpp \
			AssaultTerminator.hpp \
			ISpaceMarine.hpp \
			ISquad.hpp \


OBJ = $(SRC:.cpp=.o)


FLAGS = #-Wall -Wextra -Werror

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
