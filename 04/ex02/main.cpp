/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:12:23 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/29 14:48:34 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#include <stdlib.h>

// void	cc(void)
// {
// 	system("leaks saveWorld");
// }
int main()
{
	// atexit(&cc);
	{
		std::cout << "<------------------------------------>" << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;//should not create a leak
		delete i;
	}

	{
		std::cout << "\n<------------Subject Test--------->" << std::endl;
		Animal	*meta[10];
		
		std::cout << "(CREATE)" << std::endl;
		int		i = 0;
		while (i < 5)
		{
			meta[i++] = new Cat();
		}
		while (i < 10)
		{
			meta[i++] = new Dog();
		}
		std::cout << "\n(DELETE)" << std::endl;
		for (int i = 0; i < 10; i++)
		{
			delete meta[i];
		}//should not create a leak
	}

	// {
	// 	std::cout << "\n<-------WrongSubject Test--------->" << std::endl;
	// 	WrongAnimal	*meta[10];
		
	// 	std::cout << "(CREATE)" << std::endl;
	// 	int		i = 0;
	// 	while (i < 5)
	// 	{
	// 		meta[i++] = new WrongCat();
	// 	}
	// 	std::cout << "\n(DELETE)" << std::endl;
	// 	for (int i = 0; i < 5; i++)
	// 	{
	// 		delete meta[i];
	// 	}		
	// }

	{
		std::cout << "\n<------------DEEP COPY TEST--------->" << std::endl;
		Cat *a = new Cat();

		a->setIdea(0, "I");
		a->setIdea(1, "am");
		a->setIdea(2, "a");
		a->setIdea(3, "cat");
		a->setIdea(101, "cat");
		a->print_all_ideas();
		Cat *b = new Cat(*a);
		std::cout << "Cat a : " << a << std::endl;
		std::cout << "Cat b : " << b << std::endl;
		std::cout << "Cat a->Brain : " << a->getBrain() << std::endl;
		std::cout << "Cat b->Brain : " << b->getBrain() << std::endl;
		delete a;
		b->print_all_ideas();
		delete b;
	}

	// {
	// 	std::cout << "\n<-------WRONG DEEP COPY TEST--------->" << std::endl;
	// 	WrongCat *a = new WrongCat();

	// 	a->setIdea(0, "I");
	// 	a->setIdea(1, "am");
	// 	a->setIdea(2, "a");
	// 	a->setIdea(3, "cat");
	// 	a->print_all_ideas();
	// 	WrongCat *b = new WrongCat(*a);
	// 	std::cout << "WrongCat a : " << a << std::endl;
	// 	std::cout << "WrongCat b : " << b << std::endl;
	// 	std::cout << "WrongCat a->Brain : " << &a->getBrain() << std::endl;
	// 	std::cout << "WrongCat b->Brain : " << &b->getBrain() << std::endl;
	// 	delete a;
	// 	b->print_all_ideas();
	// 	delete b;
	// }

	// {
	// 	Animal	*meta = new Animal(); // 생성 불가

	// 	std::cout << meta->getType() << std::endl;
	// 	meta->makeSound();
	// 	delete meta;
	// }
}
