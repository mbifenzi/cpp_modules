
#include "easyfind.hpp"

int main()
{
	std::vector<int>	array;
	int  j = 10;
	for(int i = 0; i < 7; i++)
		array.push_back(j++);
	try
	{
			easyfind(array, 13);
	}
	catch(std::string &e)
	{
		std::cerr << e << '\n';
	}
}