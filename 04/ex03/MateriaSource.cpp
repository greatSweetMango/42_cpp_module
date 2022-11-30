/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 20:17:16 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/29 14:43:42 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource: Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "MateriaSource: copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	*this = copy;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource: Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

void	MateriaSource::learnMateria(AMateria *m)
{
	int	i = 0;
	while (i < 4)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			std::cout << "Learn Materia " << m->getType()\
				<< "(" << i << "/4)" << std::endl;
			break ;
		}
		i++;
	}
	if (i == 4)
		std::cout << "Fail to learn Materia " << m->getType()\
			<< ("No space in MateriaSource");
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	AMateria	*m;

	int i = 0;
	while (i < 4)
	{
		if (this->_inventory[i]->getType() == type)
		{
			std::cout << "Create materia(" << type << ")" <<std::endl;
			break ;
		}
		i++;
	}
	if (i == 4)
	{
		std::cout << "Fail to create Materia(Can't find " << type << ")" << std::endl;
		return (NULL);
	}
	m = this->_inventory[i]->clone();
	return (m);
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &src)
{
	if (this == &src)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete _inventory[i];
		this->_inventory[i] = src._inventory[i]->clone();
	}
	return (*this);
}
