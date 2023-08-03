/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:11:04 by jaehyuki          #+#    #+#             */
/*   Updated: 2023/04/19 13:33:09 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN &src)
{
    *this = src;
}

RPN::~RPN()
{
}

RPN &RPN::operator=(const RPN &src)
{
    if (this == &src)
        return (*this);
    return (*this);
}

double  RPN::run(std::string str)
{
    double              num1;
    double              num2;
    std::istringstream  ss(str);
    std::string         line;
    char                token;

    while (std::getline(ss, line, ' ')) {
        if (line.length() != 1)
            throw InputValidException();
        token = line[0];

        if (isdigit(token))
            _m_stack.push(static_cast<double>(token - '0'));
        else if (token == '+')
        {
            if (_m_stack.size() == 1)
                continue ;
            else if (_m_stack.size() > 1)
            {
                num2 = _m_stack.top();
                _m_stack.pop();
                num1 = _m_stack.top();
                _m_stack.pop();
                _m_stack.push(num1 + num2);
            }
            else
                throw InputValidException();
        }
        else if (token == '-')
        {
            if (_m_stack.size() == 1)
            {
                num1 = _m_stack.top();
                _m_stack.pop();
                _m_stack.push(num1 * -1);
            }
            else if (_m_stack.size() > 1)
            {
                num2 = _m_stack.top();
                _m_stack.pop();
                num1 = _m_stack.top();
                _m_stack.pop();
                _m_stack.push(num1 - num2);
            }
            else
                throw InputValidException();
        }
        else if (token == '*')
        {
            if (_m_stack.size() < 2)
                throw InputValidException();
            num2 = _m_stack.top();
            _m_stack.pop();
            num1 = _m_stack.top();
            _m_stack.pop();
            _m_stack.push(num1 * num2);
        }
        else if (token == '/')
        {
            if (_m_stack.size() < 2)
                throw InputValidException();
            num2 = _m_stack.top();
            _m_stack.pop();
            num1 = _m_stack.top();
            _m_stack.pop();
            _m_stack.push(num1 / num2);
        }
        else
            throw InputValidException();
    }

    if (_m_stack.size() != 1)
        throw InputValidException();
        
    return (_m_stack.top());
}

const char	*RPN::InputValidException::what(void) const throw()
{
	return ("Error");
}
