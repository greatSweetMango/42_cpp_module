/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:21:37 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/28 22:05:39 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
	: AMateria("cure")
{
	std::cout << "Cure: Default constructor called" << std::endl;
}

Cure::Cure(std::string const &type)
	: AMateria(type)
{
	std::cout << "Cure: Default constructor called" << std::endl;
}

Cure::Cure(const Cure &copy)
{
	std::cout << "Cure: copy constructor called" << std::endl;
	*this = copy;
}

Cure::~Cure(void)
{
	std::cout << "Cure: Destructor called" << std::endl;
}

AMateria	*Cure::clone(void) const
{
	AMateria *cure = new Cure();
	if (!cure)
		std::cout << "Cure::clone() : Error : Allocate fail!" << std::endl;
	return (cure);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure	&Cure::operator=(const Cure &src)
{
	this->_type = src._type;
	return (*this);
}
