#include <iostream>

using namespace std;

bool czyHarryUdzwignieZakupy(int liczbaKotow, int udzwigHarrego, int wagaPaczka)
{
    bool wynik;

    if(liczbaKotow * wagaPaczka <= udzwigHarrego)
    {
        wynik = true;
    }
    else
    {
        wynik = false;
    }

    return wynik;
}

int main()
{
    int liczbaKotow, udzwigHarrego, wagaPaczka;
    int liczbaTestow;

    cin >> liczbaTestow;

    for(int i = 0; i < liczbaTestow; i++)
    {
        cin >> liczbaKotow >> udzwigHarrego >> wagaPaczka;

        if(czyHarryUdzwignieZakupy(liczbaKotow, udzwigHarrego, wagaPaczka))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}
