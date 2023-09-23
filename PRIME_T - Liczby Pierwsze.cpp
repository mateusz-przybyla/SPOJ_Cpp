#include <iostream>

using namespace std;

bool czyPierwsza(int liczba)
{
    if(liczba < 2)
    {
        return false;
    }

    for(int i = 2; i < liczba; i++)
    {
        if(liczba % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int ileLiczb, liczba;
    cin >> ileLiczb;

    for(int i = 0; i < ileLiczb; i++)
    {
        cin >> liczba;
        cout << (czyPierwsza(liczba) ? "TAK" : "NIE") << endl;
        //lub: czyPierwsza(liczba) ? cout << "TAK" << endl : cout << "NIE" << endl;
    }
    return 0;
}
