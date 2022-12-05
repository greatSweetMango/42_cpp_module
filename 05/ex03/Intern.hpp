/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:00:43 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/04 15:33:10 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class Intern
{
	private:
		AForm	*form[3];
	public:
		Intern();
		Intern(const Intern &copy);
		~Intern();

		AForm	*makeForm(std::string formName, std::string target);
		
		class	NoFormExeception : public std::exception
		{
			public:
				const char *what() const throw();
		};

		Intern &operator=(const Intern &src);
};
