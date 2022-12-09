/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:01:45 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/08 16:54:44 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{	
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "<MyTest>" << std::endl;
	{
		Span	sp = Span(100000);

		for (int i = 0; i < 100000; i++)
		{
			sp.addNumber(i * 2);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	{
		try
		{
			Span	sp = Span(10);

			for (int i = 0; i < 10; i++)
			{
				sp.addNumber(i);
			}
			sp.addNumber(10);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		try
		{
			Span	sp = Span(10);
			
			sp.addNumber(10);
			std::cout << sp.longestSpan() << std::endl;
			std::cout << "SUCCESS" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			Span	sp = Span(10);
			
			sp.addNumber(10);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << "SUCCESS" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}
