/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 16:06:46 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/19 17:53:32 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
    Karen scream;

    scream.complain("DEBUG");
    scream.complain("INFO");
    scream.complain("WARNING");
    scream.complain("ERROR");    
}