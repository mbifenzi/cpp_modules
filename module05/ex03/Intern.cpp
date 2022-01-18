/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 01:30:25 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/18 04:45:06 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern const& obj)
{
    *this = obj;
}	

Form*   Intern::makeForm(std::string name, std::string target) 
{
   std::string	formsNames[3] = {"Robotomy Request", "Shrubbery Creation", "Presidential Pardon"};
	Form* (*f[3])(std::string target);
	f[0] = ShrubberyCreationForm::create;
	f[1] = RobotomyRequestForm::create;
	f[2] = PresidentialPardonForm::create;
    for (int i = 0; i < 3; i++)
	{
		if (name == formsNames[i])
		{
			std::cout << "Intern creates " + name << std::endl;
			return f[i](target);
		}
	}
	throw(FormNotFound());
}

const char* Intern::FormNotFound::what()const throw()
{
	return "Form Not Found";
}