/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:20:01 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/13 01:04:29 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap A("Eren");
    FragTrap B("Mikasa");
    FragTrap C;

    C = A;
    cout << "Before : " << endl;
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
    A.attack(B.getName());
    B.takeDamage(A.getAttackDamage());
    B.beRepaired(10);
    C.highFivesGuys();
    cout << "After : " << endl;
    cout << A << endl;
    cout << B << endl;
}