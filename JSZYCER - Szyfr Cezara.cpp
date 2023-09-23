#include <iostream>

using namespace std;

string zaszyfrujSzyfremCezara(string tekst)
{
    int przesuniecie = 3;
    int iloscLiterWAlfabecie = ('Z' - 'A') + 1;

    for(int i = 0; i < tekst.length(); i++)
    {
        if((tekst[i] >= 65) && (tekst[i] <= 87))
        {
            tekst[i] += przesuniecie;
        }
        else if((tekst[i] >= 88) && (tekst[i] <= 90))
        {
            tekst[i] = (tekst[i] - iloscLiterWAlfabecie) + przesuniecie;
        }
    }
    return tekst;
}

int main()
{
    string tekst;

    while(getline(cin, tekst))
    {
        cout << zaszyfrujSzyfremCezara(tekst) << endl;
    }
    return 0;
}
