/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:04:16 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/04 13:46:30 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	std::cout << "<------------ShrubberyCreationForm------------>" << std::endl;
	try
	{
		ShrubberyCreationForm shform("tom");
		Bureaucrat	bob("bob", 1);

		bob.signForm(shform);
		shform.execute(bob);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n<------------PresidentialPardonForm------------>" << std::endl;
	try
	{
		PresidentialPardonForm pdform("tom");
		Bureaucrat	bob("bob", 1);

		pdform.beSigned(bob);
		bob.executeForm(pdform);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n<------------RobotomyRequestForm------------>" << std::endl;
	try
	{
		RobotomyRequestForm rbform("tom");
		Bureaucrat	bob("bob", 1);

		std::cout << rbform << std::endl;
		std::cout << bob << std::endl;
		rbform.beSigned(bob);
		bob.executeForm(rbform);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n<------------Execute Permision Denied------------>" << std::endl;
	try
	{
		RobotomyRequestForm rbform("tom");
		Bureaucrat	bob("bob", 70);

		std::cout << rbform << std::endl;
		std::cout << bob << std::endl;
		rbform.beSigned(bob);
		bob.executeForm(rbform);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n<------------Not Signed------------>" << std::endl;
	try
	{
		RobotomyRequestForm rbform("tom");
		Bureaucrat	bob("bob", 70);

		std::cout << bob << std::endl;
		//bob.signForm(rbform);
		bob.executeForm(rbform);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		RobotomyRequestForm rbform("tom");
		Bureaucrat	bob("bob", 1);

		std::cout << bob << std::endl;
		bob.signForm(rbform);
		bob.executeForm(rbform);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
