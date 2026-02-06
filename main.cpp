#include <array>
#include <iostream>
#include <vector>
#include <algorithm>


// ES 1

void primoEs()
{
    std::cout << "ESERCIZIO 1" << std::endl << std::endl;
    std::vector<int> vettore = {15, -3, 22, -8, 7, 0, 14, -1, 9, 30};

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

    //rimozione negativi da vettore
    auto remove = std::remove_if(vettore.begin(), vettore.end(), [](int i)
    {
        if (i < 0)
        {
            return true;
        }
    return false;
    });
    vettore.erase(remove, vettore.end());

    //stampa
    std::cout << "Vettore senza numeri negativi:\t";
    for (int i = 0; i < vettore.size(); i++)
    {
        std::cout << vettore[i] << " ";
    }
    std::cout << std::endl;
}


//ES 2

void secondoEs()
{
    std::cout << std::endl << "ESERCIZIO 2" << std::endl << std::endl;
    std::vector<int> vettore = {5, 18, 21, 40, 7, 9, 60, 11, 3, 100, 8, 2};

    //1° n° > 50
    auto cinquanta = std::find_if(vettore.begin(), vettore.end(), [](int i)
    {
        if(i > 50)
        {
            return true;
        }
        return false;
    });
    std::cout << "Il 1° numero > 50 è " << cinquanta[0] << std::endl;

    //rimozione dispari da vettore
    auto remove = std::remove_if(vettore.begin(), vettore.end(), [](int i)
    {
        if (i % 2 != 0)
        {
            return true;
        }
        return false;
    });
    vettore.erase(remove, vettore.end());

    //stampa
    std::cout << "Vettore senza numeri dispari:\t";
    for (int i = 0; i < vettore.size(); i++)
    {
        std::cout << vettore[i] << " ";
    }
    std::cout << std::endl;
}


//ES 3

void terzoEs()
{
    std::cout << std::endl << "ESERCIZIO 3" << std::endl << std::endl;
    std::vector<int> vettore = {-5, -10, 20, 25, -30, 40, 0, -1, 60, 7};

    //almeno 1 n° negativo
    auto negativo = std::find_if(vettore.begin(), vettore.end(), [](int i)
    {
        if(i < 0)
        {
            return true;
        }
        return false;
    });
    if(negativo[0] < 0)
    {
        std::cout << "Esiste almeno un n° negativo" << std::endl;
    }
    else
    {
        std::cout << "Non ci sono numeri negativi" << std::endl;
    }

    //1° n° > 30
    auto trenta = std::find_if(vettore.begin(), vettore.end(), [](int i)
    {
        if(i > 30)
        {
            return true;
        }
        return false;
    });
    std::cout << "Il 1° numero > 30 è " << trenta[0] << std::endl;

    //rimozione numeri < 0
    auto remove = std::remove_if(vettore.begin(), vettore.end(), [](int i)
    {
        if (i < 0)
        {
            return true;
        }
        return false;
    });
    vettore.erase(remove, vettore.end());

    //ordine vettore
    sort(vettore.begin(), vettore.end());

    //stampa
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
    secondoEs(); //fatto
    terzoEs(); //fatto

    return 0;
}
