/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:20:01 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/12 22:41:48 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap A("Eren");
    ScavTrap B("Mikasa");
    cout << "Before : " << endl;
    cout << A << endl;
    cout << B << endl;
    A.attack(B.getName());
    B.takeDamage(A.getAttackDamage());
    B.beRepaired(10);
    cout << "After : " << endl;
    cout << A << endl;
    cout << B << endl;
}