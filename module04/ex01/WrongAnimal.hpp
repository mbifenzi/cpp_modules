/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:38:46 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/13 19:50:22 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal
{
    private:

	protected:
		std::string _Type;

	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const & obj);
		WrongAnimal &		operator=( WrongAnimal const & obj );
		virtual ~WrongAnimal();
		
        std::string    getType() const;
        void    setType(std::string type);
		void makeSound()const;
};

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