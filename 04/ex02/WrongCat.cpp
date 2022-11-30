/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:11:18 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/27 22:09:24 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat: Default constructor called" << std::endl;
	this->_type = "WrongCat";
	this->_brain = new Brain();
	if (!this->_brain)
	{
		std::cout << "WrongCat: Error : Brain alloWrongCate fail!" << std::endl;
	}
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "WrongCat: copy constructor called" << std::endl;
	_brain = NULL;
	*this = copy;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat: Destructor called" << std::endl;
	if (this->_brain)
	{
		delete this->_brain;
		this->_brain = NULL;
	}
}

void	WrongCat::makeSound(void) const
{
	std::cout << this->_type << " :> " << "Meow~ Meow~" << std::endl;
}

void	WrongCat::print_all_ideas(void) const
{
	this->_brain->print_all_ideas();
}

WrongCat	&WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "WrongCat assignment operator called(deep copy)" << std::endl;
	if (this == &copy)
		return (*this);
	if (this->_brain)
	{
		delete this->_brain;
	}
	this->_type = copy._type;
	this->_brain = copy._brain;
	return (*this);
}

Brain	&WrongCat::getBrain(void) const
{
	return (*this->_brain);
}

std::string	WrongCat::getIdea(int idx) const
{
	return (this->_brain->getIdea(idx));
}

void	WrongCat::setIdea(int idx, std::string str)
{
	this->_brain->setIdea(idx, str);
}
