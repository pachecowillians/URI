#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <stack> //pilha
#include <queue> //fila
#include <functional>
#include <tr1/functional> //hash
#include <vector>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

void ValidaRA(string ra)
{
    string primeirosCaracteres = ra.substr(0, 2);
    if (primeirosCaracteres != "RA" || ra.length() != 20)
    {
        cout << "INVALID DATA" << endl;
    }
    else
    {
        ra.erase(0, 2);
        while (ra.length() > 0 && ra[0] == '0')
        {
            ra.erase(0, 1);
        }
        if (ra.length() == 0)
        {
            cout << "INVALID DATA" << endl;
        }
        else
        {
            cout << ra << endl;
        }
    }
}

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string ra;
        cin >> ra;
        ValidaRA(ra);
    }
}