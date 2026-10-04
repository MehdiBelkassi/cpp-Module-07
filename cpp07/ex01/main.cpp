#include "Iter.hpp"


int main()
{
    const int a[]= {0, 1, 2, 3};
    Iter(a, 5, print<int>);
}
