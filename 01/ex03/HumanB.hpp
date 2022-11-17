/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:23:33 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/17 15:59:28 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		*_weapon;
		std::string	_name;
	public:
		HumanB(std::string name);
		~HumanB();

		void	attack(void);
		/* Getter and Setter */
		void	setWeapon(Weapon weapon);
};

#endif
