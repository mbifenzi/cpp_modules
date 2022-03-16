/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:56:11 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/22 16:55:46 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

# define	string std::string
# define	cout std::cout
# define	cin std::cin
# define	endl std::endl
# define 	getline std::getline

class ClapTrap
{
    private :
        string _Name;
        unsigned int _HitPoints;
        unsigned int _EnergyPoints;
        unsigned int _AttackDamage;
    public :
        ClapTrap();
		ClapTrap(string name);
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

        void attack(string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
		ClapTrap &		operator=( ClapTrap const & rhs );
		void setName(string const name);
		void setHitPoint(int const hp);
		void setEnergyPoints(int const ep);
		void setAttackDamage(int const ad);
		string getName(void);
		int  getHitPoint(void);
		int  getEnergyPoints(void);
		int  getAttackDamage(void);
};
std::ostream & operator<<(std::ostream &os, ClapTrap &obj);
#endif