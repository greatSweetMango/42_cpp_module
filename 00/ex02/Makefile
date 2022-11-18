# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 16:17:34 by jaehyuki          #+#    #+#              #
#    Updated: 2022/11/18 18:37:25 by jaehyuki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= account

CC			= clang++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

SRCS		= tests.cpp	\
				Account.cpp

OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

%.o		: %.c
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME)	: $(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean	:
			$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
