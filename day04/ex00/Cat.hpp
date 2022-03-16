/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 01:49:05 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/23 18:46:56 by mbifenzi         ###   ########.fr       */
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

#endif