/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:47:12 by mbifenzi          #+#    #+#             */
/*   Updated: 2022/02/19 17:08:03 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

# define	string std::string
# define	cout std::cout
# define 	getline std::getline
# define	endl std::endl
# define	setw std::setw
# define	fstream std::fstream
# define	ifstream std::ifstream
# define	ofstream std::ofstream

void    searchAndReplace(string& line, string s1, string s2)
{
    size_t	pos;
	while ((pos = line.find(s1)) != string::npos)
	{
    	line.erase(line.begin()+pos, line.begin() + pos + s1.length());
    	line.insert(pos, s2);
	}
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        cout << "INVALID ARGUMENTS" << endl;
        exit (0);
    }
    string outfileName(argv[1]);
    ifstream infile(argv[1]);
    string s1(argv[2]);
    string s2(argv[3]);
    if (!infile)
    {
		cout << "file not found" << endl;
		return (0);
    }
    if (s1.empty() || s2.empty())
    {
		cout << "Error: empty string" << endl;
		return (0);
    }
	ofstream outfile(outfileName.append(".replace"));
	string line;
    while (getline(infile, line))
    {
		string &lineRef(line);
        searchAndReplace(lineRef, s1, s2);
		outfile << lineRef << endl;
        if (infile.eof())
    	{
            outfile << endl;
            break ;
        }
    }
    infile.close();
    outfile.close();
}