/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 16:07:15 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/12/31 19:25:07 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>
#include <fstream>

# define	string std::string
# define	cout std::cout
# define 	getline std::getline
# define	endl std::endl

class Karen
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
public:
    Karen();
    ~Karen();
    void complain( string level );
};

#endif
