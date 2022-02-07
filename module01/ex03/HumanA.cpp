/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 15:50:25 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/06 15:34:19 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &type) : _a(type)
{
    _name = name;
}

HumanA::~HumanA()
{
    cout << "HumanA destroyed" << endl;
}

void    HumanA::attack()
{
    cout << _name << " attacks with his " << _a.getWeapon() << endl;
}

void    HumanA::setType(string type)
{
    _a = type;
}