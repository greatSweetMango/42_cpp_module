/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:44:27 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/27 22:27:30 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;
	public:
		Cat();
		Cat(const Cat &copy);
		virtual	~Cat();

		void	makeSound(void) const;
		void	print_all_ideas(void) const;
		
		/* Operator overloads */
		Cat		&operator=(const Cat &copy);

		/* Getter and Setter */
		Brain		*getBrain(void) const;
		std::string getIdea(int idx) const;
		void	setIdea(int idx, std::string str);
};
