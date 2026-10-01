#include <iostream>
#include <cstdio>
template <typename T, typename F>

void iter(T *address , const int len , F func)
{
    printf("len = %d\naddress = %p\n", len, address);
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

int main()
{
    int a[]= {1, 2 ,3, 4};
    iter(a, 4, add<char>);
}