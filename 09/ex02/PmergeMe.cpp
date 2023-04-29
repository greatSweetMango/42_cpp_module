/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:50:18 by jaehyuki          #+#    #+#             */
/*   Updated: 2023/04/30 04:45:04 by jaehyuki         ###   ########.fr       */
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

    struct timeval  startTime, endTime;
    
	gettimeofday(&startTime, NULL);
    _M_vectorMergeSort(_m_vector, 0, _m_vector.size());
    gettimeofday(&endTime, NULL);
    _m_vectorTime = (endTime.tv_sec - startTime.tv_sec) * 1000 + (endTime.tv_usec - startTime.tv_usec) / 1000.0;
    
    gettimeofday(&startTime, NULL);
    _M_listMergeSort(_m_list, 0, _m_list.size());
    gettimeofday(&endTime, NULL);
    _m_listTime = (endTime.tv_sec - startTime.tv_sec) * 1000 + (endTime.tv_usec - startTime.tv_usec) / 1000.0;
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

/* VECTOR MERGE INSERT SORT */
void    PmergeMe::_M_vectorInsertSort(std::vector<int> &vec, int left, int right)
{       
    for (int i = left + 1; i < right; i++)
    {
        int key = vec[i];
        int j = i - 1;
        while (j >= left && vec[j] > key)
        {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = key;
    }
}

void    PmergeMe::_M_vectorMerge(std::vector<int> &vec, int left, int mid, int right)
{
    std::vector<int> left_vec;
    std::vector<int> right_vec;

    for (int i = left; i < mid; i++)
        left_vec.push_back(vec[i]);
    for (int i = mid; i < right; i++)
        right_vec.push_back(vec[i]);
    
    int i = 0;
    int j = 0;
    int k = left;
    while (i < mid - left && j < right - mid)
    {
        if (left_vec[i] < right_vec[j] && i < mid)
            vec[k++] = left_vec[i++];
        else
            vec[k++] = right_vec[j++];
    }
    
    while (i < mid - left)
        vec[k++] = left_vec[i++];

    while (j < right - mid)
        vec[k++] = right_vec[j++];
}

void    PmergeMe::_M_vectorMergeSort(std::vector<int> &vec, int left, int right)
{
    if (right - left <= MIN_SIZE)
    {
        _M_vectorInsertSort(vec, left, right);
        return ;
    }
    if (left < right)
    {
        int mid = (left + right) / 2;
        _M_vectorMergeSort(vec, left, mid);
        _M_vectorMergeSort(vec, mid, right);
        _M_vectorMerge(vec, left, mid, right);
    }
}

/* LIST MERGE INSERT SORT */
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

void    PmergeMe::_M_listMergeSort(std::list<int> &lst, int left, int right)
{
    if (lst.size() <= MIN_SIZE)
    {
        _M_listInsertSort(lst);
        return ;
    }
    
    int mid = (left + right) / 2;

    std::list<int> left_lst, right_lst;
    std::list<int>::iterator it = lst.begin();
    for (int i = 0; i < mid; i++)
    {
        left_lst.push_back(*it);
        it++;
    }

    for (int i = mid; i < right; i++)
    {
        right_lst.push_back(*it);
        it++;
    }

    _M_listMergeSort(left_lst, 0, mid);
    _M_listMergeSort(right_lst, 0, right - mid);

    std::list<int>::iterator left_it = left_lst.begin();
    std::list<int>::iterator right_it = right_lst.begin();
    it = lst.begin();
    while(left_it != left_lst.end() && right_it != right_lst.end())
    {
        if (*left_it < *right_it)
        {
            *it = *left_it;
            left_it++;
        }
        else
        {
            *it = *right_it;
            right_it++;
        }
        it++;
    }

    while (left_it != left_lst.end())
    {
        *it = *left_it;
        left_it++;
        it++;
    }

    while (right_it != right_lst.end())
    {
        *it = *right_it;
        right_it++;
        it++;
    }

}

void    PmergeMe::printResult(void)
{
    std::cout << "BEFORE:";
    for (size_t i = 0; i < _m_vector.size(); i++)
    {
        std::cout << " " << _m_vector[i];
    }
    std::cout << std::endl;

    std::cout << "AFTER:";
    for (size_t i = 0; i < _m_vector.size(); i++)
    {
        std::cout << " " << _m_vector[i];
    }
    std::cout << std::endl;

    std::cout << "Time to process a range of 5 elements with std::vector" << ": " << _m_vectorTime << " ms" << std::endl;
    std::cout << "Time to process a range of 5 elements with std::list" << ": " << _m_listTime << " ms" << std::endl;
}   

const char	*PmergeMe::InputValidException::what(void) const throw()
{
	return ("Error");
}
