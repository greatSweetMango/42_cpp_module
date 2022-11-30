/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:01:11 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/28 21:41:39 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	private:
		/* data */
	public:
		Ice();
		Ice(std::string const &type);
		Ice(const Ice &copy);
		~Ice();

		AMateria*		clone() const;
		virtual void	use(ICharacter &target);

		/* Operator overloads */
		Ice	&operator=(const Ice &src);
};
