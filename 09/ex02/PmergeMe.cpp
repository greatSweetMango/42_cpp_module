/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:50:18 by jaehyuki          #+#    #+#             */
/*   Updated: 2023/04/24 17:00:12 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool    PmergeMe::_M_isValid(char **argv)
{
    for (int i = 1; argv[i]; i++)
    {
        if (argv[i][0] == '0')
            return (false);
        for (int j = 0; argv[i][j]; j++)
        {
            if (!isdigit(argv[i][j]))
                return (false);
        }
    }
    return (true);
}

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(char **argv)
{
    if (!_M_isValid(argv))
        throw InputValidException();
    for (int i = 1; argv[i]; i++)
    {
        _m_vector.push_back(atoi(argv[i]));
        _m_list.push_back(atoi(argv[i]));
    }

    std::cout << "Vector : ";
    for (std::vector<int>::iterator it = _m_vector.begin(); it != _m_vector.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "List : ";
    for (std::list<int>::iterator it = _m_list.begin(); it != _m_list.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    std::cout << "vectorInsertionSort : ";
    _M_vectorInsertSort(_m_vector);
    for (std::vector<int>::iterator it = _m_vector.begin(); it != _m_vector.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    //std::cout << "listInsertSort : ";
    //_M_listInsertSort(_m_list);
    //for (std::list<int>::iterator it = _m_list.begin(); it != _m_list.end(); it++)
    //{
    //    std::cout << *it << " ";
    //}
    //std::cout << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
    *this = src;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe &PmergeMe::operator=(const PmergeMe &src)
{
    if (this == &src)
        return (*this);
    return (*this);
}

void    PmergeMe::sortVector(void)
{   
}

void    PmergeMe::sortList(void)
{
}

void    PmergeMe::_M_vectorInsertSort(std::vector<int> &vec)
{
    int size = static_cast<int>(vec.size());
    for (int i = 0; i < size, i++)
    {
        if ()
    }
}

void    PmergeMe::_M_listInsertSort(std::list<int> &lst)
{
    for (std::list<int>::iterator i = std::next(lst.begin()); i != lst.end(); i++)
    {
        int key = *i;
        std::list<int>::iterator j = std::prev(i);
        while (j != lst.begin() && *j > key)
        {
            *std::next(j) = *j;
            j = std::prev(j);
        }
        if (*j > key)
        {
            *std::next(j) = *j;
            *j = key;
        }
        else
        {
            *std::next(j) = key;
        }
    }
}

void    checkIsSorted(void)
{
}

void    printResult(void)
{
}

const char	*PmergeMe::InputValidException::what(void) const throw()
{
	return ("Error");
}
