/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:18:29 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/23 20:18:24 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    Animal *animals[4];

    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for (int i = 0; i < 4; i++)
    {
        delete animals[i];
    }
    Cat *cat = new Cat();
    Cat DeepCat(*cat);
    delete cat;
    std::cout << DeepCat.getType() + " - - - " << DeepCat.getBrains(10) << std::endl;

    Dog *dog = new Dog();
    Dog DeepDog(*dog);
    delete dog;
    std::cout << DeepDog.getType() + " - - - " << DeepDog.getBrains(10)<< std::endl;
}
