/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:14:52 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/26 14:24:03 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(const std::string type);
		Animal(const Animal	&copy);
		~Animal();

		/* Operator overloads */
		Animal	&operator=(const Animal &copy);
		void	makeSound(void);
}