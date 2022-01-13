/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 22:52:35 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/13 00:32:38 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap:public ClapTrap
{
	private:

	public:

		FragTrap();
		FragTrap(string name);
		FragTrap( FragTrap const & src );
		~FragTrap();
		FragTrap &		operator=( FragTrap const & rhs );
		void highFivesGuys(void);

};

#endif