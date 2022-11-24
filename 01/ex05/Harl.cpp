/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:18:01 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/23 22:41:42 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl is created" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl is deleted" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]\n";
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]\n";
	std::cout << "I cannot believe adding extra bacon cost more money.\nYou don’t put enough!\nIf you did I would not have to ask for it" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]\n";
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string	str[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*ft_Harl[4])(void) = { &Harl::debug,
												&Harl::info,
												&Harl::warning,
												&Harl::error };

	for (int i = 0; i < 4; i++)
	{
		if (str[i] == level)
			(this->*ft_Harl[i])();
	}
}

