/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:01:25 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/26 23:13:37 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

// class Form;
class RobotomyRequestForm : public Form
{
private:
    std::string _target;
public:
    RobotomyRequestForm(/* args */);
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm( RobotomyRequestForm const & obj );
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm  &operator=(RobotomyRequestForm const &obj);
    void    execute(Bureaucrat const &obj) const;
};



#endif