#include <iostream>

using namespace std;

void wczytajLiczbyDoTablicy(int iloscElementow, int tablica[])
{
    for(int i = 0; i < iloscElementow; i++)
    {
        cin >> tablica[i];
    }
}

void przesunElementyTablicyCyklicznieWLewo(int iloscElementow, int tablica[])
{
    int bufor;
    if(iloscElementow > 1)
    {
        for(int i = 0; i < iloscElementow - 1; i++)
        {
            bufor = tablica[i];
            tablica[i] = tablica[i + 1];
            tablica[i + 1] = bufor;
        }
    }
}

void wypiszElementyTablicy(int iloscElementow, int tablica[])
{
    for (int i = 0; i < iloscElementow; i++)
    {
        cout << tablica[i] << " ";
    }
}

int main()
{
    int iloscElementow, iloscTestow;
    int *tablica;

    cin >> iloscTestow;

    for(int i = 0; i < iloscTestow; i++)
    {
        cin >> iloscElementow;

        tablica = new int [iloscElementow];

        wczytajLiczbyDoTablicy(iloscElementow, tablica);
        przesunElementyTablicyCyklicznieWLewo(iloscElementow, tablica);
        wypiszElementyTablicy(iloscElementow, tablica);

        delete [] tablica;
        tablica = NULL;

        cout << endl;
    }
    return 0;
}
