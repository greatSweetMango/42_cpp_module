/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:43:56 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/27 21:09:29 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(const Brain &copy);
		~Brain();

		void	print_all_ideas(void) const;
		/* Operator overloads */
		Brain	&operator=(const Brain &copy);

		/* Getter and Setter */
		std::string	getIdea(int idx) const;
		void	setIdea(int idx, std::string str);
};
