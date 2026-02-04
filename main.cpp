#include <array>
#include <iostream>
#include <vector>
#include <algorithm>

// ES 1
void primoEs()
{
    std::cout << "ESERCIZIO 1" << std::endl << std::endl;
    std::vector vettore = {15, -3, 22, -8, 7, 0, 14, -1, 9, 30};

    //1° n° negativo
    auto boh = std::find_if(vettore.begin(), vettore.end(), [](int i)
    {
        if (i < 0)
        {
            return true;
        }
        return false;
    });
    std::cout << "Il primo n° negativo è:\t" << boh[0] << std::endl;

    //rimozione negativi da array
    auto remove = std::remove_if(vettore.begin(), vettore.end(), [](int i)
    {
        if (i < 0)
        {
            return true;
        }
    return false;
    });
    vettore.erase(remove, vettore.end());
    std::cout << "Vettore senza numeri negativi:\t";
    for (int i = 0; i < vettore.size(); i++)
    {
        std::cout << vettore[i] << " ";
    }
    std::cout << std::endl;
}


int main()
{
    primoEs(); //fatto


    return 0;
}