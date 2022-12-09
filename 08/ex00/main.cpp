/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:26:35 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/08 16:01:00 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <stdlib.h>

int main(void)
{
	int	num2find = 5;
	int	num2nofind = 10;

	std::cout <<"<VECTOR>"<< std::endl;
	std::vector<int> v(10);
	for (int i = 0; i < 10; i++)
		v[i] = i;
		
	if (easyfind(v, num2find) == v.end())
		std::cout << "Can't find " << num2find << std::endl;
	else
		std::cout << "found! num(" << num2find << ")" << std::endl;
		
	if (easyfind(v, num2nofind) == v.end())
		std::cout << "Can't find " << num2nofind << std::endl;
	else
		std::cout << "found! num(" << num2nofind<< ")" << std::endl;
	
	std::cout <<"<DEQUE>" << std::endl;
	std::deque<int> dq;
	for (int i = 0; i < 10; i++)
		dq.push_back(i);
	if (easyfind(dq, num2find) == dq.end())
		std::cout << "Can't find " << num2find << std::endl;
	else
		std::cout << "found! num(" << num2find << ")" << std::endl;
		
	if (easyfind(dq, num2nofind) == dq.end())
		std::cout << "Can't find " << num2nofind << std::endl;
	else
		std::cout << "found! num(" << num2nofind<< ")" << std::endl;

	std::cout << "<LIST>" << std::endl;
	std::list<int> lst;
	for (int i = 0; i < 10; i++)
		lst.push_back(i);
	if (easyfind(lst, num2find) == lst.end())
		std::cout << "Can't find " << num2find << std::endl;
	else
		std::cout << "found! num(" << num2find << ")" << std::endl;
		
	if (easyfind(lst, num2nofind) == lst.end())
		std::cout << "Can't find " << num2nofind << std::endl;
	else
		std::cout << "found! num(" << num2nofind<< ")" << std::endl;
	
	std::cout << "<SET>" << std::endl;
	std::set<int> st;
	for (int i = 0; i < 10; i++)
		st.insert(i);
	if (easyfind(st, num2find) == st.end())
		std::cout << "Can't find " << num2find << std::endl;
	else
		std::cout << "found! num(" << num2find << ")" << std::endl;
		
	if (easyfind(st, num2nofind) == st.end())
		std::cout << "Can't find " << num2nofind << std::endl;
	else
		std::cout << "found! num(" << num2nofind<< ")" << std::endl;
	
	std::cout << "<MULTISET>" << std::endl;
	std::multiset<int> mst;
	for (int i = 0; i < 10; i++)
		mst.insert(i);
	if (easyfind(mst, num2find) == mst.end())
		std::cout << "Can't find " << num2find << std::endl;
	else
		std::cout << "found! num(" << num2find << ")" << std::endl;
		
	if (easyfind(mst, num2nofind) == mst.end())
		std::cout << "Can't find " << num2nofind << std::endl;
	else
		std::cout << "found! num(" << num2nofind<< ")" << std::endl;

	std::cout << "<MAP>" << std::endl;
	std::map<int, int> mp;
	for (int i = 0; i < 10; i++)
		mp[i] = i;
	if (easyfind(mp, num2find) == mp.end())
		std::cout << "Can't find " << num2find << std::endl;
	else
		std::cout << "found! num(" << num2find << ")" << std::endl;
		
	if (easyfind(mp, num2nofind) == mp.end())
		std::cout << "Can't find " << num2nofind << std::endl;
	else
		std::cout << "found! num(" << num2nofind<< ")" << std::endl;
	
	std::cout << "<MULTIMAP>" << std::endl;
	std::multimap<int, int> mmp;
	for (int i = 0; i < 10; i++)
		mmp.insert(std::pair<int, int>(i, i));
	if (easyfind(mmp, num2find) == mmp.end())
		std::cout << "Can't find " << num2find << std::endl;
	else
		std::cout << "found! num(" << num2find << ")" << std::endl;
		
	if (easyfind(mmp, num2nofind) == mmp.end())
		std::cout << "Can't find " << num2nofind << std::endl;
	else
		std::cout << "found! num(" << num2nofind<< ")" << std::endl;

	std::cout << "<OTHER TYPE>" << std::endl;
	char	char2find = 'D';
	char	char2nofind = 'X';
	
	std::vector<char> vec(10);
	for (char i = 'A'; i < 'A'+10; i++)
		v[i-'A'] = i;
		
	if (easyfind(vec, static_cast<char>(char2find)) == vec.end())
		std::cout << "Can't find " << char2find << std::endl;
	else
		std::cout << "found! num(" << char2find << ")" << std::endl;
		
	if (easyfind(vec, char2nofind) == vec.end())
		std::cout << "Can't find " << char2nofind << std::endl;
	else
		std::cout << "found! num(" << char2nofind<< ")" << std::endl;
	return (0);
}
