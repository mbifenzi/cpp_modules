/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:19:27 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/14 15:18:10 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    private:

	protected:
		std::string _Type;

	public:
		Animal();
		Animal(Animal const & obj);
		Animal &		operator=( Animal const & rhs );
		virtual ~Animal();
		
        std::string    getType() const;
        void    setType(std::string type);
		virtual void makeSound()const = 0;
};

#endif