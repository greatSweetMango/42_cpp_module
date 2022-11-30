/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:55:51 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/27 17:07:22 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include "Animal.hpp"

class Dog : public Animal
{
	private:
	
	public:
		Dog();
		Dog(const Dog &copy);
		~Dog();
		
		void	makeSound(void) const;

		/* Operator overloads */
		Dog	&operator=(const Dog &copy);
};
