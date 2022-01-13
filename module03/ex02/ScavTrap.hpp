/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:01:53 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/12 22:35:46 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
#define SCRAVTRAP_HPP
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
	private:

	public:

		ScavTrap();
		ScavTrap(string name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();
		// void	attack(string const & target);
		ScavTrap &		operator=( ScavTrap const & rhs );
		void guardGate(void);

};

#endif