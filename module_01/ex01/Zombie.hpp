#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

# define	string std::string
# define	cout std::cout
# define	cin std::cin
# define	endl std::endl
# define	setw std::setw
# define 	getline std::getline

class Zombie
{
    private :
        string _name;
    public :
        Zombie(string name);
        Zombie();
        ~Zombie();
        void    announce(void);
        void    setName(string name);
        string getName();
};
Zombie* zombieHorde(int N, string name );

#endif