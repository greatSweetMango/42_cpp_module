/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:44:27 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/27 17:12:27 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		
	public:
		WrongCat();
		WrongCat(const WrongCat &copy);
		~WrongCat();

		void	makeSound(void) const;
		
		/* Operator overloads */
		WrongCat		&operator=(const WrongCat &copy);
};
