/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 12:46:31 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/12/30 14:49:37 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
	private :
		Weapon& _a;
		string _name;
	public :
		HumanA(string name, Weapon &type);
		~HumanA();
		void	attack();
		void	setType(string type);
};

#endif