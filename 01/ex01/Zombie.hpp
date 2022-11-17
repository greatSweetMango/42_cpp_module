/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:05:18 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/16 21:04:32 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private:
		std::string _name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void	announce(void);
		/* Setter and Getter */
		void	set_name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
