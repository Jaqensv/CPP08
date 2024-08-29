/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:02:04 by mde-lang          #+#    #+#             */
/*   Updated: 2024/08/29 22:53:57 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int n) : _N(n) {}

Span::~Span() {}

Span::Span(Span const &src) : _N(src._N) {*this = src;}

Span &Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		_N = rhs._N;
		_values = rhs._values;
		// _it = rhs._it;
	}
	return *this;
}

void Span::addNumber(int value) {(_values.size() < _N) ? _values.push_back(value) : throw Exception("Max values size reached");}

size_t Span::shortestSpan()
{
	if (_values.size() < 2 || (_values.size() == 2 && _values[0] == _values[1]))
		throw Exception("Not enough different values stored");
	int range = INT_MAX;
	for (std::vector<int>::iterator it = _values.begin(); it != _values.end(); it++)
	{
		for (std::vector<int>::iterator it2 = _values.begin(); it2 != _values.end(); it2++)
		{
			if ((*it - *it2 != 0) && (*it - *it2 < range))
				range = *it - *it2;
		}
	}
	if (range < 0)
		range *= -1;
	return range;
}

size_t Span::longestSpan()
{
	if (_values.size() < 2 || (_values.size() == 2 && _values[0] == _values[1]))
		throw Exception("Not enough different values stored");
	int range = 0;
	for (std::vector<int>::iterator it = _values.begin(); it != _values.end(); it++)
	{
		for (std::vector<int>::iterator it2 = _values.begin(); it2 != _values.end(); it2++)
		{
			if ((*it - *it2 != 0) && (*it - *it2 > range))
				range = *it - *it2;
		}
	}
	if (range < 0)
		range *= -1;
	return range;
}

Span::Exception::Exception(std::string error) : _error(error) {}
Span::Exception::Exception::~Exception() throw() {}


///////SORT VALUE AVANT