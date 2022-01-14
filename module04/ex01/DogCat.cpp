/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 01:50:23 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/14 01:51:32 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogCat.hpp"

/*-------------------------- Cat --------------------------*/
Cat::Cat()
{
	_Type = "Cat";
	std::cout << "Cat's default constructer called!" << std::endl;
}

Cat::Cat( const Cat & src )
{
	std::cout << "Cat's copy constructer called!" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat's destructer called!" << std::endl;
}

Cat &				Cat::operator=( Cat const & obj )
{
	_Type = obj._Type;
	return *this;
}

void Cat::makeSound()const
{
	std::cout << "SOUND ON ======= MEOW MEOW MEOW" << std::endl;
}

/*-------------------------- Dog --------------------------*/

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
