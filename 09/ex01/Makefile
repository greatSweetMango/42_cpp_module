# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 16:17:34 by jaehyuki          #+#    #+#              #
#    Updated: 2023/04/17 19:10:54 by jaehyuki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= rpn

SRCS		= main.cpp	\
				RPN.cpp

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
