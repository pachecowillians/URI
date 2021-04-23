#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        int n, m;
        cin >> n >> m;
        double lg = log10(n);
        lg *= m;
        cout << floor(lg) + 1 << endl;
    }
}