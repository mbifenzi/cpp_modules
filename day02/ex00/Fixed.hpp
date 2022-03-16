/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 15:56:43 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/20 15:05:44 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

class Fixed
{
private:
    int _fixed;
    static int const _bits;
public:
    Fixed();
    Fixed(int n);
    Fixed(const Fixed &obj);
    ~Fixed();
    Fixed 	&operator=( Fixed const & obj );
    int getRawBits(void) const;
    void setRawBits(int const raw);
};
