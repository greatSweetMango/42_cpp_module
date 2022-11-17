/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:42:21 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/15 20:39:01 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string fix_show_str(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(10);
		str[9] = '.';
		return (str);
	}

	std::string rv_str = "";
	int			n;
	
	n = 10 - str.size();
	while (n-- > 0)
		rv_str.append(" ");
	return (rv_str.append(str));
}

void	print_contact(Contact contact)
{
	std::cout << "------------------------------------" << std::endl;
	std::cout << "First Name: " << contact.get_first_name() << std::endl;
	std::cout << "Last Name: " << contact.get_last_name() << std::endl;
	std::cout << "NickName: " << contact.get_nick_name() << std::endl;
	std::cout << "Phone Number: " << contact.get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << contact.get_darkest_secret() << std::endl;
	std::cout << "------------------------------------" << std::endl;
}