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
    int pulo, ct;
    cin >> pulo >> ct;
    int anterior;
    cin >> anterior;
    bool pode = true;
    for (int i = 0; i < ct - 1 && pode; i++)
    {
        int n;
        cin >> n;
        if (abs(n - anterior) > pulo)
        {
            pode = false;
        }
        anterior = n;
    }
    if (pode)
    {
        cout << "YOU WIN" << endl;
    }
    else
    {
        cout << "GAME OVER" << endl;
    }
}