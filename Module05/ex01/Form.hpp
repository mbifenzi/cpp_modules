/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:09:40 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/17 01:41:04 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
    std::string const _name;
    int const _signGrade;
    int const _execGrade;
    bool _state;
public:
    Form();
    Form(std::string name, int sGrade, int eGrade);
    Form(Form const& obj);
    ~Form();

    Form & operator=(Form const &obj);
    class GradeTooHighException:public std::exception
    {
        const char* what() const throw();
    };
    class GradeTooLowException:public std::exception
    {
        const char* what() const throw();
    };
    
    std::string getName();
    int getSignGrade();
    int getExecGrade();
    bool getState();
    void    beSigned(Bureaucrat &person);
};

std::ostream &operator<<(std::ostream &output, Form &obj);


#endif