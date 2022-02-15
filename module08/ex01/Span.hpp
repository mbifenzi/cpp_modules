
#ifndef Span_HPP
#define Span_HPP

#include <iostream>
#include <string>
#include <vector>

class Span
{
    private:
        unsigned int _maxN;
        std::vector<int> _array;
    public:
        Span();
        Span(unsigned int n);
        Span(Span const& obj);
        Span&    operator=(Span const& obj);
        ~Span();
        void    addNumber(int n);
        void    spamSpan(int n);
        std::vector<int>    getArray();
};

#endif