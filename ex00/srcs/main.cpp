/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:29:05 by pfrances          #+#    #+#             */
/*   Updated: 2023/05/08 10:37:27 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <map>
#include <string>
#include <list>
#include <iostream>

int main(void)
{
	std::cout << "vector" << std::endl;
	std::vector<int> v;
	for (size_t i = 0; i < 5; i++) {
		v.push_back(i);
	}

	for (size_t i = 0; i < 6; i++)
	{
		if (easyfind(v, i) == v.end())
			std::cout << "not found " << i << std::endl;
		else
			std::cout << "found " << *easyfind(v, i) << std::endl;
	}

	std::cout << "map" << std::endl;
	std::map<size_t, std::string> m;
	for (size_t i = 0; i < 5; i++) {
		m[i] = std::string("0");
		m[i].at(0) = i + '0';
	}

	for (size_t i = 0; i < 6; i++)
	{
		if (easyfind(m, i) == m.end())
			std::cout << "not found " << i << std::endl;
		else
			std::cout << "found " << easyfind(m, i)->second << std::endl;
	}

	std::cout << "list" << std::endl;
	std::list<double> l;
	for (size_t i = 0; i < 5; i++) {
		l.push_back(i);
	}

	for (size_t i = 0; i < 6; i++)
	{
		if (easyfind(l, i) == l.end())
			std::cout << "not found " << i << std::endl;
		else
			std::cout << "found " << *easyfind(l, i) << std::endl;
	}
	return (0);
}
