/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:49:59 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/24 21:16:13 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap: Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "ScavTrap: constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	std::cout << "ScavTrap: copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints == 0)
		return ;

	if (this->_energyPoints < this->_attackDamage)
		std::cout << this->_name << " has not enough energy to attack!" << std::endl;
	else
	{
		std::cout << this->_name << " attacks "\
			<< target << ", caousing " << this->_attackDamage\
			<< " points of damage!" << std::endl;
		this->_energyPoints -= this->_attackDamage;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->_name << " is now in Gate keeper mode." << std::endl;
}
