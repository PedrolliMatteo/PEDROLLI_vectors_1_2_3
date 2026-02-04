#include <array>
#include <iostream>
#include <algorithm>

// ES 1
int primoEs()
{
    std::array<int, 10> array = {15, -3, 22, -8, 7, 0, 14, -1, 9, 30};

    auto boh = std::find_if(array.begin(), array.end(), [](int i)
    {
        if (i < 0)
        {
            return i;
        }
        else {
            
        }
    });
    return *boh;
}


int main()
{

    int n = primoEs();

    std::cout << "Il primo n° negativo è " << n << std::endl;

    std::cout << "ciao";
    return 0;
}