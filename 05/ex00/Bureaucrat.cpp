/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:04:23 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/30 18:47:31 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
	: _name("Default"),
		_grade(0)
{
	std::cout << "Bureaucrat: Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
	: _name(name),
		_grade(grade)
{
	std::cout << "Bureaucrat: Constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
	: _name(copy._name),
		_grade(copy._grade)
{
	std::cout << "Bureaucrat: copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat: Destructor called" << std::endl;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::setIncreaseGrade(void)
{
	if (this->_grade < 2)
		throw GradeTooHighException();
	this->_grade--;	
	std::cout << "Increase grade, now " << this->_name << "'s grade is ["\
		<< this->_grade + 1 << " -> " << this->_grade << "]" << std::endl;
}

void	Bureaucrat::setDecreaseGrade(void)
{
	if (this->_grade > 149)
	{
		throw GradeTooLowException();
	}
	this->_grade++;
	std::cout << "Decrease grade, now " << this->_name << "'s grade is ["\
		<< this->_grade - 1 << " -> " << this->_grade << "]" << std::endl;
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too High!(Most is 1)");
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too Row!(Least is 150)");
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &src)
{
	std::cout << "Bureaucrat: assignment operator called" << std::endl;
	if (this == &src)
		return (*this);
	*this = Bureaucrat(src);
	return (*this);
}

std::ostream	&operator<<(std::ostream &outstream, const Bureaucrat &b)
{
	return (outstream << b.getName() << ", bureaucrat grade "\
			<< b.getGrade() << ".");
	//<name>, bureaucrat grade <grade>.
}
