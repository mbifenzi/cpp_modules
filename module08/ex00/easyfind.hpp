
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string>
#include <iostream>
#include <iostream>
#include <iterator>
#include <vector>

template <typename T>
void    easyfind(T var, int toFind)
{
   typename std::vector<T>::iterator iter = find(var.begin(), var.end(), toFind);;
    if(*iter != toFind)
        throw(std::string("Nothing Found"));
    std::cout << "objective :" << toFind << "Found successfuly" << std::endl;
}

#endif