NAME = brainfuck

SRC = 	main.cpp \
		BrainFuck.cpp \
		InstructionNextCell.cpp

HEADERS =	BrainFuck.hpp \
			IInstruction.hpp \
			InstructionNextCell.cpp

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
