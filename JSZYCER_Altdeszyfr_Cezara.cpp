#include <iostream>

using namespace std;

string odszyfrujSzyfremCezara(string tekst, int przesuniecie)
{
    const int iloscLiterWAlfabecie = ('Z' - 'A') + 1;

    for(int i = 0; i < tekst.length(); i++)
    {
        if((tekst[i] >= 'A') && (tekst[i] <= 'Z'))
        {
            tekst[i] = (tekst[i] + iloscLiterWAlfabecie) - przesuniecie;

            if(tekst[i] < 'A')
            {
                tekst[i] += iloscLiterWAlfabecie;
            }
            else if(tekst[i] > 'Z')
            {
                tekst[i] -= iloscLiterWAlfabecie;
            }
        }
        else if(isdigit(tekst[i]))
        {
            tekst.erase(i, 1);
            i--;
        }
    }
    return tekst;
}

int main()
{
    string tekst;
    int przesuniecie;

    cout << "Podaj zdanie do odszyfrowania: ";

    while(getline(cin, tekst))
    {
        przesuniecie = stoi(tekst);

        if((przesuniecie >= 1) && (przesuniecie <= 25))
        {
            cout << odszyfrujSzyfremCezara(tekst, przesuniecie) << endl;
            break;
        }
        else
        {
            cout << "Podaj zdanie do odszyfrowania: ";
        }
    }

    return 0;
}
