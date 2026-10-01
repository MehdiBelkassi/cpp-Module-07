#pragma once

#include <iostream>


template <typename T, typename F>
void Iter(T *address , const int len , F func)
{
    int i = 0;
    while (i < len)
    {
        func(address[i]);
        i++;
    }
}

template <typename T>
void print(const T &value)
{
    std::cout << value << std::endl;
}

template <typename T>
void add(T &value)
{
    std::cout << value + 1 << std::endl; 
}
