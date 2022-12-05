/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:13:09 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/04 13:43:39 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
	: AForm("PresidentialPardonForm", "Default", 25, 5)

{
	std::cout << "PresidentialPardonForm: Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	: AForm("PresidentialPardonForm", target, 25, 5)
{
	std::cout << "PresidentialPardonForm: Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
	: AForm(copy)
{
	std::cout << "PresidentialPardonForm: copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm: Destructor called" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->getIsSigned())
		throw IsNotSignedException();
	if (this->getGradeToExecute() < executor.getGrade())
	{
		std::cout << executor.getName() << " couldn't execute " << this->getName() << " because ";
		throw GradeTooLowException(2);
	}
 	std::cout << this->getTarget() << " has been pardoned by Zaphod beeblebrox." << std::endl;
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	if (this == &src)
		return (*this);
	*this = PresidentialPardonForm(src);
	return (*this);
}
