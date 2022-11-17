/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:36:04 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/16 13:41:02 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook 	pb;
	std::string	str;
	
	while (str != "EXIT")
	{
		std::cout << "Enter command > ";
		std::getline(std::cin, str);
		if (str == "ADD")
			pb.cmd_add();
		else if (str == "SEARCH")
			pb.cmd_search();
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}
