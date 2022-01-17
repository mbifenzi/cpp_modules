/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:01:28 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/17 19:36:32 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <cmath>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
{  
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :Form("Robotomize", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & obj )
{
    *this = obj;
}

RobotomyRequestForm&  RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
    this->_target = obj._target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robot destructer Called " << std::endl;
}

void    RobotomyRequestForm::execForm(Bureaucrat const& executor)const
{
    if(this->getState() == false)
		throw notSignedException();
    if (executor.getGrade() > getExecGrade())
		throw (notExecutedException());
	int rando = rand() % 2;
	if(rando == 0)
	{
		std::cout << this->_target << "  has been robotomized successfully!" << std::endl;
		executor.executeForm(*this);
	}
	else 
		std::cout << _target << " Robotomization Failed Successfully !" << std::endl;
}
