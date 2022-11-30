# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 16:17:34 by jaehyuki          #+#    #+#              #
#    Updated: 2022/11/28 21:19:10 by jaehyuki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= abstract

SRCS		= main.cpp			\
				AMateria.cpp	\
				Character.cpp	\
				Cure.cpp		\
				Ice.cpp			\
				MateriaSource.cpp

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
