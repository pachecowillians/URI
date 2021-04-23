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
    string num = "";
    char def;
    while (def != '0' || num != "0")
    {
        cin >> def >> num;
        if (def != '0' && num != "0")
        {
            string resp = "";
            for (int i = 0; i < num.length(); i++)
            {
                if (num[i] != def)
                {
                    resp += num[i];
                }
            }
            bool numero = false;
            for (int i = 0; i < resp.length(); i++)
            {
                if (resp[i] != '0')
                {
                    numero = true;
                }
                if (numero)
                {
                    cout << resp[i];
                }
            }
            if (!numero)
            {
                cout << "0";
            }
            cout << endl;
        }
    }
}