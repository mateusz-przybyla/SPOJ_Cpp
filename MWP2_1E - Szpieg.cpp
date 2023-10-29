#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <string> podajPojedynczeWyrazy()
{
    string wyraz = "";
    vector <string> wyrazy;

    while(getline(cin, wyraz))
    {
        wyrazy.push_back(wyraz);

        if(wyraz == "")
        {
            break;
        }
    }
    return wyrazy;
}

void wypiszPosortowaneWyrazy(vector <string> wyrazy)
{
    sort(wyrazy.begin(), wyrazy.end());
    for (string wyraz : wyrazy)
    {
        cout << wyraz << endl;
    }
}

int main()
{
    vector <string> wyrazy;
    wyrazy = podajPojedynczeWyrazy();

    wypiszPosortowaneWyrazy(wyrazy);

    return 0;
}
