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

int main()
{
    int ct;
    cin >> ct;
    for (int i = 0; i < ct; i++)
    {
        int p;
        cin >> p;
        int ingles = 0;
        string idiomaPadrao = "";
        string idioma;
        for (int j = 0; j < p; j++)
        {
            cin >> idioma;
            if (idiomaPadrao.length() == 0)
            {
                idiomaPadrao = idioma;
            }
            else
            {
                if (idioma != idiomaPadrao)
                {
                    ingles = 1;
                }
            }
        }
        if (ingles == 1)
        {
            cout << "ingles" << endl;
        }
        else
        {
            cout << idiomaPadrao << endl;
        }
    }
}
