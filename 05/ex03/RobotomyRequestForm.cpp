/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:39:45 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/04 13:43:50 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
	: AForm("RobotomyRequestForm", "Default", 72, 45)

{
	std::cout << "RobotomyRequestForm: Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	: AForm("RobotomyRequestForm", target, 72, 45)
{
	std::cout << "RobotomyRequestForm: Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
	: AForm(copy)
{
	std::cout << "RobotomyRequestForm: copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm: Destructor called" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->getIsSigned())
		throw IsNotSignedException();
	if (this->getGradeToExecute() < executor.getGrade())
	{
		std::cout << executor.getName() << " couldn't execute " << this->getName() << " because ";
		throw GradeTooLowException(2);
	}
	srand(time(NULL));
	if(rand()%2)
		std::cout << this->getTarget() << "has been robotomized successfully" << std::endl;
	else
		std::cout << "the robotomy failed." << std::endl;
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}	

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this == &src)
		return (*this);
	*this = RobotomyRequestForm(src);
	return (*this);
}
