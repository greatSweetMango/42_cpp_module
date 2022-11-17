/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:08:10 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/15 20:56:11 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "Phonebook.hpp"
#include "utils.hpp"

Phonebook::Phonebook(void)
{
	this->_index = 0;
	std::cout << "*****************************" << std::endl;
	std::cout << "* This is Crappy Phonebook! *" << std::endl;
	std::cout << "*****************************" << std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Bye!" << std::endl;
}

void	Phonebook::cmd_add(void)
{
	std::string str = "";

	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter first name : ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].set_first_name(str);
	}

	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter last name : ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].set_last_name(str);
	}

	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter nickname : ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].set_nick_name(str);
	}

	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter phone number : ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].set_phone_number(str);
	}

	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter darkest secret : ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].set_darkest_secret(str);
	}
	this->_index++;
}

void	Phonebook::cmd_search(void)
{
	if (this->_index == 0)
	{
		std::cout << "EMPTY!" << std::endl;
		return ;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << fix_show_str("Index");;
	std::cout << "|" << fix_show_str("First name");
	std::cout << "|" << fix_show_str("Last name");
	std::cout << "|" << fix_show_str("Nick name");
	std::cout << "|" << std::endl;

	std::string str;
	for (int i = 0; i < this->_index && i < 8; i++)
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|" << "         " << i + 1;
		std::cout << "|" << fix_show_str(this->_contacts[i].get_first_name());
		std::cout << "|" << fix_show_str(this->_contacts[i].get_last_name());
		std::cout << "|" << fix_show_str(this->_contacts[i].get_nick_name());
		std::cout << "|" << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter Index : ";
		std::getline(std::cin, str);
		if (str.size() == 1 && str[0] > '0' && str[0] <= '8' && \
				str[0] - '0' - 1 < this->_index)
			print_contact(this->_contacts[str[0] - '0' - 1]);
		else if (!std::cin.eof())
		{
			std::cout << "Wrong Index!" << std::endl;
			str = "";
		}
	}
}