NAME = phoneBook

SRC = 	main.cpp \
		Contact.cpp \
		PhoneBook.cpp

OBJ = $(SRC:.cpp=.o)

HEADERS =	Contact.hpp \
			PhoneBook.hpp

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(OBJ)  -o $(NAME)
	
%.o: %.cpp $(HEADERS)
	clang++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all