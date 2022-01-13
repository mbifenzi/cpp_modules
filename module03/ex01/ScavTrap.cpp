/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:01:55 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/13 01:00:51 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(string name)
{
	cout << "ScavTrap constructor called" << endl;
	this->_Name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}
ScavTrap::ScavTrap()
{
	cout << "Default ScavTrap constructor called" << endl;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	cout << "ScavTrap copy constructor called" << endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap destructor called" << endl;
}

ScavTrap &				ScavTrap::operator=( ScavTrap const & src )
{
	_Name = src._Name;
	_HitPoints = src._HitPoints;
	_EnergyPoints = src._EnergyPoints;
	_AttackDamage = src._AttackDamage;
	return *this;
}

std::ostream & operator<<(std::ostream &os, ScavTrap &obj)
{
	os <<  "name : " << obj.getName() << endl;
	os << "Hit Points : " << obj.getHitPoint() << endl;
	os << "Energy Points : " << obj.getEnergyPoints() << endl;
	os << "Attack Damage : " << obj.getAttackDamage() << endl; 
	return (os);
}

void ScavTrap::guardGate(void)
{
	cout <<_Name << " is Gate keeper Now" << endl;
}