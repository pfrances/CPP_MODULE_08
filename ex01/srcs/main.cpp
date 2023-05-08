/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:29:05 by pfrances          #+#    #+#             */
/*   Updated: 2023/05/08 10:13:44 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	Span sp = Span(5);
	// std::cout << sp.shortestSpan() << std::endl; // throw exception
	// std::cout << sp.longestSpan() << std::endl; // throw exception
	sp.addNumber(6);
	// std::cout << sp.shortestSpan() << std::endl; // throw exception
	// std::cout << sp.longestSpan() << std::endl; // throw exception
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	// sp.addNumber(11); // throw exception
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	Span sp2 = Span(10000);
	std::vector<int> v;
	for (int i = 0; i < 10000; i++)
		v.push_back(i);
	sp2.addNumber(v.begin(), v.end());
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	return 0;
}
