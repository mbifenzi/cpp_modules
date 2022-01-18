/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 23:33:38 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/12/27 00:20:22 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(string name)
{
    _name = name;
}

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
    cout << "Zombies destroyed" << endl;
}

void    Zombie::setName(string name)
{
    _name = name;
}

void    Zombie::announce(void)
{
    cout << _name << " BraiiiiiiinnnzzzZ..." << endl;
}
