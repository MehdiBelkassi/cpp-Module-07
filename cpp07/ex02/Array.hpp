#pragma once

#include <iostream>


template <class T>
class Array
{
    private:
        T* content;
        unsigned int len;
    public:
        Array();
        Array(unsigned int n);
        Array (const Array& other);
        Array& operator=(const Array& other);
        ~Array();
        T& operator[](int n);
        const T& operator[](int n) const;
        unsigned int size() const;
};


#include "Array.tpp"