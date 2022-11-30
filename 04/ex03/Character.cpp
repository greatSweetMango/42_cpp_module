/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:26:33 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/29 14:25:12 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

AMateria *Character::_floor[100];

Character::Character(void)
	: _name("Default name")
{
	std::cout << "Character: Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
}

Character::Character(std::string const &name)
	: _name(name)
{
	std::cout << "Character: Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
}

Character::Character(const Character &copy)
{
	std::cout << "Character: copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	*this = copy;
}

Character::~Character(void)
{
	std::cout << "Character: Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	int	i = 0;;

	while (i < 4)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			std::cout << "Character(" << this->getName()\
				<< ") : Equip " << m->getType() << " in slot " << i << std::endl;
			break ;
		}
		i++;
	}
	if (i == 4)
		std::cout << "Character(" << this->getName()\
			<< ") : Can't equip " << m->getType()\
			<< "(Inventory is full)" << std::endl;
}

void	Character::unequip(int idx)
{
	std::string	fail_message = "Character[" + this->getName()\
								+ "] : Can't unequip ";

	if (idx < 0 || idx >= 4)
	{
		std::cout << fail_message << ("(Wrong index)");
		return ;
	}
	if (!this->_inventory[idx])
	{
		std::cout << fail_message << "(inventory slot "<< idx << " is empty)" << std::endl;
		return ;
	}
	int	i = 0;
	while (i < 100)
	{
		if (!this->_floor[i])
		{
			std::cout << "Materia slot[" << idx << "]("\
				<< this->_inventory[idx]->getType() << ")"\
				<< " is droped on floor[" << i << "]!" << std::endl;
			this->_floor[i] = this->_inventory[idx];
			this->_inventory[idx] = NULL;
			break ;
		}
		i++;
	}
	if (i == 100)
		std::cout << "Character(" << this->getName()\
			<< ") : Can't unequip " << this->_inventory[idx]->getType()\
			<< "(No space in floor)" << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "fail to use Materia(Wrong index)!" << std::endl;
		return ;
	}
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << "Character(" << this->getName()\
			<< ") : Fail to use Materia!(slot " << idx << " is empty)" << std::endl; 
}

Character &Character::operator=(const Character &src)
{
	std::cout << "Character: assignment operator called" << std::endl;

	if (this == &src)
		return (*this);
	this->_name = src.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
		{
			delete _inventory[i];
			this->_inventory[i] = NULL;
		}
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
	}
	return (*this);
}
