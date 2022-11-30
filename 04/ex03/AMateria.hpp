/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:38:33 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/28 21:35:08 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &copy);
		virtual	~AMateria();
		
		//[...]
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter &target);

		/* Getter and Setter */
		std::string const	&getType() const; //Returns the materia type

		/* Operator overloads */
		AMateria &operator=(const AMateria &src);
};
