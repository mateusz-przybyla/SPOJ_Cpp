#include <iostream>

using namespace std;

string sprawdzPesel(long long int liczba)
{
    int pesel[11];
    int szyfr[11] = {1,3,7,9,1,3,7,9,1,3,1};
    int suma = 0;
    string wynik;

    for(int i = 10; i >= 0; i--)
    {
        pesel[i] = liczba % 10;
        liczba = liczba / 10;
    }

    for(int i = 0; i < 11; i++)
    {
        suma = suma + pesel[i] * szyfr[i];
    }

    if(suma % 10 == 0)
    {
        wynik = "D";
    }
    else
    {
        wynik = "N";
    }

    return wynik;
}

int main()
{
    int liczbaTestow;
    long long int pesel;
    cin >> liczbaTestow;

    for(int i = 0; i < liczbaTestow; i++)
    {
        cin >> pesel;
        cout << sprawdzPesel(pesel) << endl;
    }

    return 0;
}
