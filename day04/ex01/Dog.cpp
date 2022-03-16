
#include "Dog.hpp"

Dog::Dog() 
{
	_Type = "Dog";
	_Brain = new Brain();
	std::cout << "Dog's default constructer called!" << std::endl;
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog's copy constructer called!" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	delete _Brain;
	std::cout << "Dog's destructer called!" << std::endl;
}

Dog &				Dog::operator=( Dog const & obj )
{
	_Type = obj._Type;
	this->_Brain = new Brain();
	for (int i= 0; i < 100; i++)
	{
		this->_Brain->setIdeas(i, obj._Brain->getIdeas(i));
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "SOUND ON ======= HAWHAW HAWHAW HAWHAW!" << std::endl;
}

std::string Dog::getBrains(int index)
{
	return _Brain->getIdeas(index);
}
void	Dog::setIdea(int index, std::string idea)
{
	_Brain->setIdeas(index, idea);
	std::cout << "this is idea after change " + _Brain->getIdeas(index) << std::endl;
}
