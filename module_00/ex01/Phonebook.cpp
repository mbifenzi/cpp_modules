/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 13:42:27 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/12/22 17:56:46 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

string	Phonebook::resizeContact(int index)
{
	
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
			cout << " ";
			cout << "    Id    |";
			cout << setw(11) << "First_name|";
			cout << setw(11) << "Last_name|";
			cout << setw(11) << "Nick_Name|" << endl;
			for(int i = 0; i < max; i++)
		{
					
			cout << setw(11) << i << "|" ;
			cout << setw(11) << person[i].getFname() + "|" ;
			cout << setw(11) << person[i].getLname() + "|" ;
			cout << setw(11) << person[i].getNname() + "|" << endl;
		}
			cout << "enter ID :";
			getline(cin, str);
			id = str[0] - 48;
			if (str.length() > 1 || id > max)
				cout << "nothing to show";
			else
				searchContact(id);
			
	}	
}
