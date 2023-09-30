#include <iostream>

using namespace std;

string zamienLiczbeDziesietnaNaBinarna(unsigned long long int liczbaDziesietna)
{
    string odwroconaLiczbaBinarna = "";
    int resztaZDzielenia = 0;

    while(liczbaDziesietna > 0)
    {
        odwroconaLiczbaBinarna += to_string(liczbaDziesietna % 2);
        liczbaDziesietna /= 2;
    }
    return odwroconaLiczbaBinarna;
}

unsigned long long int zamienLiczbeBinarnaNaDziesietna(string odwroconaLiczbaBinarna)
{
    unsigned long long int liczbaDziesietnaPoZamianie = 0;
    unsigned long long int potega = 1;

    for(int i = odwroconaLiczbaBinarna.length() - 1; i >= 0; i--)
    {
        if(odwroconaLiczbaBinarna[i] == '1')
        {
            liczbaDziesietnaPoZamianie += potega;
        }
        potega *= 2;
    }
    return liczbaDziesietnaPoZamianie;
}

int main()
{
    unsigned long long int liczbaDziesietna = 0;
    unsigned long long int liczbaDziesietnaPoZamianie = 0;
    string liczbaBinarna = "";
    string odwroconaLiczbaBinarna = "";

    while(cin >> liczbaDziesietna)
    {
        odwroconaLiczbaBinarna = zamienLiczbeDziesietnaNaBinarna(liczbaDziesietna);
        liczbaDziesietnaPoZamianie = zamienLiczbeBinarnaNaDziesietna(odwroconaLiczbaBinarna);

        cout << liczbaDziesietnaPoZamianie << endl;
    }
    return 0;
}
