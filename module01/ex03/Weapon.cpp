/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 12:52:49 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/12/29 17:36:41 by mbifenzi         ###   ########.fr       */
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

const string &Weapon::getWeapon()
{
    return (_weaponName);
}