# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 13:38:49 by jaehyuki          #+#    #+#              #
#    Updated: 2023/04/30 04:42:11 by jaehyuki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= PmergeMe

SRCS		= main.cpp	\
				PmergeMe.cpp

CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic #-g3 -fsanitize=address
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

re:
	make fclean
	make all

.PHONY: all clean fclean re
