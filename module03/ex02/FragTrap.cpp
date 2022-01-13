/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 22:52:40 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/13 01:12:57 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(string name)
{
	cout << "FragTrap constructor called" << endl;
	_Name = name;
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
}

FragTrap::FragTrap()
{
	cout << "Default FragTrap constructor called" << endl;
}

FragTrap::FragTrap( const FragTrap & src )
{
	cout << "FragTrap copy constructor called" << endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	cout << "FragTrap destructor called" << endl;
}

FragTrap &				FragTrap::operator=( FragTrap const & src )
{
	_Name = src._Name;
	_HitPoints = src._HitPoints;
	_EnergyPoints = src._EnergyPoints;
	_AttackDamage = src._AttackDamage;
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
        cout <<"FragTrap " << _Name << " : *high Five Guys*" << endl;
}
