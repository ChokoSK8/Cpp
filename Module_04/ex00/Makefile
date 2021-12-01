NAME	= animal

SRCS	= WrongCat.cpp WrongAnimal.cpp Dog.cpp Cat.cpp Animal.cpp main.cpp

OBJS	= $(SRCS:.cpp=.o)

FLAGS	= -Wall -Werror -Wextra

INC		= -I includes/

RM		= rm -rf

%.o: %.c
		clang++ $(FLAGS) $(INC) -o $@ -c $?

all:	$(NAME)

$(NAME):	$(OBJS)
				clang++ $(FLAGS) $(INC) $(OBJS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
