/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:42:52 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/12/24 15:21:23 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int main()
{
	Phonebook call;
	string  cmd;
	int index = 0;
	int i = 0;
	do
	{
		cout << "ADD ? SEARCH ? OR EXIT ? : ";
		getline(cin, cmd);
		if (i >= 8)
			index = i % 8;
		if (cmd == "ADD")
		{
			call.addContact(index);
			index++;
			i++;
		}
		else if (cmd == "SEARCH")
		{
			if (i == 0)
				cout << "no contacts to show" << endl;
			else if (i >= 8)
				call.printContact(8);		
			else
				call.printContact(i);
					
		}
		else if (cmd == "EXIT")
			exit (0);
	} while (1);
}