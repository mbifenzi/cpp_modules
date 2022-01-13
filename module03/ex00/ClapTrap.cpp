/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:56:08 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/12 16:25:59 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	cout << "ClapTrap constructor called" << endl;
}

ClapTrap::ClapTrap(string name)
{
	cout << "Param ClapTrap constructor called" << endl;
	this->_Name = name;
	this->_HitPoints  = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	cout << "Copy constructor called" << endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	cout << "ClapTrap destructor called" << endl;
}

ClapTrap &				ClapTrap::operator=( ClapTrap const & src)
{
	_Name = src._Name;
	_HitPoints = src._HitPoints;
	_EnergyPoints = src._EnergyPoints;
	_AttackDamage = src._AttackDamage;
	return *this;
}

void ClapTrap::setName(string const name)
{
	_Name = name;
}

void ClapTrap::attack(string const & target)
{
	cout << "ClapTrap " + this->_Name + " attack " + target + " causing " << this->_AttackDamage << " points of damage!"<< endl;
}

void    ClapTrap::takeDamage(unsigned int damage)
{
    cout << "ClapTrap " << _Name << " takes " << damage << " of damage!" << endl;
    _HitPoints -= damage;
}


void ClapTrap::setHitPoint(int const hp)
{
	_HitPoints = hp;
}

void ClapTrap::setEnergyPoints(int const ep)
{
	_EnergyPoints = ep;
}

void ClapTrap::setAttackDamage(int const ad)
{
	_AttackDamage = ad;
}

void    ClapTrap::beRepaired(unsigned int health)
{
    cout << "ClapTrap " << _Name << " heals " << health << ", point of health!" << endl;
    _HitPoints += health;
}

string ClapTrap::getName(void)
{
	return _Name;
}

int  ClapTrap::getHitPoint(void)
{
	return _HitPoints;
}

int  ClapTrap::getEnergyPoints(void)
{
	return _EnergyPoints;
}

int  ClapTrap::getAttackDamage(void)
{
	return _AttackDamage;
}

std::ostream & operator<<(std::ostream &os, ClapTrap &obj)
{
	os <<  "name : " << obj.getName() << endl;
	os << "Hit Points : " << obj.getHitPoint() << endl;
	os << "Energy Points : " << obj.getEnergyPoints() << endl;
	os << "Attack Damage : " << obj.getAttackDamage() << endl; 
	return (os);
}
