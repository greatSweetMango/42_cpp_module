# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 16:17:34 by jaehyuki          #+#    #+#              #
#    Updated: 2022/12/04 15:55:55 by jaehyuki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= coffee_making

SRCS		= main.cpp						\
				Bureaucrat.cpp				\
				AForm.cpp					\
				PresidentialPardonForm.cpp	\
				RobotomyRequestForm.cpp		\
				ShrubberyCreationForm.cpp	\
				Intern.cpp
CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic -g
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
