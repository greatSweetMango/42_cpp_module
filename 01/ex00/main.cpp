/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:05:29 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/16 20:51:23 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie	*z1 = newZombie("Alfa");
	Zombie	*z2 = newZombie("Bravo");
	
	randomChump("Charlie");
	randomChump("Delta");

	delete z1;
	delete z2;
	return (0);
}
