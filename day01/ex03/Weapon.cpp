/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 12:52:49 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/19 16:09:17 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string weaponName)
{
    setType(weaponName);
}

void    Weapon::setType(string weaponName)
{
    _weaponName = weaponName;
}

const string &Weapon::getType()
{
    return (_weaponName);
}