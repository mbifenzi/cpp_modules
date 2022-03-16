/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 02:09:18 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/23 19:03:28 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Construct Called" << std::endl;
    for (size_t i = 0; i < 100; i++)
	{
		_Ideas[i] = "idea " + std::to_string(i);
	}
}

Brain::Brain( const Brain & src )
{
    std::cout << "Brain copy Construct Called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain Deleted" << std::endl;
}

Brain &				Brain::operator=( Brain const & obj )
{
	for (size_t i = 0; i < 100; i++)
	{
		_Ideas[i] = obj._Ideas[i];
	}
	
	return *this;
}

std::string Brain::getIdeas(int index) const
{   
    if (index < 100)
        return(_Ideas[index]);
    return _Ideas[0];
}

void    Brain::setIdeas(int index, std::string idea)
{
    if (index < 100)
        _Ideas[index] = idea;        
}
