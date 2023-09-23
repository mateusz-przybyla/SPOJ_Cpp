#include <iostream>

using namespace std;

int sumaTrzechLiczb(int a, int b, int c)
{
    int suma;

    suma = a + b + c;

    return suma;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << sumaTrzechLiczb(a, b, c) << endl;

    return 0;
}
