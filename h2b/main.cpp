#include "car.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Luodaan Car-olioista vektori
    vector<Car> carList;

    // Lisätään kolme autoa vektoriin
    carList.emplace_back("Toyota", "Corolla", 2020);
    carList.emplace_back("Volvo", "V60", 2022);
    carList.emplace_back("BMW", "320i", 2021);

    // Tulostetaan listan toinen alkio
    cout << "Second car:" << endl;
    carList[1].printData();

    cout << endl;

    // Tulostetaan kaikkien autojen tiedot for-silmukalla
    cout << "All cars:" << endl;

    for (int i = 0; i < carList.size(); i++)
    {
        carList[i].printData();
        cout << endl;
    }

    return 0;
}