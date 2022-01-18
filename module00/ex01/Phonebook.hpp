/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:22:47 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/12/24 16:25:19 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define  PHONEBOOK_HPP
#include "Contact.hpp"

class Phonebook
{
	private:
		Contact person[8];
	public:
		void	printContact(int max);
		void	searchContact(int index);
		void    addContact(int index);
};
		string resizeContact(string info);

#endif
