/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:04:16 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/04 16:06:54 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat	bob("bob", 1);
		Intern someRandomIntern;
		Intern tmp(someRandomIntern);
		AForm* rrf;

		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
		std::cout << "<----------RobotomyRequestForm---------->" << std::endl;
		bob.signForm(*rrf);
		bob.executeForm(*rrf);
		std::cout << "<-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=->" << std::endl;
		delete rrf;

		rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
		std::cout << "<----------PresidentialPardonForm---------->" << std::endl;
		bob.signForm(*rrf);
		bob.executeForm(*rrf);
		std::cout << "<-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=->" << std::endl;
		delete rrf;

		rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
		std::cout << "<----------PresidentialPardonForm---------->" << std::endl;
		bob.signForm(*rrf);
		bob.executeForm(*rrf);
		std::cout << "<-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=->" << std::endl;
		delete rrf;

		rrf = tmp.makeForm("Wrong Form", "Wrong");
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
