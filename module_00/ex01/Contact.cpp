/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:28:17 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/12/24 15:25:06 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int     ft_isascii(string s)
{
    for (size_t i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            return (1);
    }
    return (0);
}
int     ft_isdigit(string s)
{
    if (s == "")
        return  (1);
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
    while(getline(cin, firstName))
    {
        if (!ft_isascii(firstName))
            cout << "enter a valid first name : ";
        else
            break ;
    }
    cout << "enter your last name: ";
    while (getline(cin, lastName))
    {
        if (!ft_isascii(lastName))
            cout << "enter a valid Last name : ";
        else
            break ;
    }
    cout << "enter your nickname: ";
    while (getline(cin, nickName))
    {
        if (!ft_isascii(nickName))
            cout << "enter a valid nick name : ";
        else
            break ;
    }
    cout << "enter your darkest secret: ";
    while (getline(cin, darkSecret))
    {
        if (!ft_isascii(darkSecret))
            cout << "enter a valid dark secret : ";
        else
            break ;
    }
    cout << "enter your phone number : ";
    while (getline(cin, phoneNumber) )
    {
        if (ft_isdigit(phoneNumber))
            cout << "enter a valid phone number : " ; 
        else
            break ;
    }
}
