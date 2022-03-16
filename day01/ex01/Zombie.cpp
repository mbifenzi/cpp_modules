/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 23:33:38 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/19 15:42:46 by mbifenzi         ###   ########.fr       */
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
