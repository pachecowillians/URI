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
#include <unordered_map>
#include <map>
using namespace std;

void CalculaResposta(int n1, int n2)
{
    for (int i = 5; i <= 10; i++)
    {
        cout << n1 << " x " << i << " = " << n1 * i;
        if (n2 != n1)
        {
            cout << " && " << n2 << " x " << i << " = " << n2 * i << endl;
        }
        else
        {
            cout << endl;
        }
    }
}

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        string s;
        cin >> s;
        int n1 = atoi(s.substr(0, s.find("x")).c_str());
        int n2 = atoi(s.substr(s.find("x") + 1, s.length() - s.find("x")).c_str());
        CalculaResposta(n1, n2);
    }
}