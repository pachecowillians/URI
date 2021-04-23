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
#include <set>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    int ct;
    string s;
    char c;
    cin >> ct;
    int contAnoes = 0;
    int contElfos = 0;
    int contHumanos = 0;
    int contMagos = 0;
    int contHobbits = 0;
    for (int i = 0; i < ct; i++)
    {
        cin >> s >> c;
        if (c == 'A')
        {
            contAnoes++;
        }
        else if (c == 'E')
        {
            contElfos++;
        }
        else if (c == 'H')
        {
            contHumanos++;
        }
        else if (c == 'M')
        {
            contMagos++;
        }
        else if (c == 'X')
        {
            contHobbits++;
        }
    }
    cout << contHobbits << " Hobbit(s)" << endl;
    cout << contHumanos << " Humano(s)" << endl;
    cout << contElfos << " Elfo(s)" << endl;
    cout << contAnoes << " Anao(s)" << endl;
    cout << contMagos << " Mago(s)" << endl;
}