#include"Array.hpp"

template <class T>
Array<T>::Array(): content(NULL),len(0)
{

}

template <class T>
Array<T>::Array(unsigned int n)
{
    content = new T[n](); // () the two braces initialize the array with 0 (weird)
    len = n;
}

template <class T>
Array<T>::Array(const Array& other) : content(NULL), len(other.len)
{
    content = new T[len];

    unsigned int i = 0;
    while (i < len)
    {
        content[i] = other.content[i];
        i++;
    }
}

template <class T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
    if (this != &other)
    {
        delete[] content;
        this->len = other.len;
        content = new T[len];

        unsigned int i = 0;
        while (i < len)
        {
            content[i] = other.content[i];
            i++;
        }
    }
    return (*this);
}


template <class T>
unsigned int Array<T>::size() const
{
    return (len);
}

template <class T>
Array<T>::~Array()
{
    delete[] content;
}

template <class T>
T& Array<T>::operator[](int n)
{
    if (n < 0 || n >= (int)len)
        throw std::exception();
    return content[n];
}

template <class T>
const T& Array<T>::operator[](int n) const
{
    if (n < 0 || n >= (int)len)
        throw std::exception();
    return content[n];
}
