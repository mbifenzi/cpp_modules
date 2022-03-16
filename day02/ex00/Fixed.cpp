/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 15:58:17 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/20 15:07:01 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

# define	string std::string
# define	cout std::cout
# define 	getline std::getline
# define	endl std::endl


Fixed::Fixed()
{
    _fixed = 0;
    cout << "Default constructor called" << endl;
}

Fixed::~Fixed()
{
    cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed &obj)
{
	this->_fixed = obj._fixed;
	cout << "Copy constuctor called" << endl;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	this->_fixed = obj._fixed;
	cout << "Assignment operator called" << endl;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called" << endl;
	return _fixed;
}

void	Fixed::setRawBits(int const raw)
{
    cout << "setRawBits member function called" << endl;
	_fixed = raw;
}