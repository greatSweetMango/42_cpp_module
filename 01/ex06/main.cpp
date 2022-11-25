/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:17:57 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/25 17:19:53 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2) { std::cout << "Argument Error!" << std::endl; return (1); }
	Harl		harl;
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (str[idx] == av[1])
			break;
	}

	switch (idx)
	{
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break ;
		default : 
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	
	return (0);
}
