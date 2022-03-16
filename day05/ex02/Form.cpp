/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:09:36 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/26 23:16:07 by mbifenzi         ###   ########.fr       */
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
	std::cout << "Form destructer Called " << std::endl;
}

Form&   Form::operator=(const Form& obj)
{
    this->_state = obj._state;
	return(*this);
}

std::string	 Form::getName() const
{
	return _name;
}

int		Form::getExecGrade() const
{
	return _execGrade;
}

int		Form::getSignGrade() const
{
	return _signGrade;
}

bool	Form::getState() const
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

const char* Form::notSignedException::what() const throw()
{
	return "Not Signed";
}
const char* Form::notExecutedException::what() const throw()
{
	return "Not Executed";
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (this->getExecGrade() == false)
        throw(notSignedException());
    if (executor.getGrade() > _execGrade)
		throw(notExecutedException());
	executor.executeForm(*this);
}

std::ostream &operator<<(std::ostream &output, Form &obj)
{
    output << "name : " << obj.getName() << std::endl;
    output << "sign Grade : " << obj.getSignGrade() << std::endl;
	output << "exec Grade : " << obj.getExecGrade() << std::endl;
	output << "state: " << ((obj.getState()) ? " signed " : " not signed ") << std::endl;
	return output;
}