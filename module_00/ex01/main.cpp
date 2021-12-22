/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:42:52 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/12/22 18:09:59 by mbifenzi         ###   ########.fr       */
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
		if (cmd == "add")
		{
			call.addContact(index);
			index++;
			i++;
		}
		else if (cmd == "search")
			call.printContact(i);
		else if (cmd == "exit")
			exit (0);
	} while (1);
	

}