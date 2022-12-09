/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:57:16 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/08 20:58:07 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>
#include <list>

int main()
{
	std::cout << "<MutantStack>" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push_back(4);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	std::cout << "\n<LIST>" << std::endl;
	{
		std::list<int>	list;
		list.push_back(5);
		list.push_back(17);
		std::cout << list.back() << std::endl;
		list.pop_back();
		std::cout << list.size() << std::endl;
		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(4);
		//[...]
		list.push_back(0);
		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(list);
	}
	
	std::cout << "\n<vector>" << std::endl;
	{
		std::vector<int>	vector;
		vector.push_back(5);
		vector.push_back(17);
		std::cout << vector.back() << std::endl;
		vector.pop_back();
		std::cout << vector.size() << std::endl;
		vector.push_back(3);
		vector.push_back(5);
		vector.push_back(737);
		vector.push_back(4);
		//[...]
		vector.push_back(0);
		std::vector<int>::iterator it = vector.begin();
		std::vector<int>::iterator ite = vector.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::vector<int> s(vector);
	}

	std::cout << "\n<deque>" << std::endl;
	{
		std::deque<int>	deque;
		deque.push_back(5);
		deque.push_back(17);
		std::cout << deque.back() << std::endl;
		deque.pop_back();
		std::cout << deque.size() << std::endl;
		deque.push_back(3);
		deque.push_back(5);
		deque.push_back(737);
		deque.push_back(4);
		//[...]
		deque.push_back(0);
		std::deque<int>::iterator it = deque.begin();
		std::deque<int>::iterator ite = deque.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::deque<int> s(deque);
	}
	std::cout << "\n<ETC TEST>" << std::endl;
	{
		MutantStack<int> mstack;
		
		mstack.push(5);
		mstack.push(17);
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);

		MutantStack<int>::reverse_iterator it = mstack.rbegin();
		MutantStack<int>::reverse_iterator ite = mstack.rend();
		--it;
		++it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	return 0;
}
