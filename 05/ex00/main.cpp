/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:04:16 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/29 22:17:39 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		std::cout << "<Fail to create>" << std::endl;
		Bureaucrat	marvin("marvin", 0);
		Bureaucrat	song("song", 151);
		std::cout << "----------------" << std::endl;

		Bureaucrat	bob("bob", 42);
		Bureaucrat	jack("jack", 150);
		Bureaucrat	tom("tom", 1);
		
		std::cout << "<bob>" << std::endl;
		bob.setIncreaseGrade();
		std::cout << bob << std::endl;
		bob.setDecreaseGrade();
		std::cout << bob << std::endl;

		// std::cout << "<tom>" << std::endl;
		// tom.increaseGrade();
		// std::cout << tom << std::endl;

		// std::cout << "<jack>" << std::endl;
		// jack.decreaseGrade();
		// std::cout << jack << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
