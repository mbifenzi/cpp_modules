/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 01:50:23 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/23 18:55:44 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

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

