/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrances <pfrances@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:56:36 by pfrances          #+#    #+#             */
/*   Updated: 2023/05/08 10:32:23 by pfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <algorithm>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>{
public:
	MutantStack(void) : std::stack<T>(){};
	MutantStack(const MutantStack &other) : std::stack<T>(other){};
	MutantStack &operator=(const MutantStack &other) {
		if (this != &other)
			std::stack<T>::operator=(other);
		return (*this);
	};
	virtual ~MutantStack(void){};

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin(void) {
			return (std::stack<T>::c.begin());
	};
	iterator end(void) {
		return (std::stack<T>::c.end());
	};
};

#endif
