/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:09:36 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/17 01:45:18 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int sGrade, int eGrade): _name(name), _signGrade(sGrade), _execGrade(eGrade), _state(false)
{
    if (sGrade < 1 || eGrade < 1)
		throw GradeTooHighException();
	if (sGrade > 150 || eGrade > 150)
		throw GradeTooLowException();
}

Form::Form(): _name("default"), _signGrade(0), _execGrade(0), _state(false)
{
}

Form::Form(Form const &obj): _signGrade(0), _execGrade(0), _state(false)
{
    *this = obj;
}

Form::~Form()
{
}

Form&   Form::operator=(const Form& obj)
{
    this->_state = obj._state;
	return(*this);
}

std::string	 Form::getName()
{
	return _name;
}

int		Form::getExecGrade()
{
	return _execGrade;
}

int		Form::getSignGrade()
{
	return _signGrade;
}

bool	Form::getState()
{
	return _state;
}

void	Form::beSigned(Bureaucrat &buro)
{
	if (buro.getGrade() <= _signGrade)
	{
		_state = true;
		buro.signForm(*this);
	}
	else
		throw (GradeTooLowException());
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "grade is too low";
}

std::ostream &operator<<(std::ostream &output, Form &obj)
{
    output << "name : " << obj.getName() << std::endl;
    output << "sign Grade : " << obj.getSignGrade() << std::endl;
	output << "exec Grade : " << obj.getExecGrade() << std::endl;
	output << "state: " << ((obj.getState()) ? " signed " : " not signed ") << std::endl;
	return output;
}
