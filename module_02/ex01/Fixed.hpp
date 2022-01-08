/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 15:56:43 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/06 00:46:54 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

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
    std::ostream	operator<<( Fixed const & obj );

    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
};
std::ostream& operator<<(std::ostream& os, const Fixed& f);
