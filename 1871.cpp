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
    int v1, v2;
    while (v1 != 0 || v2 != 0)
    {
        cin >> v1 >> v2;
        if (v1 != 0 || v2 != 0)
        {
            string resposta = to_string(v1 + v2);
            for (int i = 0; i < resposta.length(); i++)
            {
                if (resposta[i] != '0')
                {
                    cout << resposta[i];
                }
            }
            cout << endl;
        }
    }
}