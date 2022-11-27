/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:12:23 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/27 16:19:58 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <stdlib.h>

int	main(void)
{
	std::cout << "\n<--- member function test--->" << std::endl;
	{
		//맴버함수 상속 테스트
		DiamondTrap	alfa("alfa");
		
		alfa.guardGate();
		alfa.highFivesGuys();
		alfa.whoAmI();
		alfa.attack("skag"); // 출력 X
	}
	std::cout << "\n<---hitPoints test FragTrap(100)--->" << std::endl;
	{
		//hitPoints 테스트 FragTrap(100)
		DiamondTrap	alfa("alfa");

		alfa.takeDamage(99);
		alfa.attack("skag");
		alfa.takeDamage(3); //죽음
		alfa.attack("skag"); // 출력 X
	}

	std::cout << "\n<---_energyPoints test FragTrap(100)--->" << std::endl;
	{
		//energyPoints 테스트 ScavTrap(50)
		DiamondTrap	alfa("alfa");

		alfa.beRepaired(49);
		alfa.beRepaired(3); //모자람
		alfa.attack("skag"); //모자람
	}
	
	return (0);
}
