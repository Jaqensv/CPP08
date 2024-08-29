#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <stack>

int main()
{
	std::vector<std::string> test;

	test.push_back("bonjour");
	test.push_back("coco");


	std::cout << test[0] << std::endl;
	std::cout << test.back() << std::endl;

	std::map<std::string, int> test2;

	test2["Matthieu"] = 34;
	test2["Elias"] = 23;
	test2["Elias"] = 24; // ecrase
	test2.insert(std::make_pair("Boloss", 85)); // n'ecrase pas 

	std::cout << test2["Elias"] << std::endl;
	std::cout <<  test2["Boloss"] << std::endl;


	std::list<int> list;

	list.push_back(9);
	list.push_back(95);
	list.push_back(17);
	
	std::list<int>::iterator it; // pointeur
	it = list.begin();
	list.sort();

	std::cout << *it << std::endl; // dereferencer
	it++;
	std::cout << *it << std::endl;
	it++;
	std::cout << *it << std::endl;

	std::stack<double> stack;

	stack.push(3.2);

	std::cout << stack.top() << std::endl;

	return 0;
}