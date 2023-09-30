#include <iostream>

using namespace std;

int dekoderPierwszejLitery(string dwuZnak)
{
    int wartoscPierwszejLitery;
    wartoscPierwszejLitery = dwuZnak[0] - 65;

    return wartoscPierwszejLitery;
}

int dekoderDrugiejLitery(string dwuZnak)
{
    int wartoscDrugiejLitery;
    wartoscDrugiejLitery = dwuZnak[1] - 65;
    wartoscDrugiejLitery *= 16;

    return wartoscDrugiejLitery;
}

string odszyfrujWyraz(string wyrazZaszyfrowany)
{
    string dwuZnak;
    string odszyfrowanyWyraz;
    int numerZnaku = 0;

    for(int i = 0; i < wyrazZaszyfrowany.length() - 1; i += 2)
    {
        dwuZnak = wyrazZaszyfrowany.substr(i, 2);
        numerZnaku = dekoderPierwszejLitery(dwuZnak) + dekoderDrugiejLitery(dwuZnak);
        odszyfrowanyWyraz.push_back(numerZnaku);
    }
    return odszyfrowanyWyraz;
}

int main()
{
    string wyrazZaszyfrowany;

    while(getline(cin, wyrazZaszyfrowany))
    {
        cout << odszyfrujWyraz(wyrazZaszyfrowany) << endl;
    }
    return 0;
}
