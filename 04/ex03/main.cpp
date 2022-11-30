/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:46:09 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/29 14:46:05 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

// #include <stdlib.h>

// void	cc(void)
// {
//  	system("leaks abstract");
// }
int	main(void)
{
	//atexit(&cc);
	{
		std::cout << "\n<Subject Test>" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
	
		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
	
		ICharacter* bob = new Character("bob");
	
		me->use(0, *bob);
		me->use(1, *bob);
	
		delete bob;
		delete me;
		delete src;
	}

	{
		std::cout << "\n<My test>" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
	
		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		me->unequip(0);
		me->unequip(1);

		ICharacter* bob = new Character("bob");
		me->use(0, *bob);

		delete bob;
		delete me;
		delete src;

		// for (int i = 0; i < 100; i++)
		// {
		// 	if (Character::_floor[i])
		// 		delete Character::_floor[i];
		// }
	}
	return (0);
}
