/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:49:59 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/27 16:09:46 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
	: ClapTrap()
{
	std::cout << "FragTrap: Default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "FragTrap: constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "FragTrap: copy constructor called" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0)
		return ;

	if (this->_energyPoints < this->_attackDamage)
		std::cout << this->_name << " has not enough energy to attack!" << std::endl;
	else
	{
		std::cout << "FragTrap "<< this->_name << " attacks "\
			<< target << ", caousing " << this->_attackDamage\
			<< " points of damage!" << std::endl;
		this->_energyPoints -= this->_attackDamage;
	}
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << "Let's high five guys!" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	if (this == &copy)
		return (*this);
	
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}
