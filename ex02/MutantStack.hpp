#pragma once

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {

public:

	MutantStack<T>() : stack() {};
	~MutantStack<T>() {};
	MutantStack<T>(MutantStack const &src) : stack(src) {};
	MutantStack<T> &operator=(MutantStack const &rhs) {if (*this != rhs) *this = rhs; return *this;};
	typedef typename	std::stack<T> stack;
		typedef typename	stack::container_type::iterator iterator;
		iterator	begin() {
			return (this->c.begin());
		}
		iterator	end() {
			return (this->c.end());
		}

};