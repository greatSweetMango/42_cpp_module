/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:02:40 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/04 16:10:33 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void)
{
	std::cout << "Intern: Default constructor called" << std::endl;
	this->form[0] = new PresidentialPardonForm();
	this->form[1] = new RobotomyRequestForm();
	this->form[2] = new ShrubberyCreationForm();
}

Intern::Intern(const Intern &copy)
{
	std::cout << "Intern: copy constructor called" << std::endl;
	for (int i = 0; i < 3; i++)
		this->form[i] = NULL;
	*this = copy;
}

Intern::~Intern(void)
{
	std::cout << "Intern: Destructor called" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		if (this->form[i])
			delete this->form[i];
		this->form[i] = NULL;
	}
}

AForm	*Intern::makeForm(std::string formName, std::string target)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		if (this->form[i]->getName() == formName)
		{
			std::cout << "Intern creates " << this->form[i]->getName() << std::endl;
			break ;
		}
	}
	switch (i)
	{
		case 0:
			return (new PresidentialPardonForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new ShrubberyCreationForm(target));
		default:
			std::cout << "Fail to make form! becasue ";
			throw NoFormExeception();
	}
}

const char	*Intern::NoFormExeception::what(void) const throw()
{
	return ("It is unknown Form!");
}

Intern	&Intern::operator=(const Intern &src)
{
	if (this == &src)
		return (*this);
	this->form[0] = new PresidentialPardonForm();
	this->form[1] = new RobotomyRequestForm();
	this->form[2] = new ShrubberyCreationForm();
	return (*this);	
}
