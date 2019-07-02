NAME = ex01

SRC = 	main.cpp \
		Bureaucrat.cpp \
		Form.cpp

HEADERS =	Bureaucrat.hpp \
			Form.hpp \


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
