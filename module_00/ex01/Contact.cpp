/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:28:17 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/12/22 13:47:02 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

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
    cout << "enter your phone number: ";
    getline(cin, phoneNumber);

}