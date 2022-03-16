/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 15:47:47 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/19 16:17:49 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(string name)
{
    _name = name;
}

void    HumanB::attack()
{
    cout << _name << " attacks with his " << _b->getType() << endl;
}

void    HumanB::setWeapon(Weapon &type)
{
    _b = &type;
}

HumanB::~HumanB()
{
    cout << "HumanB destroyed" << endl;
}
