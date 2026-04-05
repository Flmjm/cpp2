NAME	=	Fixed
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp\
			Fixed.cpp
OBJS	=	$(SRCS:.cpp=.o)
RM		=	rm -rf


all : $(NAME)

%.o : %.cpp
	@$(CC) -c $< -o $@

$(NAME) : $(OBJS)
	@$(CC) $(OBJS) $(FLAGS) -o $(NAME)

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
