/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 03:05:11 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/17 19:32:35 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{  
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :Form("president", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & obj )
{
    *this = obj;
}

PresidentialPardonForm&  PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
    this->_target = obj._target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "President destructer Called " << std::endl;
}


void    PresidentialPardonForm::execForm(Bureaucrat const& executor)const
{
    if(getState() == false)
		throw notSignedException();
    if (executor.getGrade() > getExecGrade())
		throw (notExecutedException());
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	executor.executeForm(*this);
}

