/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:45:12 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/23 18:49:23 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal's default constructer called!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << "WrongAnimal's copy constructer called!" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal's destructer called!" << std::endl;
}

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & src )
{
	_Type = src._Type;
	return *this;
}


void WrongAnimal::makeSound()const
{
	std::cout << "SOUND ON ======= WrongANIMAL is making a sound!" << std::endl;
}

void WrongAnimal::setType(std::string type)
{
	_Type = type;
}

std::string	WrongAnimal::getType(void) const
{
	return _Type;
}
