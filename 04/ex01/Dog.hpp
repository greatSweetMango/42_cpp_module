/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:55:51 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/27 22:26:40 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(const Dog &copy);
		virtual	~Dog();
		
		void	makeSound(void) const;
		void	print_all_ideas(void) const;
		
		/* Operator overloads */
		Dog	&operator=(const Dog &copy);

		/* Getter and Setter */
		Brain		*getBrain(void) const;
		std::string getIdea(int idx) const;
		void	setIdea(int idx, std::string str);
};
