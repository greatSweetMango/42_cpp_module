/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:18:01 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/17 19:27:42 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

void	Karen::debug(void)
{
	std::cout << "[DEBUG]\n";
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!\n" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[INFO]\n";
	std::cout << "I cannot believe adding extra bacon cost more money.\nYou don’t put enough!\nIf you did I would not have to ask for it\n" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[WARNING]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month.\n" << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ERROR]\n";
	std::cout << "This is unacceptable, I want to speak to the manager now.\n" << std::endl;
}

void Karen::complain(std::string level)
{
	std::string	str[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Karen::*ft_karen[4])(void) = { &Karen::debug,
												&Karen::info,
												&Karen::warning,
												&Karen::error };

	for (int i = 0; i < 4; i++)
	{
		if (str[i] == level)
			(this->*ft_karen[i])();
	}
}
