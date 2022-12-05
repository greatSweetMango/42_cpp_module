/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:04:39 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/02 20:59:01 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>


// Required grades: sign 72, exec 45
// Makes some drilling noises. Then, informs that <target> has been robotomized
// successfully 50% of the time. Otherwise, informs that the robotomy failed.
class RobotomyRequestForm : public AForm
{
	private:
	
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		~RobotomyRequestForm();

		void	execute(Bureaucrat const &executor) const;
		
		RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
};
