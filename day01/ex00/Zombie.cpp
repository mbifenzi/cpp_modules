/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 13:10:12 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/19 14:32:11 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(string name)
{
    _name = name;
    announce();
}

void    Zombie::announce(void)
{
    cout << _name << " BraiiiiiiinnnzzzZ..." << endl;
}
Zombie::~Zombie()
{
    cout << _name << " destroyed " <<endl;
}