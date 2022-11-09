/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:53:42 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/09 21:11:28 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Contact{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string nick_name;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		Contact();
		~Contact();
		/* Getter and Setter */
		std::string get_first_name();
		std::string	get_last_name();
		std::string get_nick_name();
		std::string	get_phone_number();
		std::string	get_darkest_secret();
		set_first_name(std::string str);
		set_last_name(std::string str);
		set_nick_name(std::string str);
		set_phone_number(std::string str);
		set_darkest_secret(std::string str);
}