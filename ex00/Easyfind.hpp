#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
int easyfind(T t, int i)
{
	typename T::iterator it = std::find(t.begin(), t.end(), i);

	while (it != t.end())
	{
		size_t index = std::distance(t.begin(), it);

		if (*it == i)
		{
			std::cout << *it << " found at emplacement " << index << std::endl;
			return index;
		}
		it++;
	}
	std::cout << "Iteration not found" << std::endl;
	return 0;
}
