
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"


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