#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

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
		void	setIdea(int index, std::string idea);
};

#endif