/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:05:26 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/28 15:41:45 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*zombiePTR;

	zombiePTR = new Zombie(name);
	if (!zombiePTR)
	{
		std::cout << "newZombie(std::string) : Error : Zombie allocat error!" << std::endl;
		return (NULL);
	}
	return (zombiePTR);
}
