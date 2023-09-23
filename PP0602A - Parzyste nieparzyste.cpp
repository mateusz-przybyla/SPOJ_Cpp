#include <iostream>

using namespace std;

void wczytajLiczbyDoTablicy(int iloscLiczb, int tablica[])
{
    for(int i = 1; i <= iloscLiczb; i++)
    {
        cin >> tablica[i];
    }
}

void wypiszLiczbyWystepujaceNaPozycjachParzystych(int iloscLiczb, int tablica[])
{
    for(int i = 2; i <= iloscLiczb; i += 2)
    {
        cout << tablica[i] << " ";
    }
}

void wypiszLiczbyWystepujaceNaPozycjachNieparzystych(int iloscLiczb, int tablica[])
{
    for(int i = 1; i <= iloscLiczb; i += 2)
    {
        cout << tablica[i] << " ";
    }
}

int main()
{
    int *tablica;
    int iloscLiczb, iloscTestow;

    cin >> iloscTestow;

    for(int i = 0; i < iloscTestow; i++)
    {
        cin >> iloscLiczb;

        tablica = new int [iloscLiczb];

        wczytajLiczbyDoTablicy(iloscLiczb, tablica);
        wypiszLiczbyWystepujaceNaPozycjachParzystych(iloscLiczb, tablica);
        wypiszLiczbyWystepujaceNaPozycjachNieparzystych(iloscLiczb, tablica);

        delete [] tablica;
        tablica = NULL;

        cout << endl;
    }
    return 0;
}
