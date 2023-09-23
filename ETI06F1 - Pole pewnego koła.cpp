#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double obliczPoleOkregu(double promienSfery, double odlegloscPomiedzySferami)
{
    double poleOkregu;

    poleOkregu = M_PI*(pow(promienSfery, 2) - pow(odlegloscPomiedzySferami / 2, 2));

    return poleOkregu;
}

int main()
{
    double promienSfery, odlegloscPomiedzySferami;

    cin >> promienSfery >> odlegloscPomiedzySferami;

    cout << setprecision(2) << fixed << obliczPoleOkregu(promienSfery, odlegloscPomiedzySferami) << endl;

    return 0;
}
