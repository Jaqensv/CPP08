#pragma once

#include <iostream>
#include <vector>
#include <algorithm> // sort()

#define INT_MAX 2147483647
#define ROUNDER 10000000

class Span {

public:

	Span(unsigned int n);
	~Span();
	Span(Span const &src);
	Span &operator=(Span const &rhs);

	void addNumber(int value);
	void addPack(unsigned int value_number);
	size_t shortestSpan();
	size_t longestSpan();

	class Exception : public std::exception {
	public:
		virtual ~Exception() throw();
		Exception(std::string error);
		virtual const char* what() const throw() {
			return _error.c_str();
		}
	private:
		std::string _error;
	};

private:

	Span();
	unsigned int _N;
	std::vector<int> _values;

};