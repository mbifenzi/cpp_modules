/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 23:33:44 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/19 15:35:45 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, string name )
{
    Zombie *z;
    z = new Zombie[N];
    string newName;
    while (N--)
    {
        newName = name + " Number " + std::to_string(N);
        z[N].setName(newName);
    }
    return (z);
}