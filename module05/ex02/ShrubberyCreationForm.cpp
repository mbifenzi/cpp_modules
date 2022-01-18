/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 03:28:57 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/17 19:36:58 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm()
{  
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :Form("Shrubbery", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & obj )
{
    *this = obj;
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
    this->_target = obj._target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery destructer Called " << std::endl;
}

void    ShrubberyCreationForm::execForm(Bureaucrat const &executor) const
{
    if (this->getState() == false)
        throw(notSignedException());
    if (executor.getGrade() > getExecGrade())
		throw(notExecutedException());

	std::string target(_target);
	target.append("_shrubbery");
    std::ofstream outfile(target);

    if (outfile.is_open())
    {
		outfile << "		                      ___"<<std::endl;
		outfile << "                _,-'""   """"`--."<<std::endl;
		outfile << "             ,-'          __,,--  "<<std::endl;
		outfile << "           ,'    __,--""""dF      )"<<std::endl;
		outfile << "          /   .- Hb_,--  dF      /"<<std::endl;
		outfile << "        ,'       _Hb ___dF -._,- "<<std::endl;
		outfile << "      ,'      _,-""""   ""--..__"<<std::endl;
		outfile << "     (     ,-'                  `."<<std::endl;
		outfile << "      `._,'     _   _             ;"<<std::endl;
		outfile << "       ,'     ,' `-'Hb-.___..._,-'"<<std::endl;
		outfile << "       \\    , Hb.-'HH`-.dHF "<<std::endl;
		outfile << "        `--'    Hb  HH  dF "<<std::endl;
		outfile << "                 Hb HH dF"<<std::endl;
		outfile << "                  HbHHdF"<<std::endl;
		outfile << "                  |HHHF"<<std::endl;
		outfile << "                  |HHH|"<<std::endl;
		outfile << "                  |HHH|"<<std::endl;
		outfile << "                  |HHH|"<<std::endl;
		outfile << "                  |HHH|"<<std::endl;
		outfile << "                  dHHHb"<<std::endl;
		outfile << "                .dFd|bHb.               o"<<std::endl;
		outfile << "      o       .dHFdH|HbTHb.          o /"<<std::endl;
		outfile << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y"<<std::endl;
		outfile << "##########################################"<<std::endl;
    }
    else
		std::cout << " INVALID FILE" << std::endl;
	outfile.close();
    executor.executeForm(*this);
    
}