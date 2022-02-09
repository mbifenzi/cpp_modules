
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <typename T>
class Array
{
    private:
        T *_array;
        unsigned int _n;
    public;
    Array();
    Array(unsigned int n);  
    Array(Array<T> const& obj);
    Array   operator=(Array<T> const& obj);
    ~array();
};

template <typename T>
Array<T>::Array() : _array(NULL)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _n(n)
{
    _array = new T[n];
}

template <typename T>
Array<T>::Array(Array<T> const& obj)
{
    this->_array = new T[obj..n];
    for(int i; i < obj.n; i++)
    {
        this->_array = obj._array[i];
    }
}

template <typename T>
Array<T>    Array<T>::operator=(Array<T> const& obj)
{
    this->_array = new T[obj..n];
    for(int i; i < obj.n; i++)
    {
        this->_array = obj._array[i];
    }

}

#endif
// 378