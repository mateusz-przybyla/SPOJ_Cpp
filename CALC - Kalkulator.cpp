#include <iostream>

using namespace std;

int oblicz(char znak, int a, int b)
{
    int wynik;

    switch(znak)
    {
        case '+': wynik = a + b; break;
        case '-': wynik = a - b; break;
        case '*': wynik = a * b; break;
        case '/': wynik = a / b; break;
        case '%': wynik = a % b; break;
        default: wynik = 0; break;
    }
    return wynik;
}

int main()
{
    char znak;
    int a, b;

    while(cin >> znak)
    {
        cin >> a >> b;
        cout << oblicz(znak, a, b) << endl;
    }
    return 0;
}
