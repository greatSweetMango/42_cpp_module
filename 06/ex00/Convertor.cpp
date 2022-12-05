/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:20:51 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/05 16:54:56 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

Convertor::Convertor(void)
	: _input("")
{
}

Convertor::Convertor(const char *str)
{
	this->_input.assign(str);
}

Convertor::Convertor(const Convertor &copy)
{
	*this = copy;
}

Convertor::~Convertor(void)
{
}

void	Convertor::print2Char(void) const
{
	try
	{
		std::cout << "char: ";
		int num;
		if (this->_input[1] == '\0' && !std::isdigit(this->_input[0]))
			num = this->_input[0];
		else
			num = std::stoi(this->_input);

		if (num > CHAR_MAX || num <= CHAR_MIN)
			throw std::exception();
		else if (!isprint(num))
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << (char)num << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
		//std::string(e.what()) == "stoi: no conversion"
		//std::string(e.what()) == "stoi: out of range"
		//std::cerr << e.what() << '\n';
	}
	// 123aaa취약케이스~!
}

void	Convertor::print2Int(void) const
{
	try
	{
		std::cout << "int: ";
		int num = std::stoi(this->_input);
		
		std::cout << num << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
		//std::string(e.what()) == "stoi: no conversion"
		//std::string(e.what()) == "stoi: out of range"
		//std::cerr << e.what() << '\n';
	}
}

void	Convertor::print2Float(void) const
{
	try
	{
		std::cout << "float: ";
		float num = std::stof(this->_input);
		
		std::cout << num << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		if (std::string(e.what()) == "stof: out of range")
		{
			if (this->_input[0] == '-')
				std::cout << "-inff" << std::endl;
			else
				std::cout << "inff" << std::endl;
		}
		else if (this->_input == "nanf" || this->_input == "nan")
			std::cout << "nan" << std::endl;
		else
			std::cout << "impossible" << std::endl;
		//std::cerr << e.what() << '\n';
	}
}

void	Convertor::print2Double(void) const
{
	try
	{
		std::cout << "double: ";
		double num = std::stod(this->_input);
		
		std::cout << num << std::endl;
	}
	catch(const std::exception& e)
	{
		if (std::string(e.what()) == "stod: out of range")
		{
			if (this->_input[0] == '-')
				std::cout << "-inf" << std::endl;
			else
				std::cout << "inf" << std::endl;
		}
		else if (this->_input == "nan")
			std::cout << "nan" << std::endl;
		else
			std::cout << "impossible" << std::endl;
		//std::cerr << e.what() << '\n';
	}
}

void	Convertor::print2AllType(void) const
{
	this->print2Char();
	this->print2Int();
	this->print2Float();
	this->print2Double();
}

Convertor	&Convertor::operator=(const Convertor &src)
{
	if (this == &src)
		return (*this);
	this->_input = src._input;
	return (*this);
}
