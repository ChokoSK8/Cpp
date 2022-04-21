NAME	= convert

SRCS	= main.cpp

OBJS	= $(SRCS:.cpp=.o)

FLAGS	= -Wall -Werror -Wextra

INC		= -I includes/

RM		= rm -rf

%.o: %.cpp
		c++ $(FLAGS) $(INC) -o $@ -c $?

all:	$(NAME)

$(NAME):	$(OBJS)
		c++ $(FLAGS) $(INC) $(OBJS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
