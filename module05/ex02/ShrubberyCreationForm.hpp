/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 03:15:35 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/01/18 02:12:53 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"

// class Form;
class ShrubberyCreationForm : public Form
{
private:
    std::string _target;
public:
    ShrubberyCreationForm(/* args */);
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm( ShrubberyCreationForm const & obj );
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm   &operator=(ShrubberyCreationForm const &obj);
    void    execForm(Bureaucrat const &person) const; 
};



#endif