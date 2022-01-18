/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:03:28 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/17 18:49:09 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "default constructer called!" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade):_Name(name)
{
	std::cout << "constructer called!" << std::endl;
	if (grade < 1)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
	_Grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & obj )
{
	*this = obj;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &obj)
{
	this->_Grade = obj._Grade;
	this->_Name = obj._Name;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "destructer called!" << std::endl;
}

void	Bureaucrat::increment()
{
	_Grade--;
	if (_Grade < 1)
		throw (GradeTooHighException());
}

void	Bureaucrat::decrement()
{
	_Grade++;
	throw (GradeTooLowException());
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

int Bureaucrat::getGrade() const
{
	return this->_Grade;
}
std::string Bureaucrat::getName() const
{
	return this->_Name;
}

void	Bureaucrat::signForm(Form &obj)
{
	if (obj.getState())
		std::cout << this->_Name << " signs " << obj.getName() << std::endl;
	else
		std::cout << this->_Name << "cannot signs " << obj.getName() <<" because he has a low grade "<<std::endl;
}

void 	Bureaucrat::executeForm(Form const & form) const
{
	std::cout << this->getName() << " executes " << form.getName() << std::endl;
}

std::ostream &   operator<<(std::ostream& output, Bureaucrat &obj)  
{
	output << obj.getName() << std::endl;
	output << obj.getGrade() << std::endl;
	return output;
}