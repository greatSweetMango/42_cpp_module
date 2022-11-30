/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:21:32 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/28 21:36:40 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	private:
		/* data */
	public:
		Cure();
		Cure(std::string const &type);
		Cure(const Cure &copy);
		~Cure();

		AMateria*		clone() const;
		virtual void	use(ICharacter &target);

		/* Operator overloads */
		Cure	&operator=(const Cure &src);
};
