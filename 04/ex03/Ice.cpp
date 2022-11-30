/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:01:13 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/28 21:46:49 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
	: AMateria("ice")
{
	std::cout << "Ice: Default constructor called" << std::endl;
}

Ice::Ice(std::string const &type)
	: AMateria(type)
{
	std::cout << "Ice: Default constructor called" << std::endl;
}

Ice::Ice(const Ice &copy)
{
	std::cout << "Ice: copy constructor called" << std::endl;
	*this = copy;
}

Ice::~Ice(void)
{
	std::cout << "Ice: Destructor called" << std::endl;
}

AMateria	*Ice::clone(void) const
{
	Ice *ice = new Ice();
	if (!ice)
		std::cout << "Ice::clone() : Error : Allocat fail!" << std::endl;
	return (ice);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
	// "* shoots an ice bolt at <name> *"
}

Ice &Ice::operator=(const Ice &src)
{
	this->_type = src._type;
	return (*this);
}
