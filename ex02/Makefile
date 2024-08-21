NAME = main
CC = c++
FLAGS = -std=c++98 -Wall -Werror -Wextra

HEADERS = Array.tpp

SRC = main.cpp \

OBJ = main.o \

all:$(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME)

re: clean all

.PHONY:all clean fclean re
