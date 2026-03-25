NAME	= battle

CXXC	= c++
CXXFLAGS= -Wall -Wextra -Werror -g

SRC		= src/main.cpp

OBJ		= $(addprefix .obj/, $(SRC:.cpp=.o))
INC		= -I./inc

# -- RULES -- #

all		: $(NAME)

$(NAME)	: $(OBJ)
	$(CXXC) $(CXXFLAGS) $^ -o $@

.obj/%.o: %.cpp
	@mkdir -p $(@D)
	$(CXXC) $(INC) -c $< -o $@

clean	:
	rm -rf $(OBJ)
	rm -rf .obj

fclean	: clean
	rm -f $(NAME)

re		: fclean all

vg:
	valgrind ./$(NAME)

.PHONY	: all clean fclean re
