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
    cin >> ct;
    unordered_map<int, int> um{
        {0, 0},
        {1, 0},
        {2, 0},
        {3, 1},
        {4, 1},
        {5, 1},
        {6, 2},
        {7, 2},
        {8, 2},
    };
    unordered_map<int, int> uml{
        {0, 0},
        {1, 0},
        {2, 0},
        {3, 3},
        {4, 3},
        {5, 3},
        {6, 6},
        {7, 6},
        {8, 6},
    };
    for (int k = 0; k < ct; k++)
    {
        vector<vector<bool>> m(9, vector<bool>(9));
        vector<vector<bool>> vl(9, vector<bool>(9));
        vector<vector<bool>> vc(9, vector<bool>(9));
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                int n;
                cin >> n;
                vl[i][n - 1] = true;
                vc[j][n - 1] = true;
                m[uml[i] + um[j]][n - 1] = true;
            }
        }
        bool pode = true;
        for (int i = 0; i < 9 && pode; i++)
        {
            for (int j = 0; j < 9 && pode; j++)
            {
                if (!m[i][j])
                {
                    pode = false;
                }
            }
        }
        if (pode)
        {
            for (int i = 0; i < 9 && pode; i++)
            {
                for (int j = 0; j < 9 && pode; j++)
                {
                    if (!vl[i][j])
                    {
                        pode = false;
                    }
                }
            }
            if (pode)
            {
                for (int i = 0; i < 9 && pode; i++)
                {
                    for (int j = 0; j < 9 && pode; j++)
                    {
                        if (!vc[i][j])
                        {
                            pode = false;
                        }
                    }
                }
            }
        }
        cout << "Instancia " << k + 1 << endl;
        if (pode)
        {
            cout << "SIM" << endl;
        }
        else
        {
            cout << "NAO" << endl;
        }
        cout << endl;
    }
}