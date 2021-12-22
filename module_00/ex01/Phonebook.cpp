/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 13:42:27 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/12/22 18:24:01 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

string	Phonebook::resizeContact(string contact)
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
	cout << "nick name : " << person[id].getNname() << endl;
	cout << "dark secret : " << person[id].getDsecret() << endl;
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
	if (max == 0)
		cout << "no contacts to show" << endl;
	else
	{
			cout << "    Id    |";
			cout << setw(11) << "First_name|";
			cout << setw(11) << "Last_name|";
			cout << setw(11) << "Nick_Name|" << endl;
			for(int i = 0; i < max; i++)
		{
			cout << setw(11) << i << "|" ;
			cout << setw(11) << resizeContact(person[i].getFname()) + "|" ;
			cout << setw(11) << resizeContact(person[i].getLname()) + "|" ;
			cout << setw(11) << resizeContact(person[i].getNname()) + "|" << endl;
		}
			cout << "enter ID :";
			getline(cin, str);
			if (str == "")
				return;
			id = str[0] - 48;
			if (str.length() > 1 || id > max)
				cout << "nothing to show";
			else
				searchContact(id);
	}	
}
