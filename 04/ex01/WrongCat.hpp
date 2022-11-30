/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:44:27 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/27 22:14:30 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAnimal
{
	private:
		Brain	*_brain;
	public:
		WrongCat();
		WrongCat(const WrongCat &copy);
		~WrongCat();

		void	makeSound(void) const;
		void	print_all_ideas(void) const;
		
		/* Operator overloads */
		WrongCat		&operator=(const WrongCat &copy);

		/* Getter and Setter */
		Brain		&getBrain(void) const;
		std::string getIdea(int idx) const;
		void	setIdea(int idx, std::string str);
};
