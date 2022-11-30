/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:43:46 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/29 14:51:43 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain: Default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain: copy constructor called" << std::endl;
	*this = copy;
}

Brain::~Brain(void)
{
	std::cout << "Brain: Destructor called" << std::endl;
}

void	Brain::print_all_ideas(void) const
{
	for (int i = 0; i < 100; i++)
	{
		if (this->_ideas[i].length() > 0)
			std::cout << i << " : " << this->_ideas[i] << std::endl;
	}
}

Brain	&Brain::operator=(const Brain &copy)
{
	std::cout << "Brain: assignment operator called" << std::endl;
	if (this == &copy)
		return (*this);
	for (int i = 0; i < 100; i++)
	{
		if (copy._ideas[i].length() > 0)
			this->_ideas[i].assign(copy._ideas[i]);
	}
	return (*this);
}

std::string Brain::getIdea(int idx) const
{
	if (idx < 0 || idx >= 100)
	{
		std::cout << "Brain::getIdea : Error : Wrong Index!!!" << std::endl;
		return "";
	}
	return (this->_ideas[idx]);
}

void	Brain::setIdea(int idx, std::string str)
{
	if (idx < 0 || idx >= 100)
	{
		std::cout << "Brain::getIdea : Error : Wrong Index!!!" << std::endl;
		return ;
	}
	this->_ideas[idx].assign(str);
}
