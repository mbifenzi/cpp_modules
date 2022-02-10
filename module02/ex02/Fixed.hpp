/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 15:56:43 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/25 04:17:50 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
    int _fixed;
    static int const _bits = 8;
public:
    Fixed();
    Fixed(const int i);
    Fixed(const float i);
    Fixed(const Fixed &obj);
    ~Fixed();
    Fixed &		    operator=( Fixed const & obj );
    bool			operator>( Fixed const & f );
		bool			operator<( Fixed const &obj );
		bool			operator>=( Fixed const &obj );
		bool			operator<=( Fixed const &obj);
		bool			operator==( Fixed const &obj );
		bool			operator!=( Fixed const &obj );
		Fixed			operator+( Fixed const &obj );
		Fixed			operator-( Fixed const &obj );
		Fixed			operator*( Fixed const &obj );
		Fixed			operator/( Fixed const &obj);
		Fixed			&operator++();
		Fixed			operator++(int);
		Fixed			&operator--();
		Fixed			operator--(int);
        static 			Fixed & min(Fixed & obj1, Fixed & obj2);
		static 			Fixed & max(Fixed & obj1, Fixed & obj2);
		static const 	Fixed & min(const Fixed & obj1, const Fixed & obj2);
		static const 	Fixed & max(const Fixed & obj1, const Fixed & obj2);
    std::ostream	operator<<( Fixed const & obj );

    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
};
std::ostream& operator<<(std::ostream& os, const Fixed& f);
