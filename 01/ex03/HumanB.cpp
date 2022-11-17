/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:24:05 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/17 16:03:46 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " \
			<< this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = &weapon;
}
