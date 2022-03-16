/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 01:06:09 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/25 02:13:09 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
private:
    const std::string _Name;
    int _Grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat( const Bureaucrat & obj );
    ~Bureaucrat();
    Bureaucrat & operator=(const Bureaucrat &obj);
    class GradeTooHighException: public std::exception
    {
        const char* what() const throw();
    };
    class GradeTooLowException:public std::exception
    {
        const char* what() const throw();
    };
    void    increment();
    void    decrement();

    std::string getName() const;
    int getGrade() const;
};

std::ostream&   operator<<(std::ostream &output, Bureaucrat &obj);    



#endif