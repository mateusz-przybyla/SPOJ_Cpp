#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

vector <string> wczytajLinie(string wejscie)
{
    vector <string> wektorWyrazow;
    istringstream iss(wejscie);
    string wyraz = "";
    while (iss >> wyraz)
    {
        wektorWyrazow.push_back(wyraz);
    }
    return wektorWyrazow;
}

void wyszukajBrakujaceWyrazy(vector <string> &oryginalnyCiagWyrazow, vector <string> &niekompletnyCiagWyrazow)
{
    vector <string>::iterator itr;

    for (size_t i = 0; i < niekompletnyCiagWyrazow.size(); i++)
    {
        itr = find(oryginalnyCiagWyrazow.begin(), oryginalnyCiagWyrazow.end(), niekompletnyCiagWyrazow[i]);

        if (itr - niekompletnyCiagWyrazow.begin() != niekompletnyCiagWyrazow.size())
        {
            oryginalnyCiagWyrazow.erase(itr);
        }
    }
}

void wypiszPosortowaneBrakujaceWyrazy(vector <string> oryginalnyCiagWyrazow)
{
    cout << oryginalnyCiagWyrazow.size() << endl;

    if (oryginalnyCiagWyrazow.size() > 0)
    {
        sort(oryginalnyCiagWyrazow.begin(), oryginalnyCiagWyrazow.end());
        for (auto wyraz : oryginalnyCiagWyrazow)
        {
            cout << wyraz << endl;
        }
    }
}

int main()
{
    string oryginalnyTekst = "";
    string niekompletnyTekst = "";

    getline(cin, oryginalnyTekst);
    getline(cin, niekompletnyTekst);

    vector <string> oryginalnyCiagWyrazow;
    vector <string> niekompletnyCiagWyrazow;

    oryginalnyCiagWyrazow = wczytajLinie(oryginalnyTekst);
    niekompletnyCiagWyrazow = wczytajLinie(niekompletnyTekst);
    wyszukajBrakujaceWyrazy(oryginalnyCiagWyrazow, niekompletnyCiagWyrazow);
    wypiszPosortowaneBrakujaceWyrazy(oryginalnyCiagWyrazow);

    return 0;
}
