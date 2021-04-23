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
    string s;
    while (getline(cin, s))
    {
        if (s == "esquerda")
        {
            cout << "ingles" << endl;
        }
        else if (s == "direita")
        {
            cout << "frances" << endl;
        }
        else if (s == "nenhuma")
        {
            cout << "portugues" << endl;
        }
        else if (s == "as duas")
        {
            cout << "caiu" << endl;
        }
    }
}