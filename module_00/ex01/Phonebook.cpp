/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 13:42:27 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/12/22 15:12:17 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"


void	Phonebook::addContact(int index)
{
	person[index].setInfo();
}

void	Phonebook::printContact(int index, int max)
{		
	if (max == 0)
		cout << "no contacts to show" << endl;
	else
	{
		for(int i = 0; i < max; i++)
		{
			cout << "    Id    |";
			cout << setw(11) << "First_name|";
			cout << setw(11) << "Last_name|";
			cout << setw(11) << "Nick_Name|" << endl;
		}
	}
	
}
