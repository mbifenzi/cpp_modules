/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:10:01 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/28 20:46:07 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool is_digits(const std::string &str)
{
    return str.find_first_not_of("0123456789") == std::string::npos;
}

void	printChar(char _char)
{
	if (_char == 0 || !isprint(_char))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << _char << "'" << std::endl;
}

void	printInt(int _int)
{
	std::cout << "int: " << _int << std::endl;
}
void	printFloat(float _float)
{
	if (_float - static_cast<int>(_float) != 0)
		std::cout << "float: " << _float << 'f' << std::endl;
	else
		std::cout << "float: " << _float << ".0f" << std::endl;
}

void	printDouble(double _double)
{
	if (_double - static_cast<int>(_double) == 0)
		std::cout << "double: " << _double << ".0" << std::endl;
	else
		std::cout << "double: " << _double << std::endl;
}

int main(int argc, char **argv)
{
    if (argc != 2)
	{
		std::cout << "Invalid Arguments" << std::endl;
		return (0);
	}
	std::string arg = std::string(argv[1]);
	if (!arg.compare("nan"))
	{
		std::cout << "char: non displayable\n";
		std::cout << "int: impossible\n";
		std::cout << "float: " << "nanf" << std::endl;
		std::cout << "double: " << "nan" << std::endl;
		return (0);
	}
	else if (arg.find_last_of("f") != std::string::npos)
	{
		if (!arg.compare("+inff") || !arg.compare("-inff") || !arg.compare("nanf"))
		{
			std::cout << "char: non displayable\n";
			std::cout << "int: impossible\n";
			std::cout << "float: " << arg << std::endl;
			std::cout << "double: " << arg.substr(0, arg.size() - 1) << std::endl;
			return 0;
		}
		else if (!arg.compare("+inf") || !arg.compare("-inf"))
		{
			std::cout << "char: non displayable\n";
			std::cout << "int: impossible\n";
			std::cout << "float: " << arg << std::endl;
			std::cout << "double: " << arg.substr(0, arg.size());
			return 0;
		}
		else  if (arg.find_last_of('f') != std::string::npos && arg.find('.') != std::string::npos)
		{
			float	f;
			double d;
			int i;
			f = 0.0;
			d = 0.0;
			i = 0;
			std::cout << "char: non displayable\n";
			try
			{
				f = std::stof(arg);
				d = std::stod(arg);
				i = stoi(arg);
			}
			catch(const std::exception& e)
			{
				std::cerr << "char: non displayable\n";
				std::cerr << "int: impossible\n";
				std::cerr << "float: impossible\n";
				std::cerr << "double: impossible\n";
				return(0);
			}
			printInt(i);
			printFloat(f);
			printDouble(d);
			return 0;
		}
		else
		{
			std::cerr << "char: non displayable\n";
			std::cerr << "int: impossible\n";
			std::cerr << "float: impossible\n";
			std::cerr << "double: impossible\n";
			return 0;
		}
	}
	else if (arg.find('.') != std::string::npos)
	{
		double d;
		float f;
		int i;
		d = 0.0;
		f = 0.0f;
		i = 0;
		std::cout << "char: non displayable\n";
		try
		{
				f = std::stof(arg);
				d = std::stod(arg);
				i = stoi(arg);
		}
		catch(const std::exception& e)
		{
			std::cerr << "char: non displayable\n";
			std::cerr << "int: impossible\n";
			std::cerr << "float: impossible\n";
			std::cerr << "double: impossible\n";
			return(0);
		}
		printInt(i);
		printFloat(f);
		printDouble(d);
		return 0;
	}
	else if (arg.size() == 1 && !(is_digits(arg)))
	{
		int i;
		double d;
		float	f;
		f = 0.0;
		d = 0.0;
		i = 0;
		try
		{
			i = static_cast<int>(argv[1][0]);
			d = static_cast<double>(argv[1][0]);
			f = static_cast<float>(argv[1][0]);
		}
		catch(const std::exception& e)
		{
			std::cerr << "char: non displayable\n";
			std::cerr << "int: impossible\n";
			std::cerr << "float: impossible\n";
			std::cerr << "double: impossible\n";
			return(0);
		}
		if ((i < 0 || i > 127) || (i < 32))
			std::cout << "char : non displayable\n";
		else
			std::cout << "char : " << static_cast<char>(i) << std::endl;
		printInt(i);
		printFloat(f);
		printDouble(d);
	}
	else
	{
		int i;
		double d;
		float	f;
		f = 0.0;
		d = 0.0;
		i = 0;
		try
		{
			i = stoi(arg);
			d = std::stod(arg);
			f = std::stof(arg);
		}
		catch(const std::exception& e)
		{
			std::cerr << "char: non displayable\n";
			std::cerr << "int: impossible\n";
			std::cerr << "float: impossible\n";
			std::cerr << "double: impossible\n";
			return(0);
		}
		if ((i < 0 || i > 127) || (i < 32))
			std::cout << "char : non displayable\n";
		else
			std::cout << "char : " << static_cast<char>(i) << std::endl;
		printInt(i);
		printFloat(f);
		printDouble(d);
		return 0;
	}
}
