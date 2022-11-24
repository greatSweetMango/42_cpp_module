/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:02:40 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/23 22:14:14 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
    	Weapon club = Weapon("crude spiked club");
    	HumanA bob("Bob", club);
    	bob.attack();
    	club.setType("some other type of club");
    	bob.attack();
  	}

  	{
    	Weapon club = Weapon("crude spiked club");
    	HumanB jim("Jim");
    	jim.setWeapon(club);
    	jim.attack();
    	club.setType("some other type of club");
    	jim.attack();
  	}
}
