/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:48:58 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/02 20:57:30 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		const std::string	_target;
		bool				_isSigned;
		const int			_gradeToSign; // 1~150
		const int			_gradeToExecute; // 1~150

	public:
		AForm();
		AForm(const std::string name, const std::string target, int gradeToSign, int gradeToExecute);
		AForm(const AForm &copy);
		virtual ~AForm();

		/* Member functions */	
		void	beSigned(const Bureaucrat &b);
		virtual void	execute(const Bureaucrat &b) const = 0;
		/* Exeption Class */
		class	GradeTooHighException : public std::exception
		{	
			private:
				const int _reason;
			public:
				GradeTooHighException();
				GradeTooHighException(int reason);
				const char	*what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			private:
				const int _reason;
			public:
				GradeTooLowException();
				GradeTooLowException(int reason);
				const char	*what() const throw();
		};

		class	IsNotSignedException : public std::exception
		{
			public:
				const char	*what() const throw();
		};

		/* Getter and Setter */
		std::string	getName() const;
		std::string	getTarget() const;
		bool		getIsSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		void		setIsSigned(bool isSigned);
		
		/* Operator overloads */
		AForm	&operator=(const AForm &src);
};
std::ostream	&operator<<(std::ostream &outstream, const AForm &f);
