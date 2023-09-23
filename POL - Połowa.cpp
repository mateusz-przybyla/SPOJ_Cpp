#include <iostream>

using namespace std;

string skrocOPolowe(string ciag)
{
    string polowa;

    polowa = ciag.substr(0, ciag.length() / 2);

    return polowa;
}

int main()
{
    string ciag;
    int iloscTestow;

    cin >> iloscTestow;

    for(int i = 0; i < iloscTestow; i++)
    {
        cin >> ciag;
        cout << skrocOPolowe(ciag);
        cout << endl;
    }

    return 0;
}
