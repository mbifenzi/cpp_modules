
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>
#include <exception>
#define MAX_VAL 750
template <typename T>
class Array
{
    private:
        T *_array;
        unsigned int _n;
    public:
		Array();
		Array(unsigned int n);
		Array(Array<T> const& obj);
		Array<T>   operator=(Array<T> const& obj);
		// bool    operator!=(int* const& number);
		T& operator[](unsigned int n);
		T& operator[]( unsigned int n ) const;
		unsigned int	size() const;
		class invalidIndexException : public std::exception
		{
			const char* what() const throw()
			{
				return("Out Of Range Exception\n");
			}
		};
		~Array();
};

template <typename T>
Array<T>::Array() : _array(0)
{
}

template <typename T>
Array<T>::~Array()
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _n(n) 
{
    this->_array = new T[n];
}

template <typename T>
Array<T>::Array(Array<T> const& obj)
{
	this->_array = new T[obj._n];
	for(unsigned int i = 0; i < obj._n; i++)
	{
		this->_array[i] = obj._array[i];
	}
}

template <typename T>
Array<T>    Array<T>::operator=(Array<T> const& obj)
{
    this->_array._n = new T[obj._n];
    for(unsigned int i = 0; i < obj._n; i++)
    {
        this->_array[i] = obj._array[i];
    }
	return(*this);
}

template <typename T>
T&    Array<T>::operator[](unsigned int n)
{
	if (_n <= n)
	{
		throw(invalidIndexException());
	}
	return(this->_array[n]);
}

template <typename T>
T&	Array<T>::operator[]( unsigned int n ) const
{
	if (_n <= n)
	{
		throw(invalidIndexException());
	}
	return(this->_array[n]);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return(this->_n);
}

#endif
