NAME	= BuildCHpp

SRCS	= build_chpp.c ft_strjoin.c ft_printf_fd.c ft_capitalize.c ft_strlen.c

OBJS	= $(SRCS:.c=.o)

CC		= cc

RM		= rm -rf

INC		= -I includes/

CFLAGS	= -Wall -Werror -Wextra 

%.o: %.c
		$(CC) $(CFLAGS) $(INC) -o $@ -c $?

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
