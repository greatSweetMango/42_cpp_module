# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 16:17:34 by jaehyuki          #+#    #+#              #
#    Updated: 2022/11/27 17:31:34 by jaehyuki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= polymorphism

SRCS		= main.cpp			\
				Animal.cpp		\
				Cat.cpp			\
				Dog.cpp			\
				WrongAnimal.cpp	\
				WrongCat.cpp

CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic
RM			= rm -rf
				
OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

%.o		: %.cpp
			$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME)	: $(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean	:
			$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
