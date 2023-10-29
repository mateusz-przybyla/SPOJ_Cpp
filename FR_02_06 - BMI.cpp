#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

struct Osoba
{
    string imie = "";
    float masaWKilogramach = 0;
    float wzrostWCentymetrach = 0;
};

void podajDaneOsoby(vector <Osoba> &osoby)
{
    Osoba osoba;
    cin >> osoba.imie >> osoba.masaWKilogramach >> osoba.wzrostWCentymetrach;
    osoby.push_back(osoba);
}

float obliczWskaznikBmi(Osoba osoba)
{
    float wskaznikBmi = 0;
    wskaznikBmi = osoba.masaWKilogramach / pow((osoba.wzrostWCentymetrach / 100.), 2);

    return wskaznikBmi;
}

void przyporzadkujWartoscBmiDoKategorii(vector <Osoba> osoby, vector <string> &osobyZNiedowaga, vector <string> &osobyOPrawidlowejWadze, vector <string> &osobyZNadwaga)
{
    for (auto osoba : osoby)
    {
        if (obliczWskaznikBmi(osoba) < 18.5)
        {
            osobyZNiedowaga.push_back(osoba.imie);
        }
        else if ((obliczWskaznikBmi(osoba) >= 18.5) && (obliczWskaznikBmi(osoba) < 25.0))
        {
            osobyOPrawidlowejWadze.push_back(osoba.imie);
        }
        else if (obliczWskaznikBmi(osoba) >= 25.0)
        {
            osobyZNadwaga.push_back(osoba.imie);
        }
    }
}

void wyswietlWynikiBmi(string kategoria, vector <string> kategoriaWagowa)
{
    cout << endl << kategoria << endl;

    for (auto imie : kategoriaWagowa)
    {
        cout << imie << endl;
    }
}

int main()
{
    int iloscBadanychOsob = 0;

    vector <string> osobyZNiedowaga;
    vector <string> osobyOPrawidlowejWadze;
    vector <string> osobyZNadwaga;
    vector <Osoba> osoby;

    cin >> iloscBadanychOsob;

    for (int i = 0; i < iloscBadanychOsob; i++)
    {
        podajDaneOsoby(osoby);
    }

    przyporzadkujWartoscBmiDoKategorii(osoby, osobyZNiedowaga, osobyOPrawidlowejWadze, osobyZNadwaga);
    wyswietlWynikiBmi("niedowaga", osobyZNiedowaga);
    wyswietlWynikiBmi("wartosc prawidlowa", osobyOPrawidlowejWadze);
    wyswietlWynikiBmi("nadwaga", osobyZNadwaga);

    return 0;
}
