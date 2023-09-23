#include <iostream>

using namespace std;

int obliczIloscMiejscSiedzacychWSamolocie(int n1, int k1, int n2, int k2)
{
    int iloscMiejscWSamolocie;

    iloscMiejscWSamolocie = n1 * k1 + n2 * k2;

    return iloscMiejscWSamolocie;
}

int main()
{
    int n1, k1, n2, k2;
    cin >> n1 >> k1 >> n2 >> k2;
    cout << obliczIloscMiejscSiedzacychWSamolocie(n1, k1, n2, k2);

    return 0;
}
