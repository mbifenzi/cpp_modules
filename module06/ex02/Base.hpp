/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:07:30 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/06 18:54:48 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
class Base
{
	public:
	virtual ~Base() {}
};

class A : public Base
{
	public:
		A() {}
		virtual ~A() {}
};

class B : public Base
{
	public:
		B() {}
		virtual ~B() {}
};

class C : public Base
{
	public:
		C() {}
		virtual ~C() {}
};

#endif