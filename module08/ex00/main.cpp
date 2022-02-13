
#include "easyfind.hpp"



int main()
{
	// std::vector<int>	array;
	// int  j = 10;
	// for(int i = 0; i < 7; i++)
	// 	array.push_back(j++);
	// easyfind(array, 3);
	std::vector<int> test;
	int  j = 10;
	for(int i = 0; i < 7; i++)
		test.push_back(j++);
	std::vector<int>::iterator it;
	it = std::find(test.begin(), test.end(), 2);
	if (*it != 2)
		throw std::string("Not found");
}


