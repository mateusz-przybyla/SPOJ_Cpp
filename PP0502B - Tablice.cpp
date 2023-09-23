#include <iostream>

using namespace std;

void wczytajLiczbyDoTablicy(int iloscLiczb, int tablica[])
{
    for(int i = 0; i < iloscLiczb; i++)
    {
        cin >> tablica[i];
    }
}

void wypiszOdKoncaLiczbyZTablicy(int iloscLiczb, int tablica[])
{
    for(int i = iloscLiczb - 1; i >= 0; i--)
    {
        cout << tablica[i] << " ";
    }
}

int main()
{
    int *tablica;
    int iloscTestow, iloscLiczb;

    cin >> iloscTestow;

    for(int i = 0; i < iloscTestow; i++)
    {
        cin >> iloscLiczb;

        tablica = new int [iloscLiczb];

        wczytajLiczbyDoTablicy(iloscLiczb, tablica);
        wypiszOdKoncaLiczbyZTablicy(iloscLiczb, tablica);

        delete [] tablica;
        tablica = NULL;

        cout << endl;
    }
    return 0;
}
