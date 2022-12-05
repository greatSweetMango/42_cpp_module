/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:05:22 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/02 20:59:03 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

// Required grades: sign 145, exec 137
// Create a file <target>_shrubbery in the working directory, and writes ASCII trees
// inside it.

class ShrubberyCreationForm : public AForm
{
	private:
	
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();

		void	execute(Bureaucrat const &executor) const;
		
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
};
