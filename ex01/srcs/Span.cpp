/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:29:33 by pfrances          #+#    #+#             */
/*   Updated: 2023/05/07 18:26:29 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <string>

Span::Span( void ) : N_(0) {
	std::cout << "[Span] default constructor called." << std::endl;
}

Span::Span(unsigned int N) : N_(N) {
	std::cout << "[Span] sized constructor called." << std::endl;
}

Span::Span(const Span& other) : N_(other.N_), v_(other.v_) {
	std::cout << "[Span] copy constructor called." << std::endl;
}

Span&	Span::operator=(const Span& other) {
	if (this != &other) {
		this->N_ = other.N_;
		this->v_ = other.v_;
	}
	std::cout << "[Span] asignment called." << std::endl;
	return *this;
}

Span::~Span( void ) {
	std::cout << "[Span] destructor called." << std::endl;
}

void Span::addNumber(int nb) {
	if (v_.size() < this->N_)
		v_.push_back(nb);
	else
		throw std::exception();
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (v_.size() + std::distance(begin, end) <= this->N_)
		v_.insert(v_.end(), begin, end);
	else
		throw std::exception();
}

int Span::shortestSpan(void) {
	if (v_.size() < 2)
		throw std::exception();
	std::vector<int> tmp = v_;
	std::sort(tmp.begin(), tmp.end());
	int min = tmp[1] - tmp[0];
	for (unsigned int i = 1; i < tmp.size(); i++) {
		if (tmp[i] - tmp[i - 1] < min)
			min = tmp[i] - tmp[i - 1];
	}
	return min;
}

int Span::longestSpan(void) {
	if (v_.size() < 2)
		throw std::exception();
	std::vector<int> tmp = v_;
	std::sort(tmp.begin(), tmp.end());
	return tmp[tmp.size() - 1] - tmp[0];
}


