/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:49:09 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/04 13:31:50 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
	: _name("Default"),
		_isSigned(false),
		_gradeToSign(0),
		_gradeToExecute(0)
{
	std::cout << "Form: Default constructor called" << std::endl;
}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute)
	: _name(name),
		_isSigned(false),
		_gradeToSign(gradeToSign),
		_gradeToExecute(gradeToExecute)
{
	std::cout << "Form: Constructor called" << std::endl;
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

Form::Form(const Form &copy)
	: _name(copy._name),
		_isSigned(copy._isSigned),
		_gradeToSign(copy._gradeToExecute),
		_gradeToExecute(copy._gradeToExecute)
{
	std::cout << "Form: copy constructor called" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Form: Destructor called" << std::endl;
}

void	Form::beSigned(const Bureaucrat &b)
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

const char	*Form::GradeTooHighException::what(void) const throw()
{
	if (this->_reason == 0)
		return ("Grade is too High!");
	else if(this->_reason == 1)
		return ("GradeToSign is too High!");
	else if(this->_reason == 2)
		return ("GradeToExecute is too High!");
	else if (this->_reason == 3)
		return ("GradeToSign and GradeToExecute is too High!");
	else
		return ("Undefine exeption");
}

Form::GradeTooHighException::GradeTooHighException()
	: _reason(0)
{
}

Form::GradeTooHighException::GradeTooHighException(int reason)
	: _reason(reason)
{
}

const char	*Form::GradeTooLowException::what(void) const throw()
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

Form::GradeTooLowException::GradeTooLowException()
	: _reason(0)
{
}

Form::GradeTooLowException::GradeTooLowException(int reason)
	: _reason(reason)
{
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getIsSigned() const
{
	return (this->_isSigned);
}

int	Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int	Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

void	Form::setIsSigned(bool isSigned)
{
	this->_isSigned = isSigned;
}

Form	&Form::operator=(const Form &src)
{
	if (this == &src)
		return (*this);
	*this = Form(src);
	return (*this);
}

std::ostream	&operator<<(std::ostream &outstream, const Form &f)
{
	std::string str;

	if (f.getIsSigned() == true)
		str.assign("signed");
	else
		str.assign("unsigned");
	return (outstream << f.getName() << ", from gradeToSign "\
			<< f.getGradeToSign() << ", form gradeToExecute " << f.getGradeToExecute()\
			<< ". This form is " << str);
}