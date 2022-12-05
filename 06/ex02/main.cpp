/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:02:22 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/05 21:19:42 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{	
	srand(rand() * time(NULL));
	int num = rand()%3;

	switch (num)
	{
		case 0:
			std::cout << "generate A" << std::endl;
			return (new A());
		case 1:
			std::cout << "generate B" << std::endl;
			return (new B());
		default:
			std::cout << "generate C" << std::endl;
			return (new C());
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "This is class A type." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "This is class B type." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "This is class C type." << std::endl;
	else
		std::cout << "What the fuck is this type!" << std::endl;
}

void identify(Base& p)
{
	try
	{
		Base	&tmp = dynamic_cast<A&>(p);
		std::cout << "This is class A type." << std::endl;
		(void)tmp;
	}
	catch(const std::exception& e)
	{
		try
		{
			Base	&tmp = dynamic_cast<B&>(p);
			std::cout << "This is class B type." << std::endl;
			(void)tmp;
		}
		catch(const std::exception& e)
		{
			try
			{
				Base	&tmp = dynamic_cast<C&>(p);
				std::cout << "This is class C type." << std::endl;
				(void)tmp;
			}
			catch(const std::exception& e)
			{
				std::cout << "What the fuck is this type!" << std::endl;
			}
		}
	}
}

int	main(void)
{
	Base	*ptr;
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << "<   Sequence " << i << "   >" << std::endl;
		ptr = generate(); 
		identify(ptr);
		identify(*ptr);
		std::cout << "<-------------------->" << std::endl;
		delete ptr;
	}
	return (0);
}
