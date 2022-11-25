/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:12:23 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/25 15:05:58 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	{
		ScavTrap	alfa("alfa(ScavTrap)");

		alfa.guardGate();
		alfa.attack("skag");
		alfa.takeDamage(9);
		alfa.attack("skag");
		alfa.beRepaired(10);
		alfa.attack("skag");
		alfa.beRepaired(1);
		alfa.takeDamage(999999);
		alfa.attack("skag"); // 출력 X
	}
	std::cout << "---------------------------------------" << std::endl;
	{
		FragTrap	alfa("alfa(FragTrap)");

		alfa.highFivesGuys();
		alfa.attack("skag");
		alfa.takeDamage(9);
		alfa.attack("skag");
		alfa.beRepaired(10);
		alfa.attack("skag");
		alfa.beRepaired(1);
		alfa.takeDamage(999999);
		alfa.attack("skag"); // 출력 X
	}
	
	return (0);
}
