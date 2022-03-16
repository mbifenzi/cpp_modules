/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 15:58:17 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/20 16:36:26 by mbifenzi         ###   ########.fr       */
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

bool	Fixed::operator==( Fixed const & obj )
{
	return this->_fixed == obj._fixed;
}

bool	Fixed::operator>( Fixed const & obj )
{
	return this->_fixed > obj._fixed;
}

bool	Fixed::operator<( Fixed const & obj )
{
	return this->_fixed < obj._fixed;
}

bool	Fixed::operator>=( Fixed const & obj )
{
	return this->_fixed >= obj._fixed;
}

bool	Fixed::operator<=( Fixed const & obj )
{
	return this->_fixed <= obj._fixed;
}

bool	Fixed::operator!=( Fixed const & obj )
{
	return this->_fixed != obj._fixed;
}

Fixed		Fixed::operator+( Fixed const & obj ) 
{
	
	return Fixed(this->toFloat() + obj.toFloat());
}

Fixed		Fixed::operator-( Fixed const & obj )
{
	return Fixed(this->toFloat() - obj.toFloat());
}

Fixed		Fixed::operator*( Fixed const & obj )
{
	return (Fixed(this->toFloat() * obj.toFloat()));
}

Fixed		Fixed::operator/( Fixed const & obj )
{
	return Fixed(this->toFloat() / obj.toFloat());
}

Fixed &		Fixed::operator++()
{
	this->_fixed++;
	return (*this);
}
Fixed		Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return temp;
}
Fixed &		Fixed::operator--()
{
	_fixed--;
	return (*this);
}
Fixed		Fixed::operator--(int)
{
	Fixed temp = *this;
	--(*this);
	return temp;
}

Fixed &	Fixed::min(Fixed & obj1, Fixed & obj2)
{
	return obj1.getRawBits() > obj2.getRawBits() ? obj2 : obj1;
}
Fixed	& Fixed::max(Fixed &obj1, Fixed &obj2)
{
	return obj1.getRawBits() <obj2.getRawBits() ?obj2 :obj1;
}
const	Fixed & Fixed::min(const Fixed & obj1, const Fixed &obj2)
{
	return obj1.getRawBits() >obj2.getRawBits() ?obj2 :obj1;
}
const	Fixed & Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	return obj1.getRawBits() <obj2.getRawBits() ? obj2 : obj1;
}