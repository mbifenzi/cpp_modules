/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:45:12 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/15 19:02:09 by mbifenzi         ###   ########.fr       */
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

/* ------------------ WrongCat ---------------*/

WrongCat::WrongCat()
{
	_Type = "WrongCat";
	std::cout << "WrongCat's default constructer called!" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src )
{
	std::cout << "WrongCat's copy constructer called!" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat's destructer called!" << std::endl;
}

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	_Type = rhs._Type;
	return *this;
}

void WrongCat::makeSound()const
{
	std::cout << "SOUND ON ======= MEOW MEOW MEOW" << std::endl;
}