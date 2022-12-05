/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:26:44 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/02 20:58:58 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

// PresidentialPardonForm: Required grades: sign 25, exec 5
// Informs that <target> has been pardoned by Zaphod Beeblebrox
class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const &executor) const;
		
		PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
};
