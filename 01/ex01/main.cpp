/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:05:29 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/23 20:04:54 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>

int	main(void)
{
	Zombie	*zombies;
	
	zombies = zombieHorde(10, "jack");
	for (int i = 0; i < 10; i++)
	{
		zombies[i].announce();
	}
	delete [](zombies);
}
