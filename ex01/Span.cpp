/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:02:04 by mde-lang          #+#    #+#             */
/*   Updated: 2024/08/29 20:39:17 by mde-lang         ###   ########.fr       */
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
		this->_N = rhs._N;
	return *this;
}

void Span::addNumber(int value) {(_values.size() < _N) ? _values.push_back(value) : throw Exception("Max values number reached");}

size_t Span::shortestSpan() const
{

	
}

Span::Exception::Exception(std::string error) : _error(error) {}
Span::Exception::Exception::~Exception() throw() {}