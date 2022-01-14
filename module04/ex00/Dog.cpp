/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:09:57 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/13 19:54:35 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() 
{
	_Type = "Dog";
	std::cout << "Dog's default constructer called!" << std::endl;
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog's copy constructer called!" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog's destructer called!" << std::endl;
	
}

Dog &				Dog::operator=( Dog const & obj )
{
	_Type = obj._Type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "SOUND ON ======= HAWHAW HAWHAW HAWHAW!" << std::endl;
}
