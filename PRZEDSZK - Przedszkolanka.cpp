#include <iostream>

using namespace std;

int obliczNajwiekszyWspolnyDzielnik(int a, int b)
{
    while(a != b)
    {
        if(a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int obliczNajmniejszaWspolnaWielokrotnosc(int a, int b)
{
    int najmniejszaWspolnaWielokrotnosc;

    najmniejszaWspolnaWielokrotnosc = (a * b) / obliczNajwiekszyWspolnyDzielnik(a, b);

    return najmniejszaWspolnaWielokrotnosc;
}

int main()
{
    int a, b;
    int iloscZestawowDanych;

    cin >> iloscZestawowDanych;

    for(int i = 1; i <=iloscZestawowDanych; i++)
    {
        cin >> a >> b;
        cout << obliczNajmniejszaWspolnaWielokrotnosc(a, b) << endl;
    }
    return 0;
}
