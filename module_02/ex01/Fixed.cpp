/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 15:58:17 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/12 02:11:46 by mbifenzi         ###   ########.fr       */
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
Fixed::Fixed(const int i)
{
	cout << "int constructor called" << endl;
	_fixed = i << _bits;
}
Fixed::Fixed(const float i)
{
	cout << "Float constructor called" << endl;
	_fixed = roundf((float)(i *(1 << _bits)));
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

std::ostream	&operator<<( std::ostream &output, Fixed const &obj)
{
	output << obj.toFloat();
	return (output);
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

float Fixed::toFloat(void) const
{
    return(this->_fixed / (float)(1<<Fixed::_bits));
}

int Fixed::toInt(void) const
{
    return((int)this->_fixed>>Fixed::_bits);	
}