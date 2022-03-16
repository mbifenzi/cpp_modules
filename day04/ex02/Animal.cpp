/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:56:51 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/13 19:35:15 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal's default constructed called!" << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << "Animal's copy constructed called!" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal's destructed called!" << std::endl;
}

Animal &		Animal::operator=( Animal const & src )
{
	_Type = src._Type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "ANIMAL is making a sound!" << std::endl;
}

void Animal::setType(std::string type)
{
	_Type = type;
}

std::string	Animal::getType(void) const
{
	return _Type;
}