/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:49:05 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/27 22:27:50 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat: Default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	if (!this->_brain)
	{
		std::cout << "Cat: Error : Brain allocate fail!" << std::endl;
	}
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat: copy constructor called" << std::endl;
	_brain = NULL;
	*this = copy;
}

Cat::~Cat(void)
{
	std::cout << "Cat: Destructor called" << std::endl;
	if (this->_brain)
	{
		delete this->_brain;
		this->_brain = NULL;
	}
}

void	Cat::makeSound(void) const
{
	std::cout << this->_type << " :> " << "Meow~ Meow~" << std::endl;
}

void	Cat::print_all_ideas(void) const
{
	this->_brain->print_all_ideas();
}

Cat	&Cat::operator=(const Cat &copy)
{
	std::cout << "Cat assignment operator called(deep copy)" << std::endl;
	if (this == &copy)
		return (*this);
	if (this->_brain)
	{
		delete this->_brain;
	}
	this->_type = copy._type;
	this->_brain = new Brain();
	if (!this->_brain)
	{
		std::cout << "Cat::operator=(Cat) : Brain() Allocat error!" << std::endl;
		return (*this);
	}
	*this->_brain = *copy._brain;
	return (*this);
}

Brain	*Cat::getBrain(void) const
{
	return (this->_brain);
}

std::string	Cat::getIdea(int idx) const
{
	return (this->_brain->getIdea(idx));
}

void	Cat::setIdea(int idx, std::string str)
{
	this->_brain->setIdea(idx, str);
}
