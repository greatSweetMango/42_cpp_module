/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:48:58 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/30 22:26:57 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign; // 1~150
		const int			_gradeToExecute; // 1~150

	public:
		Form();
		Form(const std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form &copy);
		~Form();

		/* Member functions */	
		void	beSigned(const Bureaucrat &b);
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

		/* Getter and Setter */
		std::string	getName() const;
		bool		getIsSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		void		setIsSigned(bool isSigned);
		
		/* Operator overloads */
		Form	&operator=(const Form &src);
};
std::ostream	&operator<<(std::ostream &outstream, const Form &f);
