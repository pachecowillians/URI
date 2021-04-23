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
    float v;
    while (cin >> v)
    {
        if ((v >= 0 && v < 90) || v == 360)
        {
            cout << "Bom Dia!!" << endl;
        }
        else if (v >= 90 && v < 180)
        {
            cout << "Boa Tarde!!" << endl;
        }
        else if (v >= 180 && v < 270)
        {
            cout << "Boa Noite!!" << endl;
        }
        else if (v >= 270 && v < 360)
        {
            cout << "De Madrugada!!" << endl;
        }
        int h = ((int)(v * 240) / 3600) % 60;
        int m = ((int)(v * 240) / 60) % 60;
        int s = (int)(v * 240) % 60;
        cout << setfill('0') << setw(2) << (h + 6) % 24 << ":" << setfill('0') << setw(2) << m << ":" << setfill('0') << setw(2) << s << endl;
    }
}