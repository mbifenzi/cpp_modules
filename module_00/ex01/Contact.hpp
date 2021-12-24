/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:43:52 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/12/24 16:15:09 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <string>
#include <iomanip>


# define	string std::string
# define	cout std::cout
# define	cin std::cin
# define	endl std::endl
# define	setw std::setw
# define 	getline std::getline

class Contact
{
	private:
		string	firstName;
		string	lastName;
		string	nickName;
		string 	darkSecret;
		string	phoneNumber;
	public:
		void	setInfo();
		string	getFname();
		string	getLname();
		string	getNname();
		string	getDsecret();
		string	getPnumber();
};
int		ft_isdigit(string s);
int     ft_isascii(string s);
#endif