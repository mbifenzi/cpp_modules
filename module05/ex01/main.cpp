/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 01:06:05 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/17 01:54:13 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat person("simo", 1);
        std::cout << person << std::endl;
        Form    letter("bif",10, 12);
        letter.beSigned(person);
        std::cout << letter << std::endl;
    }
    catch(const std::exception& exc)
    {
        std::cerr << exc.what() << '\n';
    }
    
    
}