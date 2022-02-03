/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:10:01 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/03 04:32:28 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

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
	if (_float - static_cast<int>(_float) != (float)0)
		std::cout << "double: " << _float << std::endl;
	else
		std::cout << "double: " << _float << ".0" << std::endl;
}


void	printDouble(double _double)
{
	if (_double -	static_cast<int>(_double) == (double)0)
		std::cout << "float: " << _double << ".0f" << std::endl;
	else
		std::cout << "float: " << _double << "f" << std::endl;
}



int main(int argc, char **argv)
{
    // int		_int;
	// float	_float;
	// double	_double;
	char	_char;
    if (argc != 2)
	{
		std::cout << "Invalid Arguments" << std::endl;
		return (1);
	}
	std::string arg = std::string(argv[1]);
	if (strlen(argv[1]) == 1 && ((argv[1][0] < 48 && argv[1][0] >= 32) || (argv[1][0] > 57 && argv[1][0] < 127)))
	{
		_char = argv[1][0];
		printChar(_char);
		printInt(static_cast<int>(_char));
		printFloat(static_cast<float>(_char));
		printDouble(static_cast<double>(_char));
		return 0;
	}
	else if (arg.find_last_of("f") != std::string::npos)
	{
		if (!arg.compare("+inff") || !arg.compare("-inff") || !arg.compare("nanf"))
		{
			std::cout << "char: impossible\n";
			std::cout << "int: impossible\n";
			std::cout << "float: " << arg << std::endl;
			std::cout << "double: " << arg.substr(0, arg.size() - 1);
			return 0;
		}
		else if (!arg.compare("+inf") || !arg.compare("-inf") || !arg.compare("nan"))
		{
			std::cout << "char: impossible\n";
			std::cout << "int: impossible\n";
			std::cout << "float: " << arg << std::endl;
			std::cout << "double: " << arg.substr(0, arg.size());
			return 0;
		}
		else  if (arg.find_last_of('f') != std::string::npos && arg.find('.') != std::string::npos)
    	{
        	float f;
			f = std::stof(s);
       		std::cout << "char: impossible\n";
			std::cout << "int: impossible\n";
			std::cout << "float: " << arg + 'f' << std::endl;
			std::cout << "double: " << arg;
			return 0;
    	}
		else if (arg.find('.') != std::string::npos && arg.find_last_of('f') == std::string::npos)
		{
			
		}
	}
	else
	{
		// catch(const std::exception& e)
		// {
		// 	std::cerr << e.what() << '\n';
		// }
		std::cerr << "error" << std::endl;
		
	}
}
