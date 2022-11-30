/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:58:37 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/27 17:07:17 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog: Default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog: copy constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog(void)
{
	std::cout << "Dog: Destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << this->_type << " :> " << "Woof! Woof!" << std::endl;
}

Dog	&Dog::operator=(const Dog &copy)
{
	std::cout << "Dog: assignment operator called" << std::endl;
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
	return (*this);
}
