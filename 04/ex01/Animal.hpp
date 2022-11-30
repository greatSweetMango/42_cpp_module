/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:14:52 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/27 17:06:53 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(const Animal	&copy);
		virtual ~Animal();

		virtual void	makeSound(void) const;

		/* Getter and Setter */
		std::string getType(void) const;
		
		/* Operator overloads */
		Animal	&operator=(const Animal &copy);
};
