/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:11:02 by jaehyuki          #+#    #+#             */
/*   Updated: 2023/04/19 13:19:32 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <stack>

class RPN
{
    private:
        std::stack<double> _m_stack;

    public:
        RPN();
        RPN(const RPN &src);
        ~RPN();
        RPN &operator=(const RPN &src);

        double  run(std::string rpn);

        class   InputValidException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};
