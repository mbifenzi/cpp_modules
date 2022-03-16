
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Animal.hpp"

class WrongCat: public WrongAnimal
{
    public :
        WrongCat();
		WrongCat(WrongCat const &obj);
		virtual ~WrongCat();
		WrongCat &operator=(WrongCat const& obj);
        void makeSound() const;
};

#endif