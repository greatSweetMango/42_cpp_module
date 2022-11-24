/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:12:23 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/24 20:35:05 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap alfa("alfa");

	alfa.attack("skag");
	alfa.takeDamage(9);
	alfa.attack("skag");
	alfa.beRepaired(10);
	alfa.attack("skag");
	alfa.beRepaired(1);
	alfa.takeDamage(999999);
	alfa.attack("skag"); // 출력 X
	
	return (0);
}
