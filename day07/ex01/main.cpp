
#include "iter.hpp"

int main()
{
    int		ints[5] = {11, 12, 13, 14, 15};
    float	floats[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char	chars[5] = "bife";

    std::cout << " ------- this is ints -------" << std::endl;
	iter(ints, 5, func);
	std::cout << " ------- this is floats -------" << std::endl;
	iter(floats, 5, func);
	std::cout << " ------- this is chars -------" << std::endl;
	iter(chars, 5, func);
}