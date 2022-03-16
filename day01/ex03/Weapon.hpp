/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 18:17:32 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/19 16:08:58 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>


# define	string std::string
# define	cout std::cout
# define	cin std::cin
# define	endl std::endl
# define	setw std::setw
# define 	getline std::getline

class Weapon
{
    private :
        string _weaponName;
    public :
        Weapon();
        Weapon(string weaponName);
        void	setType(string weaponName);
        string	const& getType();
};

#endif