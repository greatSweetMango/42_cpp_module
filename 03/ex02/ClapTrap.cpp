/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:08:43 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/25 21:01:41 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name("____"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap: constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap&copy)
{
	std::cout << "ClapTrap: copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
	if (this == &copy)
		return (*this);
	
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0)
		return ;

	std::cout << this->_name << " attacks "\
		<< target << ", caousing " << this->_attackDamage\
		<< " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
		return ;
	std::cout << this->_name << " takes "\
		<< amount << " points of damage!" << std::endl;
	
	if (this->_hitPoints < amount)
		amount = this->_hitPoints;
	this->_hitPoints -= amount;
	if (this->_hitPoints == 0)
		std::cout << this->_name << " is die!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
		return ;
	if (this->_energyPoints < amount)
		std::cout << this->_name << " has not enough energy to repair!" << std::endl;
	else
	{
		std::cout << this->_name << " be repaired by "\
			<< amount << " points!" << std::endl;
		this->_energyPoints -= amount;
	}
}
