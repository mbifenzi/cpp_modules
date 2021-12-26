/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 13:01:02 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/12/27 00:32:19 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

# define	string std::string
# define	cout std::cout
# define	cin std::cin
# define	endl std::endl
# define	setw std::setw
# define 	getline std::getline

class Zombie
{
    private :
        string _name;
    public :
        Zombie(string name);
        ~Zombie();
        void    announce(void);
        void    setName(string name);
};
Zombie* newZombie( string name );
void randomChump( string name );
#endif