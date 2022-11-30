/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:23:05 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/29 14:53:42 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("default")
{
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal: copy constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal(void)
{
	std::cout << "Animal: Destructor called" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << this->_type << " :> " << "?????????" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

Animal	&Animal::operator=(const Animal &copy)
{
	std::cout << "Animal: assignment operator called" << std::endl;
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
	return (*this);
}
