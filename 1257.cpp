#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int ct;
    int numStrings;
    string s;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        cin >> numStrings;
        int hash = 0;
        for (int j = 0; j < numStrings; j++)
        {
            cin >> s;
            for (int k = 0; k < s.length(); k++)
            {
                hash += s[k] - 'A' + j + k;
            }
        }
        cout << hash << endl;
    }
}