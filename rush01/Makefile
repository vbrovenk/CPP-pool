NAME = ft_gkrellm

SRC = 	main.cpp \
		Info.cpp \
		TextMode.cpp \
		GraphicalMode.cpp

OBJ = $(addprefix obj/, $(SRC:.cpp=.o))

HEADERS = 	hpp/IMonitorModule.hpp \
			hpp/IMonitorDisplay.hpp \
			hpp/Info.hpp \
			hpp/TextMode.hpp \
			hpp/GraphicalMode.hpp


FLAGS =  -Wall -Wextra -Werror

INCLUDES =	-I./frameworks/SDL2.framework/Headers/ \
			-I./frameworks/SDL2_ttf.framework/Headers/

FRAMEWORKS = -F./frameworks -rpath ./frameworks -framework SDL2\
												 -framework SDL2_ttf
			

all: $(NAME)

$(NAME): obj $(OBJ)
	clang++ $(OBJ) -o $(NAME) $(FRAMEWORKS) -lncurses
	
obj/%.o: src/%.cpp $(HEADERS)
	clang++ $(FLAGS) -c $< -o $@ -I hpp $(INCLUDES)

obj:
	@mkdir obj

clean:
	@rm -rf obj

fclean: clean
	rm -rf $(NAME)

re: fclean all
