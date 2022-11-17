/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:53:45 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/15 20:53:43 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::get_first_name(void)
{
	return this->first_name;
}

std::string Contact::get_last_name(void)
{
	return this->last_name;
}

std::string Contact::get_nick_name(void)
{
	return this->nick_name;
}

std::string Contact::get_phone_number(void)
{
	return this->phone_number;
}

std::string Contact::get_darkest_secret(void)
{
	return this->darkest_secret;
}

void	Contact::set_first_name(std::string str)
{
	this->first_name = str;
}

void	Contact::set_last_name(std::string str)
{
	this->last_name = str;
}

void	Contact::set_nick_name(std::string str)
{
	this->nick_name = str;
}

void	Contact::set_phone_number(std::string str)
{
	this->phone_number = str;
}

void	Contact::set_darkest_secret(std::string str)
{
	this->darkest_secret = str;
}
