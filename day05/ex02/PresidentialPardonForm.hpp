/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:16:34 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/26 23:13:20 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

// class Form;
class PresidentialPardonForm : public Form
{
private:
    std::string _target;
public:
    PresidentialPardonForm(/* args */);
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm( PresidentialPardonForm const & obj );
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm  &operator=(PresidentialPardonForm const &obj);
    void    execute(Bureaucrat const &obj) const;
};

#endif