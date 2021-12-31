/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 12:42:20 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/12/30 15:30:32 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
    private :
        Weapon *_b;
        string _name;
    public :
        HumanB(string name);
        ~HumanB();
		void attack();
        void setWeapon(Weapon &Weapon);
};

#endif
