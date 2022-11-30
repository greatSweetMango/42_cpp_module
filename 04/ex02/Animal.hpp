/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:14:52 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/28 16:12:12 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string	_type;
		Animal();
	public:
		Animal(const Animal	&copy);
		virtual ~Animal();

		virtual void	makeSound(void) const = 0;

		/* Getter and Setter */
		std::string getType(void) const;
		
		/* Operator overloads */
		Animal	&operator=(const Animal &copy);
};
