/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 01:49:05 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/14 04:42:07 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOGCAT_HPP
#define DOGCAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
		Brain* _Brain;
	public:
		Cat();
		Cat( const Cat & obj);
		~Cat();
		Cat &operator=(Cat const& obj);
		void makeSound() const;
		std::string getBrains(int index);
};

class Dog: public Animal
{
    private:
		Brain* _Brain;
    public:
        Dog();
		Dog(Dog const &obj);
		~Dog();
		Dog &operator=(Dog const& obj);
        void makeSound() const;
		std::string getBrains(int index);
};

#endif