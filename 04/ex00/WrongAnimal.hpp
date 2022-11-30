/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:11:13 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/27 17:27:01 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal	&copy);
		~WrongAnimal();

		void	makeSound(void) const;

		/* Getter and Setter */
		std::string getType(void) const;
		
		/* Operator overloads */
		WrongAnimal	&operator=(const WrongAnimal &copy);
};
