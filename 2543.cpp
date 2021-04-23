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
    int ct, id;
    while (cin >> ct >> id)
    {
        int contCS = 0;
        for (int i = 0; i < ct; i++)
        {
            int idEscola, jogo;
            cin >> idEscola >> jogo;
            if (idEscola == id && jogo == 0)
            {
                contCS++;
            }
        }
        cout << contCS << endl;
    }
}