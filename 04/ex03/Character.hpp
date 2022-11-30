/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:28:07 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/29 14:45:38 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
//#include "AMateria.hpp"

class AMateria;
class Character;

class Character : public ICharacter
{
	private:
		std::string		_name;
		AMateria		*_inventory[4];
		static AMateria	*_floor[100];
	public:
		Character();
		Character(const std::string &name);
		Character(const Character &copy);
		~Character();

		std::string const & getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		/* Operator overleads */
		Character &operator=(const Character &src);
};
