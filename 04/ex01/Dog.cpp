/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:58:37 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/1 1/27 18:04:59 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog: Default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	if (!this->_brain)
	{
		std::cout << "Dog::Dog(): Error : Brain allocate fail!" << std::endl;
	}
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog: copy constructor called" << std::endl;
	this->_brain = NULL;
	*this = copy;
}

Dog::~Dog(void)
{
	std::cout << "Dog: Destructor called" << std::endl;
	if (this->_brain)
		delete _brain;
}

void	Dog::makeSound(void) const
{
	std::cout << this->_type << " :> " << "Woof! Woof!" << std::endl;
}

void	Dog::print_all_ideas(void) const
{
	this->_brain->print_all_ideas();
}

Dog	&Dog::operator=(const Dog &copy)
{
	std::cout << "Dog: assignment operator called(deep copy)" << std::endl;
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
		std::cout << "Dog::operator=(Dog) : Brain() Allocat error!" << std::endl;
		return (*this);
	}
	*this->_brain = *copy._brain;
	return (*this);
}

Brain	*Dog::getBrain(void) const
{
	return (this->_brain);
}

std::string	Dog::getIdea(int idx) const
{
	return (this->_brain->getIdea(idx));
}

void	Dog::setIdea(int idx, std::string str)
{
	this->_brain->setIdea(idx, str);
}
