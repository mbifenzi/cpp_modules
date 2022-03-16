/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 02:09:22 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/14 04:09:37 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Brain
{
    private:
        std::string _Ideas[100];
	public:
		Brain();
		Brain(Brain const &obj);
		~Brain();
		Brain &operator=(Brain const& obj);
		std::string getIdeas(int index)const;
		void setIdeas(int index, std::string idea);
};
#endif