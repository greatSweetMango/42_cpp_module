/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:49:59 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/27 16:06:36 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap()
{
	std::cout << "ScavTrap: Default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "ScavTrap: constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap: copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0)
		return ;

	if (this->_energyPoints < this->_attackDamage)
		std::cout << this->_name << " has not enough energy to attack!" << std::endl;
	else
	{
		std::cout << "ScavTrap "<< this->_name << " attacks "\
			<< target << ", caousing " << this->_attackDamage\
			<< " points of damage!" << std::endl;
		this->_energyPoints -= this->_attackDamage;
	}
}

void	ScavTrap::guardGate(void)
{
	if (this->_hitPoints == 0)
		return ;
	std::cout << this->_name << " is now in Gate keeper mode." << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	if (this == &copy)
		return (*this);
	
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}
