#include "Array.hpp"

int main()
{
    try
    {
        Array<std::string> name(3);

        name[0] = "mehdi";
        name[1] = "belkassi";

        const Array<std::string> name1(name);

        std::cout << name1[1] << std::endl;
        std::cout << name.size();

        return 0;
    }
    catch(std::exception &e)
    {
        std::cout << "the number you inserted is out of range\n";
    }
}
