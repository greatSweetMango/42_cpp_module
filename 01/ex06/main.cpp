/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:17:57 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/17 19:28:05 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char **av)
{
	if (ac != 2) { std::cout << "Argument Error!" << std::endl; return (1); }
	Karen 		karen;
	std::string	str[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	
	for (int i = 0 ; i < 4; i++)
	{
		if (str[i] == av[1])
		{
			while (i < 4)
				karen.complain(str[i++]);
			return (0);
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return (0);
}
