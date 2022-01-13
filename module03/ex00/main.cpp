/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:20:01 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/12 16:20:42 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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