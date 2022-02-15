
#include "Span.hpp"

Span::Span() {}
Span::Span(unsigned int n)
{
    _maxN = n;
}
Span&	Span::operator=(Span const& obj)
{
    this->_maxN = obj._maxN;
	this->_array = obj._array;
	return (*this);
}
Span::Span(Span const& obj)
{
	this->_maxN = obj._maxN;
	this->_array = obj._array;
}

void	Span::addNumber(int n)
{
	if (_maxN == 0)
		throw ("No Free Space");
	else
		_array.push_back(n);
	this->_maxN--;
}

void	Span::spamSpan(int n)
{
	for(int i = 0; i < n; i++)
	{
		if (_maxN == 0)
			throw("No Free Space");
		this->_array.push_back(i);
		_maxN--;
	}
}

std::vector<int>	Span::getArray()
{
	return(_array);
}


Span::~Span(){}
