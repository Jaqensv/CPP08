#pragma once

#include <iostream>
#include <vector>

class Span {

public:

	Span(unsigned int n);
	~Span();
	Span(Span const &src);
	Span &operator=(Span const &rhs);

	void addNumber(int value);
	size_t shortestSpan() const;
	size_t longestSpan() const;

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