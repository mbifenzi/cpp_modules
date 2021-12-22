/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:28:17 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/12/22 18:36:52 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int     ft_isdigit(string s)
{
    for (size_t i = 0; i < s.length(); i++)
    {
        if(s[i] < '0' || s[i] > '9')
            return 1;
    }
    return(0);
}

string    Contact::getFname()
{
    return(firstName);
}

string    Contact::getLname()
{
    return(lastName);
}

string    Contact::getNname()
{
    return(nickName);
}

string    Contact::getDsecret()
{
    return(darkSecret);
}

string    Contact::getPnumber()
{
    return(phoneNumber);
}


void    Contact::setInfo()
{
    cout << "enter your first name: ";
    getline(cin, firstName);
    // std::cout << firstName << std::endl;
    cout << "enter your last name: ";
    getline(cin, lastName);
    cout << "enter your nick name: ";
    getline(cin, nickName);
    cout << "enter your dark secret: ";
    getline(cin, darkSecret);
    cout << "enter your phone number : ";
    while (getline(cin, phoneNumber) )
    {
        if (ft_isdigit(phoneNumber))
            cout << "enter a valid phone number : " ; 
        else
            break ;
    }
}
