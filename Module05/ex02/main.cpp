/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 01:06:05 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/17 19:37:38 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    {
        try
        {
            Bureaucrat person("simo", 149);
            std::cout << person << std::endl;
            ShrubberyCreationForm shrub("outfile");
            shrub.beSigned(person);
            shrub.execForm(person);
        }
        catch(const std::exception& exc)
        {
            std::cerr << exc.what() << std::endl;
        }
    }
    std::cout << "------------" <<std::endl;
    {
        try
        {
            Bureaucrat person("simo", 1);
            std::cout << person << std::endl;
            RobotomyRequestForm robot("rob");
            robot.execForm(person);
        }
        catch(const std::exception& exc)
        {
            std::cerr << exc.what() << std::endl;
        }
    }
    std::cout << "------------" <<std::endl;
    {
        try
        {
            Bureaucrat person("simo", 1);
            std::cout << person << std::endl;
            PresidentialPardonForm president("obama");
            president.beSigned(person);
            president.execForm(person);
        }
        catch(const std::exception& exc)
        {
            std::cerr << exc.what() << std::endl;
        }
    }
}
