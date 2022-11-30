/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:42:25 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/28 21:30:23 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("default")
{
	std::cout << "AMateria: Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
	: _type(type)
{
	std::cout << "AMateria: Default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout << "AMateria: copy constructor called" << std::endl;
	*this = copy;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria: Destructor called" << std::endl;
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "Amateria use ___ to " << target.getName() << std::endl;
}

std::string	const	&AMateria::getType(void) const
{
	return (this->_type);
}

AMateria &AMateria::operator=(const AMateria &src)
{
	std::cout << "Amateria: assignment operator called" << std::endl;
	this->_type = src._type;
	return (*this);
}
