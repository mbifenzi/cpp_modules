/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 13:42:27 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/12/24 16:29:30 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

string	resizeContact(string contact)
{	
	if (contact.length() >= 10)
	{
		contact = contact.substr(0, 10);
		contact[9] = '.';
	}
	return (contact);
		
}
void	Phonebook::searchContact(int id)
{	
	cout << "first name : " << person[id].getFname() << endl;
	cout << "last name : " << person[id].getLname() << endl;
	cout << "nickname : " << person[id].getNname() << endl;
	cout << "darkest secret : " << person[id].getDsecret() << endl;
	cout << "phone number : " << person[id].getPnumber() << endl;
}

void	Phonebook::addContact(int index)
{
	person[index].setInfo();
}

void	Phonebook::printContact(int max)
{		
	string str;
	int id;
			cout << setw(11) << "index|";
			cout << setw(11) << "First_name|";
			cout << setw(11) << "Last_name|";
			cout << setw(11) << "Nick_Name|" << endl;
			for(int i = 0; i < max; i++)
		{
			cout << setw(10) << i << "|" ;
			cout << setw(11) << resizeContact(person[i].getFname()) + "|" ;
			cout << setw(11) << resizeContact(person[i].getLname()) + "|" ;
			cout << setw(11) << resizeContact(person[i].getNname()) + "|" << endl;
		}
			cout << "enter ID :";
			getline(cin, str);
			if (str == "")
				return;
			id = str[0] - 48;
			if (str.length() > 1 || id > max - 1)
				cout << "nothing to show" << endl;
			else
				searchContact(id);
}
