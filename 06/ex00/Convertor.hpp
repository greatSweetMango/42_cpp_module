/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:15:42 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/05 17:49:32 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <limits>
#include <iostream>
#include <cmath>

class Convertor
{
	private:
		std::string _input;
	public:
		Convertor();
		Convertor(const char *str);
		Convertor(const Convertor &copy);
		~Convertor();

		/* Member functions */
		void	print2Char(void) const;
		void	print2Int(void) const;
		void	print2Float(void) const;
		void	print2Double(void) const;
		void	print2AllType(void) const;

		/* Operator Overloads */
		Convertor	&operator=(const Convertor &src);
};
