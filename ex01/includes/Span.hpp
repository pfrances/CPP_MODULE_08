/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:56:36 by pfrances          #+#    #+#             */
/*   Updated: 2023/05/07 18:26:41 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <vector>

class Span {
public:
	Span(void);
	Span(unsigned int N);
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span(void);

	void addNumber(int nb);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	int shortestSpan(void);
	int longestSpan(void);

private:
	unsigned int N_;
	std::vector<int> v_;
};

#endif
