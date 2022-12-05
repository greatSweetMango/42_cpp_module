/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:03:38 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/02 20:56:25 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();

		/* Member functions */
		void	signForm(AForm &f);
		void	executeForm(AForm const &form);

		/* Exeption Class */
		class	GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		/* Getter and Setter */
		std::string getName() const;
		int			getGrade() const;
		void		setIncreaseGrade();
		void		setDecreaseGrade();
		
		/* Operator overloads */
		Bureaucrat &operator=(const Bureaucrat &src);
};
std::ostream	&operator<<(std::ostream &outstream, const Bureaucrat &b);
