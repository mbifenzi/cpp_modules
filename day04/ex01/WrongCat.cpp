
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_Type = "WrongCat";
	std::cout << "WrongCat's default constructer called!" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src )
{
	std::cout << "WrongCat's copy constructer called!" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat's destructer called!" << std::endl;
}

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	_Type = rhs._Type;
	return *this;
}

void WrongCat::makeSound()const
{
	std::cout << "SOUND ON ======= MEOW MEOW MEOW" << std::endl;
}