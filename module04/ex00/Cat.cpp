/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:05:47 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/13 19:55:31 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

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