#include <iostream>

using namespace std;

bool czyWyrazJestPalindromem(string wyraz)
{
    int i = 0;
    int j = wyraz.length() - 1;
    while(i < j)
    {
            if(wyraz[i] == wyraz[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
    }
    return true;
}

int main()
{
    int iloscZestawowDanych;
    string wyraz = "";

    cin >> iloscZestawowDanych;

    for(int i = 0; i < iloscZestawowDanych; i++)
    {
        cin >> wyraz;
        cout << (czyWyrazJestPalindromem(wyraz) ? "tak" : "nie") << endl;
    }
    return 0;
}
