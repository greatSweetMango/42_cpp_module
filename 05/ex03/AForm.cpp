/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:49:09 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/04 13:38:01 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void)
	: _name("Default_name"),
		_target("Default_target"),
		_isSigned(false),
		_gradeToSign(0),
		_gradeToExecute(0)
{
	std::cout << "AForm: Default constructor called" << std::endl;
}

AForm::AForm(const std::string name, const std::string target, int gradeToSign, int gradeToExecute)
	: _name(name),
		_target(target),
		_isSigned(false),
		_gradeToSign(gradeToSign),
		_gradeToExecute(gradeToExecute)
{
	std::cout << "AForm: Constructor called" << std::endl;
	if (gradeToSign < 1 && gradeToExecute < 1)
		throw GradeTooHighException(3);
	else if (gradeToSign < 1)
		throw GradeTooHighException(1);
	else if (gradeToExecute < 1)
		throw GradeTooHighException(2);
	
	if (gradeToSign > 150 && gradeToExecute > 150)
		throw GradeTooLowException(3);
	else if (gradeToSign > 150)
		throw GradeTooLowException(1);
	else if (gradeToExecute > 150)
		throw GradeTooLowException(2);
}

AForm::AForm(const AForm &copy)
	: _name(copy._name),
		_target(copy._target),
		_isSigned(copy._isSigned),
		_gradeToSign(copy._gradeToExecute),
		_gradeToExecute(copy._gradeToExecute)
{
	std::cout << "AForm: copy constructor called" << std::endl;
}

AForm::~AForm(void)
{
	std::cout << "AForm: Destructor called" << std::endl;
}

void	AForm::beSigned(const Bureaucrat &b)
{
	if (this->_gradeToSign >= b.getGrade())
	{
		std::cout << b.getName() << " signed " << this->getName() << std::endl;
		this->_isSigned = true;
	}
	else
	{
		std::cout << b.getName() << " couldn’t sign " << this->_name\
			<< " because ";
		throw GradeTooLowException(1);
	}
}

const char	*AForm::GradeTooHighException::what(void) const throw()
{
	if (this->_reason == 0)
		return ("Grade is too high!");
	else if(this->_reason == 1)
		return ("GradeToSign is too high!");
	else if(this->_reason == 2)
		return ("GradeToExecute is too high!");
	else if (this->_reason == 3)
		return ("GradeToSign and GradeToExecute is too high!");
	else
		return ("Undefine exeption");
}

AForm::GradeTooHighException::GradeTooHighException()
	: _reason(0)
{
}

AForm::GradeTooHighException::GradeTooHighException(int reason)
	: _reason(reason)
{
}

const char	*AForm::GradeTooLowException::what(void) const throw()
{
	if (this->_reason == 0)
		return ("Grade is too Low!");
	else if(this->_reason == 1)
		return ("GradeToSign is too Low!");
	else if(this->_reason == 2)
		return ("GradeToExecute is too Low!");
	else if (this->_reason == 3)
		return ("GradeToSign and GradeToExecute is too Low!");
	else
		return ("Undefine exeption");
}

AForm::GradeTooLowException::GradeTooLowException()
	: _reason(0)
{
}

AForm::GradeTooLowException::GradeTooLowException(int reason)
	: _reason(reason)
{
}

const char	*AForm::IsNotSignedException::what(void) const throw()
{
	return ("This Form is not signed!");
}

std::string	AForm::getName(void) const
{
	return (this->_name);
}

std::string AForm::getTarget(void) const
{
	return (this->_target);
}

bool	AForm::getIsSigned() const
{
	return (this->_isSigned);
}

int	AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int	AForm::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

void	AForm::setIsSigned(bool isSigned)
{
	this->_isSigned = isSigned;
}

AForm	&AForm::operator=(const AForm &src)
{
	if (this == &src)
		return (*this);
	return (*this);
}

std::ostream	&operator<<(std::ostream &outstream, const AForm &f)
{
	std::string str;

	if (f.getIsSigned() == true)
		str.assign("signed");
	else
		str.assign("unsigned");
	return (outstream << f.getName() << ", from gradeToSign "\
			<< f.getGradeToSign() << ", form gradeToExecute " << f.getGradeToExecute()\
			<< ". This form is " << str << ". Target is " << f.getTarget());
}
