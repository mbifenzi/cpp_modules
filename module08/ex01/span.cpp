
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
	srand(time(NULL));
	for(int i = 0; i < n; i++)
	{
		if (_maxN == 0)
			throw("No Free Space");
		this->_array.push_back(rand());
		_maxN--;
	}
}

int		Span::shortestSpan()
{
	if(_array.size() <= 1)
		throw ("No short Span to Show");
	long shortest = abs(_array[1] - _array[0]);

	for (size_t i = 1; i < _array.size() - 1; i++)
	{
		for (size_t j = 0; j < _array.size(); j++)
		{

			if (_array[j + 1] - _array[i] < shortest && j+1 != i)
				shortest = abs(_array[j + 1] - _array[i]);
		}
	}
	return (shortest);
}

int		Span::longestSpan()
{
	if(_array.size() <= 1)
		throw ("No short span to show");
	int max = *std::max_element(_array.begin(),_array.end());
	int min = *std::min_element(_array.begin(),_array.end());
	return(std::abs((long)(max - min)));
}



std::vector<int>	Span::getArray()
{
	return(_array);
}


Span::~Span(){}
