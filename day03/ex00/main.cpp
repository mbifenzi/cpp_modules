/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:20:01 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/22 16:55:43 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <fstream>

int main()
{
    ClapTrap A("eren");
    ClapTrap B("mikasa");

    cout << A.getAttackDamage() << endl;

    A.attack(B.getName());
    B.takeDamage(A.getAttackDamage());
    B.beRepaired(10);
    cout << A << endl;
    cout << B << endl;
}