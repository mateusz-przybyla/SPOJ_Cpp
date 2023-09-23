#include <iostream>

using namespace std;

int obliczPowierzchnieDzialki(int liczbaKrokow)
{
    int powierzchniaDzialki;

    powierzchniaDzialki = liczbaKrokow * liczbaKrokow;

    return powierzchniaDzialki;
}

int main()
{
    int liczbaZestawowDanych, liczbaKrokow;
    cin >> liczbaZestawowDanych;

    for(int i = 0; i < liczbaZestawowDanych ; i++)
    {
        cin >> liczbaKrokow;
        cout << obliczPowierzchnieDzialki(liczbaKrokow) << endl;
    }

    return 0;
}
