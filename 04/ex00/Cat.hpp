/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:44:27 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/27 17:07:26 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();

		void	makeSound(void) const;
		
		/* Operator overloads */
		Cat		&operator=(const Cat &copy);
};
