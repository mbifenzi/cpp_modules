/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 01:49:05 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/14 01:49:59 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOGCAT_HPP
#define DOGCAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat: public Animal
{
    private:

	protected:

	public:
		Cat();
		Cat(Cat const &obj);
		~Cat();
		Cat &operator=(Cat const& obj);
		 void makeSound() const;
};

class Dog: public Animal
{
    private:
    
    public:
        Dog();
		Dog(Dog const &obj);
		~Dog();
		Dog &operator=(Dog const& obj);
        void makeSound() const;
};

#endif