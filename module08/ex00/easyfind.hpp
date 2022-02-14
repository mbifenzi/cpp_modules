
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string>
#include <iostream>
#include <iostream>
#include <iterator>
#include <vector>

template <typename T>
void    easyfind(T array, int toFind)
{
    typename T::const_iterator iter;
    iter = std::find(array.begin(), array.end(), toFind);
    if(iter == array.end())
        std::cout << "not found" << std::endl;
    else
        std::cout << "objective : - > " << toFind << " < - Found successfuly" << std::endl;
}

#endif