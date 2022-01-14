/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 01:50:23 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/14 04:39:03 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogCat.hpp"

/*-------------------------- Cat --------------------------*/
Cat::Cat()
{
	std::cout << "Cat's default constructer called!" << std::endl;
	_Type = "Cat";
	_Brain = new Brain();
}

Cat::Cat( const Cat & obj)
{
	std::cout << "Cat's copy constructer called!" << std::endl;
	*this = obj;
}

Cat::~Cat()
{
	delete _Brain;
	std::cout << "Cat's destructer called!" << std::endl;
}

Cat &				Cat::operator=( Cat const & obj )
{
	_Type = obj._Type;
	this->_Brain = new Brain();
	for (int i= 0; i < 100; i++)
	{
		this->_Brain->setIdeas(i, obj._Brain->getIdeas(i));
	}
	return *this;
}

void Cat::makeSound()const
{
	std::cout << "SOUND ON ======= MEOW MEOW MEOW" << std::endl;
}

std::string Cat::getBrains(int index)
{
	return _Brain->getIdeas(index);
}
/*-------------------------- Dog --------------------------*/

Dog::Dog() 
{
	_Type = "Dog";
	_Brain = new Brain();
	std::cout << "Dog's default constructer called!" << std::endl;
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog's copy constructer called!" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	delete _Brain;
	std::cout << "Dog's destructer called!" << std::endl;
}

Dog &				Dog::operator=( Dog const & obj )
{
	_Type = obj._Type;
	this->_Brain = new Brain();
	for (int i= 0; i < 100; i++)
	{
		this->_Brain->setIdeas(i, obj._Brain->getIdeas(i));
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "SOUND ON ======= HAWHAW HAWHAW HAWHAW!" << std::endl;
}

std::string Dog::getBrains(int index)
{
	return _Brain->getIdeas(index);
}