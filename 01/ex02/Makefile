# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 16:17:34 by jaehyuki          #+#    #+#              #
#    Updated: 2022/11/16 21:10:59 by jaehyuki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombie

CC			= clang++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic
RM			= rm -rf

SRCS		= main.cpp
OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

%.o		: %.c
			$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME)	: $(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean	:
			$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
